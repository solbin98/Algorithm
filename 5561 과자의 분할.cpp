//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 10000
//#define INF 987654321
//using namespace std;
//int dp[2][N + 1][3], cost[N + 1];
//int n;
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++) scanf("%d", &cost[i]);	
//	for (int i = 0; i <= n; i++) dp[0][i][0] = INF, dp[0][i][1] = INF, dp[0][i][2] = INF, dp[1][i][0] = INF, dp[1][i][1] = INF, dp[1][i][2] = INF;
//	dp[1][1][0] = 0, dp[0][0][0] = 0, dp[1][0][0] = 0;
//	for (int t = 2; t <= n; t++)
//	{	
//
//		int now = t % 2;		
//		for (int j = 1; j <= t; j++)
//		{
//			dp[now][j][1] = min(dp[!now][j - 1][1], dp[!now][j - 1][0] + cost[t - 1]);
//			dp[now][j][2] = min(dp[!now][j][2], dp[!now][j][0] + cost[t - 1]);
//			dp[now][j][0] = min(dp[now][j][1], dp[now][j][2]);
//		}
//	}
//	printf("%d", dp[n%2][n/2][0]);
//	return 0;
//}