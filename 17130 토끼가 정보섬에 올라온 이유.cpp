//#include<iostream>
//#include<cstdio>
//#define N 1005
//using namespace std;
//char map[N + 1][N + 1];
//int dp[N + 1][N + 1], ans = -1;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) scanf("%s", map[i]);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			if (map[i][j] == 'R') continue;
//			dp[i + 1][j + 1] = -1;
//		}
//
//	for (int j = 2; j <= m; j++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (map[i - 1][j - 1] == '#' || dp[i][j] != -1) continue;
//		
//			int max = -1;
//			if (i - 1 >= 1 && max < dp[i - 1][j - 1]) max = dp[i - 1][j - 1];
//			if (max < dp[i][j - 1]) max = dp[i][j - 1];
//			if (i + 1 <= n && max < dp[i + 1][j - 1]) max = dp[i + 1][j - 1];
//
//			dp[i][j] = max;			
//			if (max == -1) continue;
//			if (map[i - 1][j - 1] == 'C') dp[i][j] ++;
//			if (map[i-1][j-1] == 'O' && dp[i][j] > ans) ans = dp[i][j];
//		}
//	}
//	printf("%d", ans);
//}