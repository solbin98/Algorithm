//#include<iostream>
//#include<cstdio>
//#define N 3000
//#define M 50
//#define MOD 100000
//using namespace std;
//int dp[M + 1][N + 1];
//int main()
//{
//	int n, m, s;
//	cin >> n >> m >> s;
//	dp[0][0] = 1;
//	for (int k = 1; k <= m; k++)
//	{
//		for (int i = n * n; i >= 1; i--)
//		{
//			for (int j = s; j >= k; j--)
//			{
//				dp[i][j] += dp[i - 1][j - k];
//				dp[i][j] %= MOD;
//			}
//		}
//	}
//	printf("%d", dp[n * n][s]);
//	return 0;
//}