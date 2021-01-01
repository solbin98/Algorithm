//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 2500
//#define INF 9876543210000
//using namespace std;
//vector <pair<int, int>> links[N + 1];
//priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> queues;
//
//int cost[N + 1];
//long long dp[N + 1][N + 1];
//bool visit[N + 1];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//			dp[i][j] = INF;
//	}
//
//	for (int i = 1; i <= n; i++) scanf("%d", &cost[i]);
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		pair<int, int> tmp;
//		scanf("%d %d %d", &a, &b, &c);
//		tmp.first = b, tmp.second = c;
//		links[a].push_back(tmp);
//		tmp.first = a, tmp.second = c;
//		links[b].push_back(tmp);
//	}
//	dp[1][cost[1]] = 0;
//
//	pair<int, pair<int, int>> tmp;
//	tmp.first = 0, tmp.second.first = 1, tmp.second.second = cost[1];
//	queues.push(tmp);
//	while (queues.empty() == 0)
//	{
//		pair<int, pair<int, int>> now;
//		now = queues.top();
//		int now_index = now.second.first, now_min = now.second.second;
//
//		for (int i = 0; i < links[now_index].size(); i++)
//		{
//			int next_index = links[now_index][i].first;
//			int next_min = now_min;
//			if (next_min > cost[next_index]) next_min = cost[next_index];
//			if (dp[next_index][next_min] > dp[now_index][now_min] + links[now_index][i].second * now_min)
//			{
//				dp[next_index][next_min] = dp[now_index][now_min] + links[now_index][i].second * now_min;
//				pair<int, pair<int, int>> tmp;
//				tmp.first = now.first + links[now_index][i].second;
//				tmp.second.first = next_index;
//				tmp.second.second = next_min;
//				queues.push(tmp);
//			}
//		}
//		queues.pop();
//	}
//
//	long long ans = INF;
//	for (int i = 1; i <= N; i++)
//	{
//		if (ans > dp[n][i]) ans = dp[n][i];
//	}
//	printf("%lld", ans);
//	return 0;
//}