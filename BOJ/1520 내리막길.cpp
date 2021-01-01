//#include<iostream>
//#include<cstdio>
//#define N 500
//using namespace std;
//int map[N + 1][N + 1], memo[N + 1][N + 1];
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} }, n, m;
//bool visit[N + 1][N + 1];
//
//int solve(int y, int x)
//{
//	if (memo[y][x] != 0 || visit[y][x] == 1) return memo[y][x];
//	int count = 0;
//	visit[y][x] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int py = y + d[i][0], px = x + d[i][1];
//		if (py <= n && py >= 1 && px <= m && px >= 1 && map[py][px] < map[y][x])
//		{
//			count += solve(py, px);
//		}
//	}
//	memo[y][x] = count;
//	return memo[y][x];
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			scanf("%d", &map[i][j]);
//
//	memo[n][m] = 1;
//	solve(1, 1);
//	printf("%d", memo[1][1]);
//	return 0;
//}