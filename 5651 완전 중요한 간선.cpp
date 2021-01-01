//#include<iostream>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#define N 300
//#define M 5000
//#define INF 98765
//
//using namespace std;
//vector <int> links[N+1];
//int cap[N + 1][N + 1], flow[N + 1][N + 1];
//int cnt[N + 1][N + 1];
//
//int solve(int s, int e)
//{
//	while (1)
//	{
//		bool flag = 0;
//		bool visit[N+1] = { 0 };
//		int pre[N+1] = { 0 };
//
//		queue <int> queues;
//		queues.push(s);
//		visit[s] = 1;
//
//		while (queues.empty() == 0)
//		{
//			int front = queues.front();
//			if (front == e)
//			{
//				int min_flow = INF;
//				for (int i = front; i != s; i = pre[i])
//					if (min_flow > cap[pre[i]][i] - flow[pre[i]][i]) min_flow = cap[pre[i]][i] - flow[pre[i]][i];
//				for (int i = front; i != s; i = pre[i]) flow[pre[i]][i] += min_flow, flow[i][pre[i]] -= min_flow;
//
//				flag = 1;
//				break;
//			}
//
//			for (int i = 0; i < links[front].size(); i++)
//			{
//				if (visit[links[front][i]] == 0 && cap[front][links[front][i]] - flow[front][links[front][i]] > 0)
//				{
//					visit[links[front][i]] = 1;
//					queues.push(links[front][i]);
//					pre[links[front][i]] = front;
//				}
//			}
//			queues.pop();
//		}
//		if (flag == 0) break;
//	}
//	return 0;
//}
//
//int calc(int s, int e)
//{
//	int dp[N + 1][N + 1] = { 0 };
//
//	int ans = 0;
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j <= N; j++)
//				dp[i][j] = INF;
//
//	for (int k = 1; k <= e; k++)
//		for (int i = 1; i <= e; i++)
//			for (int j = 1; j <= e; j++)
//			{
//				if (i == j) continue;
//				if (dp[i][k] + dp[k][j] < dp[i][j]) dp[i][j] = dp[i][k] + dp[k][j];
//				if (cap[i][j] - flow[i][j] > 0) dp[i][j] = cap[i][j] - flow[i][j];
//			}
//
//	for (int i = 1; i <= e; i++)
//	{
//		for (int j = 1; j <= e; j++)
//		{		
//			if (cap[i][j] != 0 && cap[i][j] == flow[i][j])
//			{
//				int flag = 0;
//				for (int k = 1; k <= e; k++)
//				{
//					if (k == j) continue;
//					if (dp[i][k]!= INF && dp[k][j] != INF)
//					{
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 0) ans += cnt[i][j];
//			}
//		}
//	}
//	return ans ;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		for (int i = 0; i <= N; i++) links[i].clear();
//
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				cap[i][j] = 0, flow[i][j] = 0, cnt[i][j] = 0;
//
//		int n, m;
//		cin >> n >> m;
//		for (int i = 1; i <= m; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			links[a].push_back(b), links[b].push_back(a);
//			cap[a][b] += c, cnt[a][b]++;
//		}
//		solve(1, n);
//		printf("%d\n",calc(1, n));
//	}
//	return 0;
//}