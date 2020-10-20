// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"

using namespace std;

void reorderList(ListNode* head) {
	if (not head or not head->next)
		return;
	ListNode* l = head;
	ListNode* r = head;
	ListNode* mid = head;

	while (r->next and r->next->next) {
		l = l->next;
		r = r->next->next;
	}

	r = l->next;
	while (r->next) {				//后半部分链表逆序
		mid = r->next;
		r->next = mid->next;
		mid->next = l->next;
		l->next = mid;
	}

	mid = l;
	l = head;
	while (l != mid) {
		r = mid->next;
		mid->next = r->next;
		r->next = l->next;
		l->next = r;
		l = r->next;
	}
}

int main()
{
	ListNode l1(8);
	ListNode l2(7, &l1);
	ListNode l3(6, &l2);
	ListNode l4(5, &l3);
	ListNode l5(4, &l4);
	ListNode l6(3, &l5);
	ListNode l7(2, &l6);
	ListNode l8(1, &l7);

	reorderList(&l8);

	ListNode* cur = &l8;
	while (cur) {
		cout << cur->val << endl;
		cur = cur->next;
	}
	system("pause");
	return 0;
}
