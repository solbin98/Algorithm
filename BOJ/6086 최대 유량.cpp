//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 100
//#define INF 987654321
//
//using namespace std;
//int flow[N + 1][N + 1], cap[N + 1][N + 1];
//int ans = 0;
//
//int translate(char alpha)
//{
//	if (alpha >= 'a' && alpha <= 'z') return alpha - 'a' + 1;
//	else if (alpha >= 'A' && alpha <= 'Z') return alpha - 'A' + 27;
//}
//
//void solve()
//{
//	while (1)
//	{
//		int pres[N + 1] = { 0 };
//		bool visit[N + 1] = { 0 }, chk = 0;
//
//		queue <int> queues;
//		queues.push(27), visit[27] = 1;
//
//		while (queues.empty() == 0)
//		{
//			int front = queues.front();
//			if (front == 52)
//			{
//				int min_flow = INF;
//
//				for (int i = front; i != 27; i = pres[i])
//					if (min_flow > cap[pres[i]][i] - flow[pres[i]][i]) min_flow = cap[pres[i]][i] - flow[pres[i]][i];
//
//				for (int i = front; i != 27; i = pres[i])
//				{
//					flow[pres[i]][i] += min_flow;
//					flow[i][pres[i]] -= min_flow;
//				}
//				ans += min_flow;
//				chk = 1;
//				break;
//			}
//
//			for (int i = 1; i <= N; i++)
//				if (visit[i] == 0 && cap[front][i] - flow[front][i] > 0) queues.push(i), visit[i] = 1, pres[i] = front;
//			
//			queues.pop();
//		}
//		if (chk == 0) break;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		char t1, t2;
//		int m;
//		cin >> t1 >> t2 >> m;
//		cap[translate(t1)][translate(t2)] += m;
//		cap[translate(t2)][translate(t1)] += m;
//	}
//	solve();
//	printf("%d", ans);
//	return 0;
//}