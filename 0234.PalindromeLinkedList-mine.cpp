// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>

using namespace std;

bool isPalindrome(ListNode* head) {
	if(!head || !head->next)
		return true;
	else if(!head->next->next)
		return head->val == head->next->val;

	ListNode* slow = head, * fast = head;
	int index = 0;
	while(fast->next && fast->next->next){
		slow = slow->next;
		fast = fast->next->next;
		index++;
	}
	if(fast->next){
		index++;
	}
	fast = slow->next;

	int i = 0, count = 0;
	slow = head;
	do{
		i = 0;
		slow = head;
		while(index - count > ++i)
			slow = slow->next;
		if(fast->val != slow->val)
			return false;
		fast = fast->next;
		count++;
	}while(fast);
	
	return true;
}

int main()
{
	ListNode l1(1);
	ListNode l2(2, &l1);
	ListNode l3(3, &l2);

	ListNode l4(4, &l3);
	ListNode l5(4, &l4);
	ListNode l6(3, &l5);
	ListNode l7(2, &l6);
	ListNode l8(1, &l7);

	cout << isPalindrome(&l8);

	// ListNode* cur = &l7;
	// while (cur) {
	// 	cout << cur->val << endl;
	// 	cur = cur->next;
	// }
	//system("pause");
	return 0;
}
