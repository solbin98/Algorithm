//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define N 800
//#define INF 987654321
//using namespace std;
//
//int c[N + 1][N + 1], f[N + 1][N + 1];
//int ans = 0;
//
//void solve()
//{
//	while (1)
//	{
//		int pre[N + 1] = { 0 };
//		bool visit[N + 1] = { 0, 0}, chk = 0;
//		queue <int> queues;
//		queues.push(1+N/2);
//		visit[1 + N / 2] = 1;
//		visit[1] = 1;
//		while (queues.empty() == 0)
//		{
//			int front = queues.front();
//			if (front == 2)
//			{
//				int min_flow = INF;
//
//				for (int i = front; i != 1 + N/2; i = pre[i])
//					if (min_flow > c[pre[i]][i] - f[pre[i]][i]) min_flow = c[pre[i]][i] - f[pre[i]][i];
//
//				for (int i = front; i != 1 + N/2; i = pre[i])
//					f[pre[i]][i] += min_flow, f[i][pre[i]] -= min_flow;
//				
//				ans++;
//				chk = 1;
//				break;
//			}
//
//			for (int i = 1; i <= N; i++)
//				if (visit[i] == 0 && c[front][i] - f[front][i] > 0)
//					queues.push(i), visit[i] = 1, pre[i] = front;
//				
//			queues.pop();
//		}
//		if (chk == 0) break;
//	}
//}
//
//int main()
//{
//	int n, p;
//	cin >> n >> p;
//
//	for (int i = 1; i <= p; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		c[b + N / 2][a] = 1, c[a + N / 2][b] = 1;
//	}
//	for (int i = 1; i <= n; i++) c[i][i + N/2] = 1, c[i + N/2][i] = 1;
//	
//	solve();
//	printf("%d", ans);
//	return 0;
//}