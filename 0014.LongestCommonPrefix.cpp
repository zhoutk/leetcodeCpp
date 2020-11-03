// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)
		return "";
	else if (strs.size() == 1)
		return strs[0];
	else {
		vector<char> rs;
		int len = strs.size();
		int index = 0;
		while (true) {
			int count = 0;
			if (strlen(strs[0].c_str()) <= index)
				break;
			char cur = (strs[0]).at(index);
			int i = 1;
			for (; i < len; i++) {
				if (strlen(strs[i].c_str()) > index) {
					if (cur != (strs[i]).at(index)) {
						break;
					}
				}
				else {
					break;
				}
			}
			index++;
			if (i == len) {
				rs.push_back(cur);
			}
			else
				break;
		}
		string res;
		res.insert(res.begin(), rs.begin(), rs.end());
		return res;
	}
}
int main()
{
	vector<string> strs;
	strs.push_back("");
	strs.push_back("");
	strs.push_back("");
	cout << longestCommonPrefix(strs)  << endl;

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
