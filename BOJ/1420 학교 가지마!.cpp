//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 100
//#define SIZE N*N*2
//using namespace std;
//
//char map[N + 1][N + 1];
//int idx[N + 1][N + 1];
//int n, m, ans = 0;
//int d[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//typedef struct {
//	int vtx, cap, flow;
//}info;
//vector<info> links[SIZE + 1];
//
//void solve(int s, int e)
//{
//	while (1)
//	{
//		int pre[SIZE + 1] = { 0 };
//		bool visit[SIZE + 1] = { 0 }, flag = 0;
//		queue <int> queues;
//		queues.push(s);
//		visit[s] = 1, visit[s - N * N] = 1, visit[e + N * N] = 1;
//		while (queues.empty() == 0)
//		{
//			int front = queues.front();
//			if (front == e)
//			{
//				flag = 1;
//				int min_flow = 9876;
//				for (int i = front; i != s; i = pre[i])
//				{
//					for (int j = 0; j < links[pre[i]].size(); j++)
//						if (links[pre[i]][j].vtx == i) 
//						{
//							if (min_flow > links[pre[i]][j].cap - links[pre[i]][j].flow) 
//								min_flow = links[pre[i]][j].cap - links[pre[i]][j].flow;
//						}
//				}
//
//				for (int i = front; i != s; i = pre[i])
//				{
//					for (int j = 0; j < links[pre[i]].size(); j++)
//					{
//						if (links[pre[i]][j].vtx == i)
//						{
//							links[pre[i]][j].flow += min_flow;
//						}
//					}
//
//					for (int j = 0; j < links[i].size(); j++)
//					{
//						if (links[i][j].vtx == pre[i])
//						{
//							links[i][j].flow -= min_flow;
//						}
//					}
//				}
//				ans++;
//				break;
//			}
//
//			for (int i = 0; i < links[front].size(); i++)
//				if (visit[links[front][i].vtx] == 0 && (links[front][i].cap - links[front][i].flow) > 0)
//				{
//					queues.push(links[front][i].vtx), visit[links[front][i].vtx] = 1, pre[links[front][i].vtx] = front;
//				}
//			queues.pop();
//		}
//		if (flag == 0) break;
//	}
//}
//
//int main()
//{
//	int idxs = 0;
//	int s=0, e=0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) scanf("%s", map[i]);
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			if (map[i-1][j-1] != '#') idx[i][j] = ++idxs;
//
//			if (map[i-1][j-1] == 'K') s = idx[i][j];
//			else if (map[i-1][j-1] == 'H') e = idx[i][j];
//		}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{		
//			if (map[i - 1][j - 1] == '#') continue;
//			info tmp = { idx[i][j] + N * N, 1,0 };
//			links[idx[i][j]].push_back(tmp);
//			tmp = { idx[i][j], 1, 0 };
//			links[idx[i][j] + N * N].push_back(tmp);
//			for (int k = 0; k < 4; k++)
//			{
//				int py = i + d[k][0], px = j + d[k][1];
//				if (py >= 1 && py <= n && px >= 1 && px <= m)
//				{
//					if (map[py - 1][px - 1] != '#')
//					{
//						if (map[i - 1][j - 1] == 'K' && map[py - 1][px - 1] == 'H')
//						{
//							printf("-1");
//							return 0;
//						}
//						else if (map[i - 1][j - 1] == 'H' && map[py - 1][px - 1] == 'K')
//						{
//							printf("-1");
//							return 0;
//						}
//						info tmp;
//						tmp = { idx[py][px], 1,0 };
//						links[idx[i][j] + N * N].push_back(tmp);
//						tmp = { idx[i][j] + N * N, 0, 0 };
//						links[idx[py][px]].push_back(tmp);
//
//						tmp = { idx[i][j], 1, 0 };
//						links[idx[py][px] + N * N].push_back(tmp);
//						tmp = { idx[py][px] + N * N, 0, 0 };
//						links[idx[i][j]].push_back(tmp);
//					}
//				}
//			}
//		}
//	
//	solve(s + N*N, e);
//	printf("%d", ans);
//	return 0;
//}