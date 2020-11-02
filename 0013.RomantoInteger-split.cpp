// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

string roman[8] = { "M","D", "C", "L", "X", "V", "I" };
map<string, int> CODE;

void split(const string& s, vector<string>& tokens, const string& delimiters = " ")
{
	string::size_type lastPos = 0;
	string::size_type pos = s.find_first_of(delimiters, lastPos);
	while (string::npos != pos) {
		tokens.push_back(s.substr(lastPos, pos - lastPos));//use emplace_back after C++11
		lastPos = ++pos;
		pos = s.find_first_of(delimiters, lastPos);
	}
	tokens.push_back(s.substr(lastPos));

	//string::size_type lastPos = s.find_first_not_of(delimiters, 0);
	//string::size_type pos = s.find_first_of(delimiters, lastPos);
	//while (string::npos != pos || string::npos != lastPos) {
	//	tokens.push_back(s.substr(lastPos, pos - lastPos));//use emplace_back after C++11
	//	lastPos = s.find_first_not_of(delimiters, pos);
	//	pos = s.find_first_of(delimiters, lastPos);
	//}
}

int romanToInt(string s) {
	int rs = 0, len = 7;
	for (int i = 0; i < len; i++) {
		string al = roman[i];
		vector<string> tmp;
		split(s, tmp, al);
		if (tmp.size() > 1) {
			for (int i = 0; i < tmp.size() - 1; i++) {
				rs += tmp[i] == "" ? CODE[al] : CODE[al] - CODE[tmp[i]];
			}
			s = tmp[tmp.size() - 1];
		}
	}
	return rs;
}

int main()
{
	CODE["I"] = 1;
	CODE["V"] = 5;
	CODE["X"] = 10;
	CODE["L"] = 50;
	CODE["C"] = 100;
	CODE["D"] = 500;
	CODE["M"] = 1000;

	cout << romanToInt("LVIII");

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
