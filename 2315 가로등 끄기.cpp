//#include<iostream>
//#include<cstdio>
//#define N 1005
//#define LEFT 0
//#define RIGHT 1
//#define INF 1232000000005
//using namespace std;
//long long dp[N + 1][N + 1][2], a[N + 1][2], sum[N + 1];
//bool v[N + 1][N + 1][2];
//long long all_sum = 0, n, m;
//
//long long dist(long long a1, long long a2)
//{
//	long long out = a1 - a2;
//	if (out < 0) out *= -1;
//	return out;
//}
//
//long long min(long long a, long long b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//long long calc_dp(int s, int e, int dir)
//{
//	if (s  > e) return INF;
//	if (v[s][e][dir] == 1) return dp[s][e][dir];
//	v[s][e][dir] = 1;
//
//	long long dis = 0, cost = 0;
//	if (dir == LEFT)
//	{	
//		cost = all_sum - (sum[e] - sum[s]);
//		dis = dist(a[s][0], a[s + 1][0]);
//		dp[s][e][dir] = min(dis * cost + calc_dp(s + 1, e, LEFT), dp[s][e][dir]);
//
//		dis = dist(a[s][0], a[e][0]);
//		dp[s][e][dir] = min(dis * cost + calc_dp(s + 1, e, RIGHT), dp[s][e][dir]);
//	}
//	else
//	{
//		cost = all_sum - (sum[e-1] - sum[s-1]);
//		dis = dist(a[e][0], a[s][0]);
//		dp[s][e][dir] = min(dis * cost + calc_dp(s, e-1, LEFT), dp[s][e][dir]);
//
//		dis = dist(a[e][0], a[e-1][0]);
//		dp[s][e][dir] = min(dis * cost + calc_dp(s, e-1, RIGHT), dp[s][e][dir]);
//	}
//	return dp[s][e][dir];
//}
//
//int main()
//{
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j <= N; j++)
//			dp[i][j][0] = INF, dp[i][j][1] = INF;
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d %d", &a[i][0], &a[i][1]);
//		if (a[i][0] == m) a[i][1] = 0;
//	}
//
//	for (int i = 1; i <= n; i++) sum[i] = a[i][1] + sum[i - 1];
//	all_sum = sum[n];
//
//	dp[m][m][0] = 0;
//	calc_dp(1, n, LEFT);
//	calc_dp(1, n, RIGHT);
//	printf("%lld", min(dp[1][n][LEFT], dp[1][n][RIGHT]));
//}