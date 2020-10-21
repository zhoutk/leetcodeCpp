// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"

using namespace std;

bool isLongPressedName(string name, string typed) {
	if (name.length() > typed.length())
		return false;
	int len = name.length();
	int i = 0, j = 0;
	while (i < len ) {
		if (name[i] == typed[j]) {
			int repeat = 0;
			while (name[i] == name[i + ++repeat]);
			int r2 = 0;
			while (typed[j] == typed[j + ++r2]);
			if (r2 < repeat)
				return false;
			i += repeat;
			j += r2;
		}
		else {
			return false;
		}
	}
	if (j < typed.length())
		return false;
	else
		return true;
}

int main()
{
	cout << isLongPressedName("saeed", "ssaaedd");

	//ListNode l1(3);
	//ListNode l2(4, &l1);
	//ListNode l3(2, &l2);

	//ListNode l4(4);
	//ListNode l5(6, &l4);
	//ListNode l6(5, &l5);
	//ListNode l7(9, &l6);

	////ListNode l7(2, &l6);
	////ListNode l8(1, &l7);

	//ListNode* cur = addTwoNumbers(&l3, &l7);
	//while (cur) {
	//	cout << cur->val << endl;
	//	cur = cur->next;
	//}
	system("pause");
	return 0;
}
