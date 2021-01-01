//#include<iostream>
//#include<cstdio>
//#define N 1005
//#define INF 987654321000000
//using namespace std;
//long long dp[N + 1], w[N + 1], e[N + 1];
//long long max_w[N + 1][N + 1], max_e[N + 1][N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld", &w[i]);
//	for (int i = 1; i <= n; i++) scanf("%lld", &e[i]);
//
//	for (int j = 1; j <= n; j++)
//	{
//		for (int i = j; i >= 1; i--)
//		{
//			if (max_w[i+1][j] < w[i]) max_w[i][j] = w[i];
//			else max_w[i][j] = max_w[i+1][j];
//
//			if (max_e[i+1][j] < e[i]) max_e[i][j] = e[i];
//			else max_e[i][j] = max_e[i+1][j];
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		long long min = INF;
//		for (int j = 1; j <= i; j++)
//		{
//			if (min > dp[j - 1] + max_w[j][i] * max_e[j][i])
//				min = dp[j - 1] + max_w[j][i] * max_e[j][i];
//		}
//		dp[i] = min;
//	}
//	printf("%lld", dp[n]);
//	return 0;
//}