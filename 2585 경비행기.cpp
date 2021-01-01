//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<math.h>
//
//#define N 1000
//using namespace std;
//int pos[N + 1][2], n, k;
//
//int calc_dist(int x1, int y1, int x2, int y2)
//{
//	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	d += 0.99999999;
//	int out = (int)d;
//	return out;
//}
//
//int P(int max)
//{
//	bool visit[N + 1] = { 0 };
//	queue <pair<int, int>> queues;
//	queues.push({0,0});
//	int front = 1, tail = 1, level = 0, next_level = 1;
//	while (queues.empty() == 0)
//	{
//		pair<int, int> top = queues.front();
//		queues.pop();
//
//		int d = calc_dist(10000, 10000, top.first, top.second);
//		int val = 0;
//		if (d % 10 != 0) val = 1;
//		if ((d / 10) + val <= max) return 1;
//	
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] == 0)
//			{
//				int dist = calc_dist(top.first, top.second, pos[i][0], pos[i][1]), plus = 0;
//				if (dist % 10 != 0) plus = 1;
//				if ((dist / 10) + plus <= max)
//				{
//					queues.push({ pos[i][0], pos[i][1] });
//					tail++;
//					visit[i] = 1;
//				}
//			}
//		}
//
//		if (front == next_level)
//		{
//			level++;
//			next_level = tail;
//		}
//		if (level > k) return 0;
//		front++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int ans = 987654321;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) 
//		scanf("%d %d", &pos[i][0], &pos[i][1]);
//
//	int low = 1, high = 20000, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		int flag = P(mid);
//		if (flag == 1)
//		{
//			if (ans > mid) ans = mid;
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//	printf("%d", ans);
//	return 0;
//}