//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<vector>
//
//#define N 20000
//#define INF 987654321
//
//using namespace std;
//priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> que;
//vector <int> links[N + 1];
//
//bool visit[N + 1];
//int dist[N + 1];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		links[t1].push_back(t2), links[t2].push_back(t1);
//	}
//	for (int i = 1; i <= n; i++) dist[i] = INF;
//	dist[1] = 0;
//
//	pair<int, int> first;
//	first.first = 0, first.second = 1;
//	que.push(first);
//	while (1)
//	{
//		pair<int, int> tmp;
//
//		if (que.empty() == 1) break;
//		tmp = que.top();
//		visit[tmp.second] = 1;
//
//		for (int i = 0; i < links[tmp.second].size(); i++)
//		{
//			int linked = links[tmp.second][i];
//			if (dist[linked] > tmp.first + 1)
//			{
//				dist[linked] = tmp.first + 1;
//				if (visit[linked] == 0)
//				{
//					pair<int, int> news;
//					news.first = dist[linked], news.second = linked;
//					que.push(news);
//				}
//			}
//		}
//		que.pop();
//	}
//
//	int max = 0, max_index = 0, count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (max < dist[i]) max = dist[i], max_index = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (max == dist[i]) count++;
//	}
//	printf("%d %d %d", max_index, max, count);
//	return 0;
//}