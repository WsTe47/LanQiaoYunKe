////输入一组整数，求出这组数字子序列和中的最大值，只要求计算出最大子序列的和，不必求出最大值对应的序列。
////
////最大子序列和：整数序列 A1， A2，... An （可能有负数），求 A1 ~An 的一个子序列 Ai ~Aj，使得 Ai 到 Aj 的和最大。
////
////例如：序列 0, -3, 6, 8, -20, 21, 8, -9, 10, -1, 3, 6, 5，则最大子序列和为 43。
//
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[] = { 0, -3, 6, 8, -20, 21, 8, -9, 10, -1, 3, 6, 5 };
//	int n = sizeof(a) / sizeof(a[0]);		//n is number of array
//	int m=0;		//m is max
//	int x = 0;
//	int t = 0;		//t 是子序列的和
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			t += a[j];
//			if (t >= m)
//				m = t;
//		}
//		t = 0;
//	}
//	printf("%d", m);
//	return 0;
//}
//
