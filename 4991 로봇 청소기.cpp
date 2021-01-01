//#include<iostream>
//#include<cstdio>
//#define N 15
//using namespace std;
//
//char str[N + 1][N + 1];
//int cost[N + 1][N + 1], dp[N+1][40000][10];
//int n, ans = 0;
//
//int pows(int n)
//{
//	int r = 1;
//	for (int i = 1; i <= n; i++) r *= 2;
//	return r;
//}
//
//void solve(int num, int value, int bit)
//{
//	if (dp[num][bit][value] > ans) ans = dp[num][bit][value];
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = pows(i - 1), vals = 0;
//		if ((bit | tmp) != bit)
//		{
//			if (cost[num][i] >= value)
//			{
//				if (dp[i][bit | tmp][cost[num][i]] < dp[num][bit][value] + 1)
//				{
//					dp[i][bit | tmp][cost[num][i]] = dp[num][bit][value] + 1;
//					solve(i, cost[num][i], bit | tmp);
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> str[i];
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cost[i + 1][j + 1] = str[i][j] - '0';
//	
//	dp[1][1][0] = 1;
//	solve(1, 0, 1);
//	printf("%d", ans);
//	return 0;
//}