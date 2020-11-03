// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

bool validMountainArray(vector<int>& A) {
	int len = A.size();
	if (len < 3 || A[0] >= A[1])
		return false;
	int flag = 0;
	for (int i = 1; i < len; i++)
	{
		if (A[i] == A[i - 1])
			return false;
		else if(flag == 0 && A[i] > A[i - 1] || flag == 1 && A[i] < A[i - 1])
			continue;
		else if (flag == 0) {
			flag++;
		}
		else {
			return false;
		}
	}
	return flag == 1;
}

int main()
{
	vector<int> row1;
	row1.push_back(4);
	row1.push_back(3);
	row1.push_back(2);
	row1.push_back(1);

	cout << validMountainArray(row1)  << endl;

	//vector<vector<int>> grid;

	//vector<int> row1;
	//row1.push_back(4);
	//row1.push_back(9);
	//row1.push_back(5);

	//vector<int> row2;
	//row2.push_back(9);
	//row2.push_back(4);
	//row2.push_back(9);
	//row2.push_back(8);
	//row2.push_back(4);

	//for (int al : intersection(row1, row2))
	//	cout << al;

	//for (int al : partitionLabels("ababcbacadefegdehijhklij")) 
	//{
	//	vector<vector<int>> clips;
	//	vector<int> a1 = { 0, 2 };
	//	clips.push_back(a1);
	//	vector<int> a2 = { 4, 6 };
	//	clips.push_back(a2);
	//	vector<int> a3 = { 8, 10 };
	//	clips.push_back(a3);
	//	vector<int> a4 = { 1, 9 };
	//	clips.push_back(a4);
	//	vector<int> a5 = { 1, 5 };
	//	clips.push_back(a5);
	//	vector<int> a6 = { 5, 9 };
	//	clips.push_back(a6);
	//	//[0, 2], [4, 6], [8, 10], [1, 9], [1, 5], [5, 9] };
	//	cout << videoStitching(clips , 10) << endl;
	//}

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
