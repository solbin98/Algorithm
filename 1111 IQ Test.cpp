//#include<iostream>
//#include<cstdio>
//#define N 50
//using namespace std;
//int arr[N + 1], ans_list[N * N][2];
//int l, cnt = 0, idx = 0;
//int abss(int n)
//{
//	if (n < 0) return -n;
//	return n;
//}
//int main()
//{
//	cin >> l;
//	for (int i = 1; i <= l; i++) cin >> arr[i];
//
//	if (l == 1)
//	{
//		printf("A");
//		return 0;
//	}
//
//	if (l == 2)
//	{
//		if (arr[1] == arr[2]) printf("%d", arr[1]);
//		else printf("A");
//		return 0;
//	}
//
//	int s = arr[1] - arr[2], m = arr[2] - arr[3];
//	if (s == 0)
//	{
//		int a = 0, b = arr[1];
//		bool flag = 0;
//		for (int i = 1; i < l; i++)
//		{
//			if (arr[i] * a + b != arr[i + 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d", arr[l] * a + b);
//			return 0;
//		}
//		flag = 0;
//		a = 1, b = 0;
//		for (int i = 1; i < l; i++)
//		{
//			if (arr[i] * a + b != arr[i + 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) printf("%d", arr[l] * a + b);
//		else printf("B");
//	}
//	else
//	{
//		int a = m / s, b = arr[2] - a * arr[1];
//		bool flag = 0;
//		for (int i = 1; i < l; i++)
//		{
//			if (arr[i] * a + b != arr[i + 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) printf("%d", arr[l] * a + b);
//		else printf("B");
//	}
//	return 0;
//}