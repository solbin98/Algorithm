//#include<iostream>
//#include<cstdio>
//#define N 100
//
//using namespace std;
//int map[N + 1][N + 1], d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int tmp[N + 1][N + 1];
//bool visit[N + 1][N + 1];
//int n;
//
//void dfs(int y, int x)
//{
//	visit[y][x] = 1, map[y][x] = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int py = y + d[i][0], px = x + d[i][1];
//		if (py <= n && py >= 1 && px >= 1 && px <= n)
//		{
//			if (visit[py][px] == 0 && map[py][px] != 0) dfs(py, px);
//		}
//	}
//	return;
//}
//
//int main()
//{
//	int ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> tmp[i][j];
//
//	for (int h = 0; h <= N; h++)
//	{
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				map[i][j] = tmp[i][j], visit[i][j] = 0;
//
//
//		int count = 0;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				if (map[i][j] <= h) map[i][j] = 0;
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				if (map[i][j] != 0) dfs(i, j), count++;
//
//		if (count > ans) ans = count;
//	}
//	printf("%d", ans);
//	return 0;
//}