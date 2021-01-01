//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 50
//using namespace std;
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} }, dp[N + 1][N + 1], n, m;
//char map[N + 1][N + 1];
//bool visit[N + 1][N + 1], chk[N + 1][N + 1];
//
//int solve(int i, int j)
//{
//	if (dp[i][j] != 0) return dp[i][j];
//	int val = map[i - 1][j - 1] - '0';
//	int max = 0;
//	for (int l = 0; l < 4; l++)
//	{
//		int py = i + d[l][0] * val, px = j + d[l][1] * val;
//		if (py >= 1 && py <= n && px >= 1 && px <= m)
//		{
//			if (map[py - 1][px - 1] == 'H') continue;
//			if (max < solve(py, px)) max = solve(py, px);
//		}
//	}
//	return dp[i][j] = max + 1;
//}
//
//int judge(int i, int j)
//{
//	visit[i][j] = 1;
//
//	int val = map[i - 1][j - 1] - '0';
//	int ref = 0;
//	for (int l = 0; l < 4; l++)
//	{
//		int py = i + d[l][0] * val, px = j + d[l][1] * val;
//		if (py >= 1 && py <= n && px >= 1 && px <= m)
//		{
//			if (map[py - 1][px - 1] != 'H' && visit[py][px] == 0 && chk[py][px] == 0) ref += judge(py, px);
//			if (visit[py][px] == 1) return -1;
//		}
//	}	
//	chk[i][j] = 1;
//	visit[i][j] = 0;
//	return ref;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> map[i];
//	int ref = judge(1, 1);
//	if (ref < 0)
//	{
//		printf("-1");
//		return 0;
//	}
//
//	printf("%d", solve(1, 1));
//	return 0;
//}