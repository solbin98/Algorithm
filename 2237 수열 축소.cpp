//#include<iostream>
//#include<cstdio>
//#define N 20000
//#define M 10000
//#define minus 1
//#define plus 2
//
//using namespace std;
//int dp[101][N+10][2], a[101];
//
//int main()
//{
//	int n, t;
//	cin >> n >> t;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	t += M;
//	dp[2][M + (a[1] - a[2])][0] = minus, dp[2][M + (a[1] - a[2])][1] = M + a[1];
//	dp[1][M + a[1]][1] = -1;
//	for (int i = 3; i <= n; i++)
//	{
//		for (int j = 0; j <= N; j++)
//		{
//			if (dp[i - 1][j][0] != 0)
//			{
//				dp[i][j + a[i]][0] = plus, dp[i][j + a[i]][1] = j;
//				dp[i][j - a[i]][0] = minus, dp[i][j - a[i]][1] = j;
//			}
//		}
//	}
//	if (dp[n][t][0] == 0)
//	{
//		printf("0");
//		return 0;
//	}
//	int now = t, idx = 0, now_idx = n;
//	int arr[101] = { 0 };
//	while (now_idx > 1)
//	{
//		arr[++idx] = dp[now_idx][now][0];
//		now = dp[now_idx--][now][1];
//	}
//	arr[++idx] = minus;
//
//	int i = idx;
//	while(i > 1)
//	{
//		while (arr[i - 2] == plus)
//		{
//			printf("2\n");
//			i--;
//		}
//		printf("1\n");
//		i--;
//	}
//	return 0;
//}