//#include<iostream>
//#include<cstdio>
//#define N 50
//#define INF 987654321
//using namespace std;
//int memo[N + 1][N + 1][N + 1][N + 1];
//int dp[N + 1][N + 1];
//bool visit[N + 1][N + 1][N + 1][N + 1];
//
//int solve(int h1, int w1, int h2, int w2)
//{
//	if (h2 == 0 || w2 == 0) return memo[h1][w1][h2][w2] = dp[h1][w1];
//	if (memo[h1][w1][h2][w2] != 0 || visit[h1][w1][h2][w2] == 1) return memo[h1][w1][h2][w2];
//	visit[h1][w1][h2][w2] = 1;
//	int min = INF;
//	for (int i = 1; i < h1; i++)
//	{
//		if (i <= h2)
//		{
//			if (min > solve(h1 - i, w1, h2 - i, w2) + solve(i, w1 - w2, i, 0)) min = solve(h1 - i, w1, h2 - i, w2) + solve(i, w1 - w2, i, 0);
//		}
//		else
//		{
//			if (min > solve(i, w1, h2, w2) + solve(h1 - i, w1, 0, w2)) min = solve(i, w1, h2, w2) + solve(h1 - i, w1, 0, w2);
//		}
//	}
//	for (int i = 1; i < w1; i++)
//	{
//		if (i <= w2)
//		{
//			if (min > solve(h1, w1 - i, h2, w2 - i) + solve(h1 - h2, i, 0, i)) min = solve(h1, w1 - i, h2, w2 - i) + solve(h1 - h2, i, 0, i);
//		}
//		else
//		{
//			if (min > solve(h1, i, h2, w2) + solve(h1, w1 - i, h2, 0)) min = solve(h1, i, h2, w2) + solve(h1, w1 - i, h2, 0);
//		}
//	}
//	return memo[h1][w1][h2][w2] = min;
//}
//
//int main()
//{
//	int h1, w1, h2, w2;
//	cin >> h1 >> w1 >> h2 >> w2;
//
//	for (int i = 1; i <= h1; i++)
//		for (int j = 1; j <= w1; j++)
//		{
//			int min = INF;
//			for (int k = 1; k <= i && k <= j; k++)
//			{
//				if (min > dp[k][j - k] + dp[i - k][j] + 1) min = dp[k][j - k] + dp[i - k][j] + 1;
//				if (min > dp[i][j - k] + dp[i - k][k] + 1) min = dp[i][j - k] + dp[i - k][k] + 1;
//			}
//			dp[i][j] = min;
//		}
//
//	solve(h1, w1, h2, w2);
//	printf("%d", memo[h1][w1][h2][w2]);
//	return 0;
//}