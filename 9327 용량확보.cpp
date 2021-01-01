//#include<iostream>
//#include<cstdio>
//#define N 100
//#define MAX 200000
//#define INF 987654321
//
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int n, e, min = INF;
//		int arr[N + 1] = { 0 }, dp[MAX + 1] = { 0 };
//		for (int j = 1; j <= MAX; j++) dp[j] = -1;
//		cin >> n >> e;
//		for (int j = 1; j <= n; j++) scanf("%d", &arr[j]);
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = MAX; k >= 0; k--)
//			{
//				if (dp[k] != -1)
//				{
//					if (dp[k + arr[j]] < dp[k] + 2*arr[j]) dp[k + arr[j]] = dp[k] + 2*arr[j];
//				}
//			}
//		}
//		for (int j = 0; j <= MAX; j++)
//			if (dp[j] >= e && min > j) min = j;
//
//		if (min == INF) printf("FULL\n");
//		else printf("%d\n", min);
//	}
//	return 0;
//}