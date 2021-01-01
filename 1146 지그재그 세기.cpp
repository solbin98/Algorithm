//#include<iostream>
//#include<cstdio>
//#define N 20
//#define small 0
//#define big 1
//using namespace std;
//long long dp[N + 1][2], sum[N + 1][N + 1];
//int main()
//{
//	int n, t;
//	dp[1][small] = 1, dp[2][small] = 1, dp[2][big] = 1;
//	dp[0][0] = 1, dp[0][1] = 1;
//	cin >> t;
//	n = 20;
//	for (int i = 1; i <= n; i++) sum[i][1] = i, sum[i][0] = 1, sum[0][i] = 1;
//	for(int i=1;i<=n;i++)
//		for (int j =2; j <= n; j++)
//		{
//			if (i < j) continue;
//			if (i == j) sum[i][j] = 1;
//			else sum[i][j] = sum[i - 1][j] + sum[i - 1][j - 1];
//			sum[i][j];
//		}
//
//	for (int i = 3; i <= 20; i++)
//		for (int j = 1; j <= i; j++)
//		{
//			if (j % 2 == 0) dp[i][small] += dp[j - 1][small] * dp[i - j][small] * sum[i-1][j-1];
//			else dp[i][big] += dp[j - 1][big] * dp[i - j][small] * sum[i-1][j-1];
//	}
//
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		printf("%lld\n", (dp[n][small] + dp[n][big]));
//	}
//	return 0;
//}