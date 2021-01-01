//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define N 2000
//#define M 100000
//
//using namespace std;
//queue <pair<int, int>> point;
//
//int a[M + 1][2], d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int pare[M + 1], ranks[M + 1], cnt = 0;
//int map[N + 1][N + 1][2];
//
//int find(int n)
//{
//	if (pare[n] == n) return pare[n] = n;
//	else return pare[n] = find(pare[n]);
//}
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void unions(int a, int b)
//{
//	int pa = find(a), pb = find(b);
//
//	if (ranks[pa] < ranks[pb]) swap(pa, pb);
//	if (ranks[pa] == ranks[pb]) ranks[pa]++;
//	pare[pb] = pa;
//	cnt++;
//}
//
//int main()
//{
//	int n, k;
//	int level = 0, front = 1, tail = 0, next_level;
//
//	cin >> n >> k;
//	next_level = k;
//	for (int i = 1; i <= k; i++) pare[i] = i;
//	for (int i = 1; i <= k; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		map[a][b][0] = i;
//		point.push({a, b});
//		tail++;
//	}
//
//
//	while (point.empty() == 0)
//	{
//		pair<int, int> tmp = point.front();
//
//		point.pop();
//		int y = tmp.first, x = tmp.second;		
//
//		for (int i = 0; i < 4; i++)
//		{
//			int py = y + d[i][0], px = x + d[i][1];
//			if (py >= 1 && py <= n && px >= 1 && px <= n)
//			{
//				if (map[py][px][0] == 0)
//				{
//					map[py][px][0] = map[y][x][0];
//					map[py][px][1] = level+1;
//					point.push({ py, px });
//					tail++;
//				}
//				else if (find(map[py][px][0]) != find(map[y][x][0]) && map[py][px][1] <= level)
//					unions(map[py][px][0], map[y][x][0]);
//			}
//		}			
//
//		if (cnt == k - 1) break;
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}	
//
//		front++;
//	}
//
//	printf("%d", level);
//	return 0;
//}