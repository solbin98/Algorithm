//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 1100
//#define M 500
//#define S 0
//#define E 1001
//#define INF 987654321
//using namespace std;
//int map[N + 1][N + 1], a[N + 1], b[N + 1];
//int flow[N + 1][N + 1], cap[N + 1][N + 1];
//vector<int> link[N + 1];
//int calc()
//{
//	int sum = 0;
//	while (1)
//	{
//		int pre[N + 1] = { -1 };
//		bool visit[N + 1] = { 0 };
//		bool chk = 0;
//
//		queue<int> queues;
//		queues.push(S);
//		visit[S] = 1;
//		while (queues.empty() == 0)
//		{
//			int now = queues.front();
//			if (now == E)
//			{
//				int min = INF;
//				for (int i = now; i != 0; i = pre[i])
//				{
//					if (cap[pre[i]][i] - flow[pre[i]][i] < min) min = cap[pre[i]][i] - flow[pre[i]][i];
//				}
//				for (int i = now; i != 0 ; i = pre[i])
//				{
//					flow[pre[i]][i] += min;
//					flow[i][pre[i]] -= min;
//				}
//				chk = 1;
//				sum += min;
//				break;
//			}
//
//			for (int i = 0; i < link[now].size(); i++)
//			{
//				if (visit[link[now][i]] == 0)
//				{
//					if (cap[now][link[now][i]] - flow[now][link[now][i]] > 0)
//					{
//						pre[link[now][i]] = now;
//						queues.push(link[now][i]);
//						visit[link[now][i]] = 1;
//					}
//				}
//			}
//			queues.pop();
//		}
//		if (chk == 0) return sum;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int n, cnt1 = 0, cnt2 = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), cnt1 += a[i];
//	for (int i = 1; i <= n; i++) scanf("%d", &b[i]), cnt2 += b[i];
//	if (cnt1 != cnt2)
//	{
//		printf("-1");
//		return 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		link[S].push_back(i), link[i].push_back(S);
//		link[E].push_back(i + M), link[i + M].push_back(E);
//		cap[S][i] = a[i], cap[i + M][E] = b[i];
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			link[i].push_back(j + M), link[j + M].push_back(i);
//			cap[i][j + M] = 1;
//		}
//	
//	int val = calc();
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (flow[i][j + M] != 0) map[i][j] = 1;
//		}
//
//	if (val == cnt1)
//	{
//		printf("1\n");
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++) printf("%d", map[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("-1");
//	return 0;
//}