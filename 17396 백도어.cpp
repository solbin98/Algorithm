//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define N 100000
//#define INF 9876543210000
//
//using namespace std;
//bool chk[N + 1], visit[N + 1];
//long long dists[N + 1];
//vector <pair<long long, long long>> links[N + 1];
//pair <long long, long long> inf[N + 1];
//priority_queue <pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> queues;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		if (i != n) chk[i] = tmp;
//		dists[i] = INF;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		long long a, b, c;
//		scanf("%lld %lld %lld", &a, &b, &c);
//		if ((chk[a + 1] == 1 || chk[b + 1] == 1)) continue;
//		pair <long long, long long> tmp;
//		tmp.first = c, tmp.second = b + 1;
//		links[a + 1].push_back(tmp);
//		tmp.first = c, tmp.second = a + 1;
//		links[b + 1].push_back(tmp);
//	}
//
//	pair<long long, long long> tmp;
//	tmp.first = 0, tmp.second = 1;
//	queues.push(tmp);
//	dists[1] = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (queues.empty() == 1) break;
//		pair<long long, long long> tmp = queues.top();
//		if (visit[tmp.second] == 1)
//		{
//			queues.pop();
//			continue;
//		}
//		visit[tmp.second] = 1;
//		for (int i = 0; i < links[tmp.second].size(); i++)
//		{
//			if (dists[links[tmp.second][i].second] > dists[tmp.second] + links[tmp.second][i].first)
//			{
//				pair <long long, long long> t;
//				dists[links[tmp.second][i].second] = dists[tmp.second] + links[tmp.second][i].first;
//				t.first = dists[tmp.second] + links[tmp.second][i].first, t.second = links[tmp.second][i].second;
//				queues.push(t);
//			}
//		}
//		queues.pop();
//	}
//	if (dists[n] != INF) printf("%lld", dists[n]);
//	else printf("-1");
//	return 0;
//}