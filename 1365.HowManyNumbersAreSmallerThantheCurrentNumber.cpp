﻿// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	vector<int> rs;

	for (int al : nums)
	{
		int ct = 0;
		for (int bl : nums) {
			if (al > bl) {
				ct++;
			}
		}
		rs.push_back(ct);
	}
	
	return rs;
}

int main()
{
	vector<int> nums;
	nums.push_back(8);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	for(int al : smallerNumbersThanCurrent(nums))
		cout << al;

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
