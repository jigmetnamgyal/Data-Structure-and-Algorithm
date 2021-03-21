#include <stdio.h>

class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class LinkedList
{
public:
	ListNode *head, *tail;
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void addLast(int val)
	{
		if (tail != NULL) // list is not empty
		{
			tail->next = new ListNode(val);
			tail = tail->next;
		}
		else head = tail = new ListNode(val);
	}
};

class Solution
{
public:
	int sum(ListNode *head)
	{
		int res = 0;
		while (head != NULL)
		{
			res += head->val;
			head = head->next;
		}
		return res;
	}

	void Print(ListNode *head)
	{
		while (head != NULL)
		{
			printf("%d ", head->val);
			head = head->next;
		}
	}

	void PrintReverse(ListNode *head)
	{
		if (head == NULL)
		{
			return;
		}
		PrintReverse(head->next);
		printf("%d ", head->val);
	}
};

int i, n, x;

int main(void)
{
	scanf("%d", &n);
	LinkedList *p = new LinkedList();
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		p->addLast(x);
	}
	// 5
	// 1 2 3 4 5
	
	Solution s;
	s.Print(p->head); // 1 2 3 4 5
	s.PrintReverse(p->head); // 5 4 3 2 1
	return 0;
}