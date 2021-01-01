//#include<iostream>
//#include<cstdio>
//#define N 505
//#define INF 987654321
//using namespace std;
//int arr[N + 1][N + 1], dp[N + 1][N + 1];
//int a[N + 1];
//
//int abss(int a, int b)
//{
//	int r = a - b;
//	if (r < 0) return r *= -1;
//	return r;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//
//	for (int j = 1; j <= n; j++)
//		for (int i = j; i >= 1; i--)
//		{
//			if (a[i] > arr[i + 1][j]) arr[i][j] = a[i];
//			else arr[i][j] = arr[i + 1][j];
//		}
//
//	for (int j = 1; j <= n; j++)
//	{
//		for (int i = j; i >= 1; i--)
//		{
//			int min = INF;
//			for (int k = i; k < j; k++)
//			{
//				if (min > dp[i][k] + dp[k + 1][j] + abss(arr[i][k], arr[k + 1][j]))
//					min = dp[i][k] + dp[k + 1][j] + abss(arr[i][k], arr[k + 1][j]);
//			}
//			if (min == INF) min = 0;
//			dp[i][j] = min;
//		}
//	}
//	printf("%d", dp[1][n]);
//	return 0;
//}