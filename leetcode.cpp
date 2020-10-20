// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"

using namespace std;

void reorderList(ListNode* head) {
	if (head == nullptr || head->next == nullptr)
		return;
	int len = 0;
	ListNode* cur = head;
	while (cur) {
		len++;
		cur = cur->next;
	}

	int half = (int)(len / 2);

	cur = head;
	int index = 0;
	ListNode* halfHead = nullptr;
	while (cur)
	{
		if (index++ == half) {
			halfHead = cur->next;
			cur->next = nullptr;
			break;
		}
		cur = cur->next;
	}

	cur = head;
	ListNode* hcur = halfHead;
	int over = len % 2 == 1 ? half : half - 1;
	for(int i = 0; i < over; i++)
	{
		ListNode* tmp = cur->next;
		cur->next = hcur;
		hcur = hcur->next;
		cur->next->next = tmp;
		//if (cur->next->next)
		{
			cur = cur->next->next;
		}
	}

	cout << "List length : " << len << endl;
}

int main()
{
	ListNode l1(1);
	ListNode l2(2, &l1);
	ListNode l3(3, &l2);
	ListNode l4(4, &l3);
	ListNode l5(5, &l4);
	ListNode l6(6, &l5);
	ListNode l7(7, &l6);
	ListNode l8(8, &l7);

	reorderList(&l8);

	ListNode* cur = &l8;
	while (cur) {
		cout << cur->val << endl;
		cur = cur->next;
	}
	system("pause");
	return 0;
}
