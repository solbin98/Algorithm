//#include<iostream>
//#include<cstdio>
//#define N 1200
//#define INF 987654321
//using namespace std;
//int dp[N + 1][N + 1], queue[N * N + 1][2];
//int n, ans = INF;
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			dp[i][j] = INF;
//
//	int front = 1, tail = 1;
//	queue[front][0] = 1, queue[front][1] = 0;
//	dp[1][0] = 0;
//	while (front <= tail)
//	{
//		int now_i = queue[front][0], now_j = queue[front][1];
//		if (now_i == n && ans > dp[now_i][now_j]) ans = dp[now_i][now_j];
//		if (now_i + now_j <= N && dp[now_i + now_j][now_j] == INF)
//			dp[now_i + now_j][now_j] = dp[now_i][now_j] + 1, queue[++tail][0] = now_i + now_j, queue[tail][1] = now_j;
//		if (dp[now_i][now_i] == INF) 
//			dp[now_i][now_i] = dp[now_i][now_j] + 1, queue[++tail][0] = now_i, queue[tail][1] = now_i;
//		if (dp[now_i - 1][now_j] == INF)
//			dp[now_i - 1][now_j] = dp[now_i][now_j] + 1, queue[++tail][0] = now_i-1, queue[tail][1] = now_j;
//		front++;
//	}
//
//	printf("%d", ans);
//	return 0;
//}