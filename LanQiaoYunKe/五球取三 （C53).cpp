////1. 题目2 - 34
////
////口袋中有红、黄、蓝、白、黑5种颜色的球若干个。
////每次从口袋中取出3个不同颜色的球
////问有多少种取法？并输出每一种取法。
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string a[5] = { "red","yellow","blue","white" ,"black" };
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//		for (int j = 1; j < i; j++)
//			for (int k =0; k < j; k++)
//				if ((a[i] != a[j]) && (a[i] != a[k]) && (a[j] != a[k]))
//				{
//					cout << a[i] << " " << a[j] << " " << a[k];
//					cout << endl;
//					sum += 1;
//				}
//	printf("%d",sum);
//
//	return 0;
//}
//
