//#include<cstdio>
//#include<iostream>
//#include<queue>
//#include<vector>
//
//#define N 100
//#define INF 987654321
//#define K 500
//
//using namespace std;
//int h[N + 1], memo[N + 1][N + 1][K + 1];
//
//vector<int> links[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links[a].push_back(b), links[b].push_back(a);
//	}
//
//
//	int T;
//	cin >> T;
//
//	for(int i1=1;i1<=n;i1++)
//	{
//			int start = i1, k = K;
//
//			queue<int> queues;
//			queues.push(start);
//
//			int level = 0, next = 1, tail = 1, now = 1;
//			memo[start][start][1] = 1;
//			while (queues.empty() == 0)
//			{
//				int front = queues.front();
//				if(level < k)
//				{
//					for (int i = 0; i < links[front].size(); i++)
//					{
//						if (memo[start][links[front][i]][level + 1] == 0)
//						{
//							memo[start][links[front][i]][level + 1] = 1;
//							queues.push(links[front][i]);
//							tail++;
//						}
//					}
//				}
//
//				if (now == next)
//				{
//					level++;
//					if (level > k) break;
//					next = tail;
//				}
//				now++;
//				queues.pop();
//			}
//			memo[start][start][1] = 0;
//		}
//
//	while (T--)
//	{
//		int start, k;
//		int min = INF;
//		scanf("%d %d", &start, &k);
//		for (int i = 1; i <= n; i++)
//		{
//			if (memo[start][i][k] == 1 && h[i] < min) min = h[i];
//		}
//		if (min == INF) min = -1;
//		printf("%d\n", min);
//	}
//}