// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>

using namespace std;

bool isPalindrome(ListNode *head)
{
	if (head == nullptr)
		return true;
	ListNode *slow = head;
	ListNode *fast = head;
	ListNode *prev = nullptr;
	ListNode *cur = nullptr;
	while (fast != nullptr && fast->next != nullptr)
	{
		cur = slow;
		slow = slow->next;
		fast = fast->next->next;
		cur->next = prev; //改变当前节点指向方向
		prev = cur;		  //移到下一个节点
	}
	//链表为奇数长时,此时slow在中间节点,fast->next==nullptr,应跳过此节点
	if (fast != nullptr)
		slow = slow->next;
	while (prev != nullptr && slow != nullptr)
	{
		if (prev->val != slow->val)
			return false;
		prev = prev->next;
		slow = slow->next;
	}
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
