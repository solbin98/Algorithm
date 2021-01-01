//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//int arr[N + 1], d[N + 1];
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//	arr[0] = 2;
//	for (int i = 0; i <= n; i++)
//	{
//		int max = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] == 0 && arr[j] == 2)
//			{
//				if (d[j] + 1 > max) max = d[j] + 1;
//			}
//			else if (arr[i] == 1 && arr[j] == 0 && d[j] != 0)
//			{
//				if (d[j] + 1 > max) max = d[j] + 1;
//			}
//			else if (arr[i] == 2 && arr[j] == 1)
//			{
//				if (d[j] + 1 > max) max = d[j] + 1;
//			}
//		}
//		d[i] = max;
//		if (max > ans) ans = max;
//	}
//	printf("%d", ans);
//	return 0;
//}