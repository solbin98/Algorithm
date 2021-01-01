//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 32000
//#define M 100000
//using namespace std;
//int cnt[N + 1];
//vector<int> link[N + 1];
//queue <int> queues;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b);
//		cnt[b]++;
//	}
//
//	for (int i = 1; i <= n; i++) if (!(cnt[i])) queues.push(i);
//	while (queues.empty()== 0)
//	{
//		int front = queues.front();
//		printf("%d ", front);
//		for (int i = 0; i < link[front].size(); i++)
//		{
//			cnt[link[front][i]]--;
//			if (cnt[link[front][i]] == 0) queues.push(link[front][i]);
//		}
//		queues.pop();
//	}
//	return 0;
//}