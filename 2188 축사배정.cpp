//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 405
//using namespace std;
//vector<int> links[N + 1];
//queue <int> queues;
//bool cost[N + 1][N + 1];
//
//
//void solve()
//{
//	while (1)
//	{
//		int pre[N + 1] = { 0 };
//		bool visit[N + 1] = { 1 };
//		bool chk = 0;
//		for (int i = 0; i < links[0].size(); i++)
//		{
//			int tmp = links[0][i];
//			visit[tmp] = 1;
//			pre[tmp] = 0;
//			queues.push(tmp);
//		}
//
//		while (queues.empty() == 0)
//		{
//			int front = queues.front();
//			if (front == N)
//			{
//				chk = 1;
//				int now = front;
//				int pres = pre[front];
//				while (1)
//				{
//					cost[pres][now] = 0;
//					cost[now][pres] = 1;
//					links[now].push_back(pres);
//					for (int i = 0; i < links[pres].size(); i++)
//					{
//						if (links[pres][i] == now)
//						{
//							links[pres].erase(links[pres].begin() + i);
//							break;
//						}
//					}
//					if (now == 0) break;	
//					now = pres;
//					pres = pre[now];
//				
//				}
//				break;
//			}
//			for (int i = 0; i < links[front].size(); i++)
//			{
//				if(visit[links[front][i]] == 0)
//					visit[links[front][i]] = 1, queues.push(links[front][i]), pre[links[front][i]] = front;
//			}
//			queues.pop();
//		}
//		while (queues.empty() == 0) queues.pop();
//		if (chk == 0) break;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int num;
//		scanf("%d", &num);
//		for (int j = 1; j <= num; j++)
//		{
//			int tmp;
//			scanf("%d", &tmp);
//			tmp += 200;
//			links[i].push_back(tmp);
//			cost[i][tmp] = 1;
//		}
//		cost[0][i] = 1;
//		links[0].push_back(i);
//	}
//	for (int i = 1; i <= m; i++) cost[200 + i][N] = 1, links[200 + i].push_back(N);
//	solve();
//	int ans = 0;
//	for (int i = 201; i <= 200 + m; i++) ans += cost[N][i];
//	printf("%d", ans);
//	return 0;
//}