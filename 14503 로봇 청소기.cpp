//#include<iostream>
//#include<cstdio>
//#define N 50
//#define UP 0
//#define RIGHT 1
//#define DOWN 2
//#define LEFT 3
//
//using namespace std;
//int map[N + 1][N + 1];
//int dir[4][2] = { {-1,0} , {0,1}, {1,0}, {0,-1} };
//int n, m;
//bool visit[N + 1][N + 1];
//
//int dfs(int y, int x, int d)
//{
//	visit[y][x] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int index = (d - i + 3) % 4;
//		int py = dir[index][0] + y, px = dir[index][1] + x;
//		if (py >= 1 && py <= n && px >= 0 && px <= m)
//		{
//			if (visit[py][px] == 0 && map[py][px] == 0)
//			{
//				dfs(py, px, index);
//				return 0;
//			}
//		}
//	}
//	if (d < 2)
//	{
//		int py = y + dir[d + 2][0], px = x + dir[d + 2][1];
//		if (map[py][px] != 1 && py >= 1 && py <= n && px >= 1 && px <= m)
//			dfs(py, px, d);
//	}
//	else
//	{
//		int py = y + dir[d - 2][0], px = x + dir[d - 2][1];
//		if (map[py][px] != 1 && py >= 1 && py <= n && px >= 1 && px <= m)
//			dfs(py, px, d);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int y, x, d;
//	cin >> n >> m;
//	cin >> y >> x >> d;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			scanf("%d", &map[i][j]);
//
//	dfs(y+1, x+1, d);
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			ans += visit[i][j];
//	cout << ans;
//	return 0;
//}