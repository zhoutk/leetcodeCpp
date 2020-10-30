// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
	int sum = 0;
	int h = grid.size();
	for (int i = 0; i < h; i++) {
		vector<int> row = grid[i];
		int w = row.size();
		for (int j = 0; j < w; j++) {
			int ele = row[j];
			if (ele) {
				sum += 4;
				if (j - 1 >= 0)
					if (row[j - 1])
						sum--;
				if (j + 1 < w)
					if (row[j + 1])
						sum--;
				if (i - 1 >= 0)
					if (grid[i - 1][j])
						sum--;
				if (i + 1 < h)
					if (grid[i + 1][j])
						sum--;
			}
		}
	}

	return sum;
}

int main()
{
	vector<vector<int>> grid;

	vector<int> row1;
	row1.push_back(0);
	row1.push_back(1);
	row1.push_back(0);
	row1.push_back(0);

	vector<int> row2;
	row2.push_back(1);
	row2.push_back(1);
	row2.push_back(1);
	row2.push_back(0);

	vector<int> row3;
	row3.push_back(0);
	row3.push_back(1);
	row3.push_back(0);
	row3.push_back(0);

	vector<int> row4;
	row4.push_back(1);
	row4.push_back(1);
	row4.push_back(0);
	row4.push_back(0);

	grid.push_back(row1);
	grid.push_back(row2);
	grid.push_back(row3);
	grid.push_back(row4);

	cout << islandPerimeter(grid);

	//for(int al : smallerNumbersThanCurrent(nums))
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
