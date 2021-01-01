//#include<cstdio>
//#define N 1000
//#define INF 987654321
//
//int a[N + 1];
//int dp[N + 1][N + 1];
//int n;
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int dps(int num, int pre)
//{
//	int mins = INF;
//
//	if (num == n)
//	{
//		dp[num][pre] = a[n];
//		return dp[num][pre];
//	}
//
//	if (dp[num][pre] != INF) return dp[num][pre];
//	if (num + pre + 1 <= n)
//		mins = min(mins, dps(num + pre + 1, pre + 1));
//	if (num - pre >= 1 )
//		mins = min(mins, dps(num - pre, pre));
//
//	dp[num][pre] = mins;
//	if (mins != INF) dp[num][pre] += a[num];
//	return dp[num][pre];
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int i = 0; i <= n; i++)
//		for (int j = 0; j <= n; j++)
//			dp[i][j] = INF;
//	dps(2, 1);
//	printf("%d", dp[2][1]);
//	return 0;
//}