//#include<iostream>
//#include<cstdio>
//#define N 40
//using namespace std;
//int dp[N + 1] = {1,1,2};
//int d[N + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 3; i <= n; i++) dp[i] = dp[i - 1] + dp[i - 2];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//		{
//			d[i][j] += dp[j - 1] * dp[i - j];
//			for (int k = 1; k < j; k++) d[i][j] += dp[j - k - 1] * dp[i - j];
//			for (int k = 1; k <= i - j; k++) d[i][j] += dp[j - 1] * dp[i - j - k];
//		}
//
//	int ans = dp[m - 1] * dp[n - m];
//	for (int i = 1; i <= m - 1; i++) ans += d[m - 1][i] * dp[n-m];
//	for (int i = 1; i <= n - m; i++) ans += d[n - m][i] * dp[m-1];
//
//	printf("%d", ans);
//	return 0;
//}