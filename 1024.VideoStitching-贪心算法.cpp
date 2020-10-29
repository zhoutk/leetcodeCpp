// leetcode.cpp: 定义应用程序的入口点。
//

#include "leetcode.h"
#include <vector>

using namespace std;

int videoStitching(vector<vector<int>>& clips, int T) {

	vector<int> maxn(T);
	int last = 0, ret = 0, pre = 0;
	for (vector<int>& it : clips) {
		if (it[0] < T) {
			maxn[it[0]] = max(maxn[it[0]], it[1]);
		}
	}
	for (int i = 0; i < T; i++) {
		last = max(last, maxn[i]);
		if (i == last) {
			return -1;
		}
		if (i == pre) {
			ret++;
			pre = last;
		}
	}
	return ret;

	//std::sort(clips.begin(), clips.end());//先排序，以方便遍历
	//int size = clips.size();
	//if (clips[0][0] != 0) return -1;//第一个片段不是 0  开始
	//int res = 0;
	//int curEnd = 0;//上个片段结束
	//int index = 0;
	//while (index < size)//依次遍历每个片段
	//{
	//	int maxEnd = 0;//最远结尾
	//	bool isok = false;
	//	while (index < size && clips[index][0] <= curEnd) //找一个当前能拼接的
	//	{
	//		if (clips[index][1] > curEnd) //结束最远的
	//		{
	//			isok = true;
	//			maxEnd = max(maxEnd, clips[index][1]);
	//		}
	//		index++;
	//	}
	//	if (!isok) return -1;//没找到
	//	if (isok)//找到了
	//	{
	//		res++;
	//		curEnd = maxEnd;
	//		if (curEnd >= T) return res;//已满足
	//	}
	//}
	//return -1;
}

int main()
{
	//for (int al : partitionLabels("ababcbacadefegdehijhklij")) 
	{
		vector<vector<int>> clips;
		vector<int> a1 = { 0, 2 };
		clips.push_back(a1);
		vector<int> a2 = { 4, 6 };
		clips.push_back(a2);
		vector<int> a3 = { 8, 10 };
		clips.push_back(a3);
		vector<int> a4 = { 1, 9 };
		clips.push_back(a4);
		vector<int> a5 = { 1, 5 };
		clips.push_back(a5);
		vector<int> a6 = { 5, 9 };
		clips.push_back(a6);
		//[0, 2], [4, 6], [8, 10], [1, 9], [1, 5], [5, 9] };
		cout << videoStitching(clips , 10) << endl;
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
