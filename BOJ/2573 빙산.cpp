//#include<iostream>
//#include<cstdio>
//#define N 300
//using namespace std;
//int map[N + 1][N + 1], cnt[N + 1][N + 1];
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int n, m;
//bool visit[N + 1][N + 1];
//
//void dfs(int y, int x)
//{
//	visit[y][x] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int py = y + d[i][0], px = x + d[i][1];
//		if (py >= 1 && py <= n && px >= 1 && px <= m)
//		{
//			if (visit[py][px] == 0 && map[py][px] != 0)
//			{
//				dfs(py, px);
//			}
//		}
//	}
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
//	for (int t = 0;; t++) // 2덩어리 불가능 -> 0 출력
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				map[i][j] -= cnt[i][j];
//				if (map[i][j] < 0) map[i][j] = 0;
//			}
//		}
//	
//		int ans = 0;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				if (map[i][j] != 0 && visit[i][j] == 0)
//				{
//					ans++;
//					dfs(i, j);
//				}
//
//		if (ans >= 2)
//		{
//			printf("%d", t);
//			return 0;
//		}
//
//		else if (ans == 0)
//		{
//			printf("0");
//			return 0;
//		}
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//			{
//				visit[i][j] = 0, cnt[i][j] = 0;
//				if (map[i][j] == 0) continue;
//				for (int k = 0; k < 4; k++)
//				{
//					int ny = i + d[k][0], nx = j + d[k][1];
//					if (ny >= 1 && ny <= n && nx >= 1 && nx <= m)
//					{
//						if (map[ny][nx] == 0)
//							cnt[i][j]++;
//					}
//				}
//			}
//	}
//	return 0;
//}