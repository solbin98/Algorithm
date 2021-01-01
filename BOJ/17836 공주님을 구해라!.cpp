//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 100
//using namespace std;
//int map[N + 1][N + 1];
//int d[4][2] = { {-1,0}, {0,-1}, {0,1}, {1,0} };
//
//typedef struct
//{
//	int y, x, chk;
//}inf;
//
//queue <inf> queues;
//int main()
//{
//	int n, m, t;
//	cin >> n >> m >> t;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> map[i][j];
//
//	queues.push({ 1,1,0 });
//	int level = 0, next_level = 1, front = 1, tail = 1;
//	bool visit[N + 1][N + 1][2] = { 0 };
//	visit[1][1][0] = 1;
//	while (queues.empty() == 0)
//	{
//		inf now = queues.front();
//		queues.pop();
//
//		if (level > t) break;
//		if (map[now.y][now.x] == 2) now.chk = 1;
//		if (now.y == n && now.x == m)
//		{
//			printf("%d", level);
//			return 0;
//		}
//		
//
//		for (int i = 0; i < 4; i++)
//		{
//			int py = now.y + d[i][0], px = now.x + d[i][1];
//			if (py >= 1 && py <= n && px >= 1 && px <= m)
//			{
//				if (now.chk == 1 || map[py][px] == 0 || map[py][px] == 2)
//				{
//					if (visit[py][px][now.chk] == 0)
//					{
//						queues.push({ py,px, now.chk });
//						visit[py][px][now.chk] = 1;
//						tail++;
//					}
//				}
//			}
//		}
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}
//		front++;
//	}
//	printf("Fail");
//	return 0;
//}