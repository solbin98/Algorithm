//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 250
//#define INF 987654321
//using namespace std;
//vector<int> link[N + 1];
//int link_num[N + 1][N + 1], cost[N + 1][N + 1];
//int pre[N + 1];
//int chg_list[N*N + 1][2];
//int n, m, 
//
//int calc()
//{
//	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queues;
//	bool visit[N + 1] = { 0 };
//	int distance[N + 1] = { 0 };
//
//	for (int i = 0; i <= N; i++) distance[i] = INF;
//	distance[1] = 0;
//	queues.push({ 0,1 });
//
//	while (queues.empty() == 0)
//	{
//		pair<int, int> top = queues.top();		
//		if (top.second == n) break;
//		queues.pop();
//		int v = top.second, d = top.first;
//		if (visit[v] == 1) continue;
//		visit[v] = 1;
//		for (int i = 0; i < link[v].size(); i++)
//		{
//			int next = link[v][i];
//			int dist = cost[v][next];			
//			if (visit[next] == 1) continue;
//			if (dist + d < distance[next])
//			{
//				distance[next] = dist + d;
//				queues.push({ dist + d, next});
//			}
//		}
//	}
//	return distance[n];
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		link[a].push_back(b);
//		link[b].push_back(a);
//		cost[a][b] = c, cost[b][a] = c;
//	}
//
//	int ans = calc();
//	printf("%d");
//	return 0;
//}