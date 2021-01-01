//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 10
//using namespace std;
//int mab[N+1][N+1], n, m, ans = 0;
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//
//void calc(int cnt, int sum, int (*maps)[N+1] )
//{
//	if (cnt == 3) return;
//	int map[N + 1][N + 1] = { 0 };
//	bool visits[N + 1][N + 1];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			map[i][j] = maps[i][j];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{				
//			int tmp = sum, num = 0;
//			for (int y = 1; y <= n; y++)
//				for (int x = 1; x <= m; x++)
//					maps[y][x] = map[y][x];
//
//			if (maps[i][j] == 0) continue;
//
//			bool visit[N + 1][N + 1] = { 0 };
//			queue <pair<int, int>> queues;
//			queues.push({ i, j });
//			visit[i][j] = 1;
//			
//			int key = map[i][j];
//			while (queues.empty() == 0)
//			{
//				pair<int, int> front = queues.front();
//				num++;
//				for (int k = 0; k < 4; k++)
//				{
//					int py = front.first + d[k][0], px = front.second + d[k][1];
//					if (py >= 1 && py <= n && px >= 1 && px <= m)
//					{
//						if (visit[py][px] == 0 && (key == maps[py][px]))
//						{
//							visit[py][px] = 1;
//							queues.push({ py,px });
//						}
//					}
//				}
//				maps[front.first][front.second] = 0;
//				queues.pop();
//			}
//
//
//			for (int x = 1; x <= m; x++)
//			{			
//				int idx = n+1;
//				for (int y = n; y >= 1; y--)
//					if (maps[y][x] != 0)
//					{
//						maps[--idx][x] = maps[y][x];
//					}
//				for (int i = idx - 1; i >= 1; i--) maps[i][x] = 0;
//			}
//			tmp += num * num;
//			if (tmp > ans) ans = tmp;
//			calc(cnt + 1, tmp, maps);
//		}
//}
//
//int main()
//{
//	cin >> m >> n;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) 
//			scanf("%d", &mab[i][j]);
//	
//	calc(0, 0, mab);
//	printf("%d", ans);
//	return 0;
//}