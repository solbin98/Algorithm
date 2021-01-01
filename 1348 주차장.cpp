//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 53
//using namespace std;
//char map[N + 1][N + 1];
//int car[N + 1][N + 1], park[N + 1][N + 1];
//int car_idx[N * 2 + 1][2], park_idx[N * 2 + 1][2];
//int links[N*2+1][N*2+1], dir[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//int matched[N * 2 + 1];
//int r, c, idx_car = 0, idx_park = 0;
//bool visits[N * 2 + 1];
//
//int dfs(int num, int max)
//{
//	visits[num] = 1;
//	for (int i = 1; i <= idx_park; i++)
//	{
//		if (links[num][i] > max || links[num][i] == 0) continue;
//		if (matched[i] == 0)
//		{
//			matched[i] = num;
//			return 1;
//		}
//		else
//		{
//			if (visits[matched[i]] == 0)
//			{
//				int res = dfs(matched[i], max);
//				if (res == 1)
//				{
//					matched[i] = num;
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) cin >> map[i];
//
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			if (map[i - 1][j - 1] == 'C') car[i][j] = ++idx_car, car_idx[idx_car][0] = i, car_idx[idx_car][1] = j;
//
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			if (map[i - 1][j - 1] == 'P') park[i][j] = ++idx_park, park_idx[idx_park][0] = i, park_idx[idx_park][1] = j;
//
//	if (idx_car > idx_park)
//	{
//		printf("-1");
//		return 0;
//	}
//	else if (idx_car == 0)
//	{
//		printf("0");
//		return 0;
//	}
//
//	for (int i = 1; i <= idx_car; i++)
//	{
//		bool visit[N + 1][N + 1] = { 0 };
//
//		queue <pair<int, int>> queues;
//		pair<int, int> tmp = { car_idx[i][0], car_idx[i][1] };
//		visit[car_idx[i][0]][car_idx[i][1]] = 1;
//		queues.push(tmp);
//
//		int front = 1, tail = 1, next_level = 1, level = 0;
//		while (queues.empty() == 0)
//		{
//			pair<int, int> now = queues.front();
//			if (map[now.first - 1][now.second - 1] == 'P') links[i][park[now.first][now.second]] = level;
//
//			for (int i = 0; i < 4; i++)
//			{
//				pair<int, int> tmp;
//				int py = now.first + dir[i][0], px = now.second + dir[i][1];
//				tmp.first = py, tmp.second = px;
//				if (py >= 1 && py <= r && px >= 1 && px <= c)
//				{
//					if (visit[py][px] == 0 && map[py - 1][px - 1] != 'X')
//						visit[py][px] = 1, queues.push(tmp), tail++;
//				}
//			}
//
//			if (front == next_level)
//			{
//				next_level = tail;
//				level++;
//			}
//			front++;
//			queues.pop();
//		}
//	}
//
//	int ans = N * N * N;
//	int low = 1, high = N * N, mid;
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		for (int i = 1; i <= idx_car; i++)
//		{
//			dfs(i, mid);
//			for (int i = 1; i <= N * 2; i++) visits[i] = 0;
//		}
//		int cnt = 0;
//		for (int i = 1; i <= idx_park; i++) if (matched[i] != 0) cnt++, matched[i] = 0;
//		if (cnt == idx_car)
//		{
//			high = mid - 1;
//			if (ans > mid) ans = mid;
//		}
//		else low = mid + 1;
//	}
//	if (ans == N * N * N) ans = -1;
//	printf("%d", ans);
//	return 0;
//}