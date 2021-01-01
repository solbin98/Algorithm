//#include<iostream>
//#include<cstdio>
//#define N 500
//#define T 5000
//
//using namespace std;
//int dp[N + 1][T + 1][3], rest[N + 1];
//int chk[N + 1];
//int main()
//{
//	int t, n, ans = 0, ans_idx = 0;
//	cin >> t >> n;
//	for (int i = 1; i <= n; i++) chk[i] = -1;
//	for (int i = 1; i <= n; i++) scanf("%d", &rest[i]);
//	dp[0][0][0] = 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j <= t; j++)
//		{
//			dp[i][j][0] = dp[i - 1][j][0], dp[i][j][1] = dp[i - 1][j][1], dp[i][j][2] = dp[i - 1][j][2];
//			if (j - rest[i] >= 0 && dp[i - 1][j - rest[i]][0] == 1)
//			{
//				dp[i][j][0] = 1, dp[i][j][1] = j - rest[i], dp[i][j][2] = i;
//				if (ans < j) ans = j, ans_idx = i;
//			}
//		}
//
//	while (ans != 0)
//	{
//		chk[dp[ans_idx][ans][2]] = dp[ans_idx][ans][1];
//		ans = dp[ans_idx][ans][1];
//	}
//
//	int start = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (chk[i] == -1) chk[i] = start, start += rest[i];
//	}
//	for (int i = 1; i <= n; i++) printf("%d ", chk[i]);
//}