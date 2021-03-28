#include <stdio.h>
#include <iostream>

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode *parent;
    TreeNode(int x, TreeNode *prev = NULL) : val(x), left(NULL), right(NULL), parent(prev) {}
};

class Tree
{
public:
    TreeNode *head;
    Tree() : head(NULL){};

    void Insert(int val)
    {
        Insert(head, val);
    }

    void Insert(TreeNode *&tree, int val)
    {
        if (tree == NULL)
        {
            tree = new TreeNode(val);
            return;
        }
        // if (val == tree->val)
        //     return;
        if (val < tree->val)
            Insert(tree->left, val);
        else
            Insert(tree->right, val);
    }
};

class Solution
{
public:
    TreeNode *Find(TreeNode *tree, int element)
    {
        if (tree == NULL)
            return NULL;
        if (element == tree->val)
            return tree;
        if (element < tree->val)
            return Find(tree->left, element);
        else
            return Find(tree->right, element);
    }
    TreeNode *Minimum(TreeNode *tree)
    {
        if (tree == NULL)
            return tree;
        // while we have left subtree, go there
        while (tree->left != NULL)
            tree = tree->left;
        return tree;
    }

    TreeNode *Maximum(TreeNode *tree)
    {
        if (tree == NULL)
            return tree;
        while (tree->right != NULL)
            tree = tree->right;
        return tree;
    }

    TreeNode *Next(TreeNode *tree)
    {
        // If right subtree exists, next element is
        // min of right subtree
        if (tree->right != NULL)
            return Minimum(tree->right);

        // otherwise, we need to move up untill
        // we do not find a node which is left node of its parent
        TreeNode *Prev = tree->parent;
        while ((Prev != NULL) && (tree == Prev->right))
        {
            tree = Prev;
            Prev = Prev->parent;
        }
        return Prev;
    }

    TreeNode *Prev(TreeNode *tree)
    {
        if (tree->left != NULL)
            return Maximum(tree->left);

        TreeNode *Next = tree->parent;
        while ((Next != NULL) && (tree == Next->left))
        {
            tree = Next;
            Next = Next->parent;
        }
        return Next;
    }
    int minDepth(TreeNode *tree)
    {
        if (tree == NULL)
            return 0;
        if (tree->left == NULL)
            return minDepth(tree->right) + 1;
        if (tree->right == NULL)
            return minDepth(tree->left) + 1;

        int left = minDepth(tree->left);
        int right = minDepth(tree->right);
        return min(left, right) + 1;
    }

    int maxDepth(TreeNode *tree)
    {
        if (tree == NULL)
            return 0;
        if (tree->left == NULL)
            return maxDepth(tree->right) + 1;
        if (tree->right == NULL)
            return maxDepth(tree->left) + 1;

        int left = maxDepth(tree->left);
        int right = maxDepth(tree->right);
        return max(left, right) + 1;
    }
    int sum(TreeNode *tree)
    {
        if (tree == NULL)
            return 0;
        return (tree->val + sum(tree->left) + sum(tree->right));
    }
    bool isLeaf(TreeNode *tree)
    {
        if (tree == NULL)
            return false;
        if (tree->left == NULL && tree->right == NULL)
            return true;
        return false;
    }

    int sumOfLeftLeaves(TreeNode *tree)
    {
        if (tree == NULL)
            return 0;
        if (isLeaf(tree->left))
            return tree->left->val + sumOfLeftLeaves(tree->right);
        return sumOfLeftLeaves(tree->left) + sumOfLeftLeaves(tree->right);
    }
};

int n, i, val, element;

int main(void)
{
    //freopen("10063.in","r",stdin);
    Tree *t = new Tree();
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        t->Insert(val);
    }

    // scanf("%d", &element);

    Solution s;
    // TreeNode *ptr = s.Minimum(t->head, element);

    // if (ptr == NULL)
    //     printf("NO\n");
    // else if (ptr->val == element)
    //     printf("YES\n");
    // else
    //     printf("\n");

    // return 0;

    TreeNode *ptr = s.Minimum(t->head);
    std::cout << ptr->val;
}

// you are given a binary tree find element 3 and find all the eleme in that sub tree

// find min element in the sub tree with the root 12

// sum of left leaves, sum of right leaves, sum of the non leaves. How many non leaves are there (no of leave - all the nodes)