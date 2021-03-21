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

	ListNode* detectCycle(ListNode *head)
	{
		if (head == NULL) return 0;
		ListNode* p = head;
		ListNode* q = head;
		while (q->next && q->next->next)
		{
			p = p->next;
			q = q->next->next;
			if (p == q)
			{
				q = head;
				while (p != q)
				{
					p = p->next;
					q = q->next;
				}
				return p;
			}
		}
		return NULL;
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
	p->tail->next = p->head->next;

	// 1 2 3 4 5
	//  |   |
  //  _______ 

	Solution s;
	//s.Print(p->head); // 1 2 3 4 5

	ListNode *k = s.detectCycle(p->head);
	printf("%d\n", k->val);
	return 0;
}