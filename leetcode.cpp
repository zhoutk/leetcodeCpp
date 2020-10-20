// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"

using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	if (not l1 and not l2)
		return new ListNode(0);
	else if (not l1)
		return l2;
	else if (not l2)
		return l1;
	else {
		int val = l1->val + l2->val;
		int up = (int)(val / 10);
		int left = val % 10;
		ListNode* head = new ListNode(left);
		ListNode* cur = head;
		while (l1->next && l2->next) {
			val = l1->next->val + l2->next->val + up;
			up = (int)(val / 10);
			left = val % 10;
			ListNode* node = new ListNode(left);
			cur->next = node;
			cur = node;
			l1 = l1->next;
			l2 = l2->next;
		}
		ListNode* tail = l1->next ? l1->next : l2->next;
		while (tail) {
			val = tail->val + up;
			up = (int)(val / 10);
			left = val % 10;
			ListNode* node = new ListNode(left);
			cur->next = node;
			cur = node;
			tail = tail->next;
		}
		return head;
	}
}

int main()
{
	ListNode l1(3);
	ListNode l2(4, &l1);
	ListNode l3(2, &l2);

	ListNode l4(4);
	ListNode l5(6, &l4);
	ListNode l6(5, &l5);
	ListNode l7(9, &l6);

	//ListNode l7(2, &l6);
	//ListNode l8(1, &l7);

	ListNode* cur = addTwoNumbers(&l3, &l7);
	while (cur) {
		cout << cur->val << endl;
		cur = cur->next;
	}
	system("pause");
	return 0;
}
