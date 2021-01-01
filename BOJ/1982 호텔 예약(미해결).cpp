//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//int dp[N + 1][N + 1][N + 1], room[N + 1][2];
//int m, f, r, c;
//bool visit[N + 1][N + 1][N + 1];
//
//int solve(int man, int fem, int rm)
//{
//	
//	if (man < 0) man = 0;
//	if (fem < 0) fem = 0;
//	if (dp[man][fem][rm] != INF || visit[man][fem][rm] == 1) return dp[man][fem][rm];
//	visit[man][fem][rm] = 1;
//	int min = INF;
//	if (rm != 0 && man != 0 && min > solve(man - room[rm][0], fem, rm - 1) + room[rm][1]) min = solve(man - room[rm][0], fem, rm - 1) + room[rm][1];
//	if (rm != 0 && fem != 0 && min > solve(man, fem - room[rm][0], rm - 1) + room[rm][1]) min = solve(man, fem - room[rm][0], rm - 1) + room[rm][1];
//	if (rm != 0 && min > solve(man, fem, rm - 1)) min = solve(man, fem, rm - 1);
//	if (rm != 0 && man == 1 && fem == 1 && c >= 1)
//	{
//		if (min > solve(0, 0, rm - 1) + room[rm][1]) min = solve(0, 0, rm - 1) + room[rm][1];
//	}
//	dp[man][fem][rm] = min;
//	return min;
//}
//
//int main()
//{
//
//	cin >> m >> f >> r >> c;
//	for (int i = 1; i <= r; i++) scanf("%d %d", &room[i][0], &room[i][1]);
//
//	for (int i = 0; i <= m; i++)
//		for (int j = 0; j <= f; j++)
//			for (int k = 0; k <= r; k++)
//				dp[i][j][k] = INF;
//
//	for (int i = 0; i <= r; i++) dp[0][0][i] = 0;
//	int tmp = solve(m, f, r);
//	if (tmp == INF) printf("Impossible");
//	else printf("%d",tmp);
//	return 0;
//}