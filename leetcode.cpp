// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>

using namespace std;

vector<int> partitionLabels(string S) {
	int last[26];
	int length = S.size();
	for (int i = 0; i < length; i++) {
		last[S[i] - 'a'] = i;
	}
	vector<int> partition;
	int start = 0, end = 0;
	for (int i = 0; i < length; i++) {
		end = max(end, last[S[i] - 'a']);
		if (i == end) {
			partition.push_back(end - start + 1);
			start = end + 1;
		}
	}
	return partition;
}

int main()
{
	for (int al : partitionLabels("ababcbacadefegdehijhklij")) {
		cout << al << endl;
	}

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
