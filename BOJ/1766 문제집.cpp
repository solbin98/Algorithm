//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 32000
//using namespace std;
//vector <int> link[N + 1];
//priority_queue <int, vector<int>, greater<int>> queues;
//int cnt[N + 1];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b);
//		cnt[b]++;
//	}
//
//	for (int i = 1; i <= n; i++)
//		if (!(cnt[i])) queues.push(i);
//	
//	while (queues.empty() == 0)
//	{
//		int front = queues.top();
//		printf("%d ", front);
//		queues.pop();
//
//		for (int i = 0; i < link[front].size(); i++)
//		{
//			cnt[link[front][i]]--;
//			if (cnt[link[front][i]] == 0) queues.push(link[front][i]);
//		}
//	}
//	return 0;
//}