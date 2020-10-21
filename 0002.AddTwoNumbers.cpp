// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"

using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* c = new ListNode();
	ListNode* ans = c;
	ListNode* a = l1, * b = l2;
	int d = 0;
	while (true) {
		int aval = 0, bval = 0;
		if (a != nullptr) {
			aval = a->val;
			a = a->next;
		}
		if (b != nullptr) {
			bval = b->val;
			b = b->next;
		}
		c->val = aval + bval + d;
		d = 0;
		if (c->val >= 10) {
			c->val -= 10;
			d = 1;
		}
		if (a == nullptr && b == nullptr && d == 0) break;
		c->next = new ListNode();
		c = c->next;
	}
	return ans;
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
