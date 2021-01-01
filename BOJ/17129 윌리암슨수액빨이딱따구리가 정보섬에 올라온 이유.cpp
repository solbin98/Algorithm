//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 3000
//using namespace std;
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int map[N + 1][N + 1];
//queue <pair<int,int>> queues;	
//bool visit[N + 1][N + 1] = { 0 };
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		char str[N + 1];
//		scanf("%s", str);
//		for (int j = 0; j < m; j++)
//		{
//			map[i][j + 1] = str[j] - '0';
//			if (map[i][j + 1] == 2) queues.push({ i,j + 1 }), visit[i][j + 1] = 1;
//		}
//	}
//
//	int front = 1, tail = 1, level = 0, next_level = 1;
//	while (queues.empty() == 0)
//	{
//		pair<int, int> top = queues.front();
//		queues.pop();
//		if (map[top.first][top.second] != 0 && map[top.first][top.second] != 2)
//		{
//			printf("TAK\n%d", level);
//			return 0;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int py = top.first + d[i][0], px = top.second + d[i][1];
//			if (py >= 1 && py <= n && px >= 1 && px <= m)
//			{
//				if (visit[py][px] == 0 && map[py][px] != 1)
//				{
//					visit[py][px] = 1;
//					queues.push({py, px});
//					tail++;
//				}
//			}
//		}
//
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}
//		front++;
//	}
//	printf("NIE");
//	return 0;
//}