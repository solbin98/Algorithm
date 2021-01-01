//#include<iostream>
//#include<cstdio>
//#define N 3000
//#define INF 2087654321
//using namespace std;
//int dp[N + 1][N + 1][2], a[N + 1];
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int main()
//{
//	int n, b;
//
//	cin >> n >> b;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int i = 0; i <= n; i++) dp[i][0][0] = -INF;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			if (j > i) continue;
//			dp[i][j][0] = max(dp[i - 1][j - 1][0] + a[i], dp[i - 1][j - 1][1]);
//			dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j][0]);
//		}
//	}
//	printf("%d", max(dp[n][b][0],dp[n][b][1]));
//	return 0;
//}