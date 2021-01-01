//#include<iostream>
//#include<cstdio>
//#define N 300
//#define INF 987654321
//#define MAX(a,b) ((a > b)? (a) : (b))
//using namespace std;
//int ary[N + 1], dp[N + 1][N + 1][2];
//int sum[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &ary[i]), sum[i] = sum[i - 1] + ary[i], dp[i][1][0] = sum[i];
//	for (int j = 2; j <= m; j++)
//	{
//		for (int i = j; i <= n; i++)
//		{
//			int min = INF, min_index = INF;
//			for (int k = j; k <= i; k++)
//			{
//				if (min > MAX((sum[i] - sum[k - 1]), dp[k - 1][j - 1][0]))
//				{
//					min = MAX((sum[i] - sum[k - 1]), dp[k - 1][j - 1][0]);
//					min_index = k - 1;
//				}
//			}
//			dp[i][j][0] = min;
//			dp[i][j][1] = min_index;
//		}
//	}
//	printf("%d\n", dp[n][m][0]);
//	int now = n, index = 1;
//	int out[N+1] = { 0 };
//	while (m > 0)
//	{
//		out[index++] = now - dp[now][m][1];
//		now = dp[now][m--][1];
//	}
//	for (int i = index - 1; i >= 1; i--) printf("%d ", out[i]);
//	return 0;
//}