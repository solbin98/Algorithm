//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<vector>
//#define N 100000
//#define INF 9876543210000
//using namespace std;
//typedef long long ll;
//priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> queues;
//vector<pair<ll,ll>> link[N + 1];
//ll dist[N + 1] = { 0 };
//bool mj[N + 1];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		ll a, b, c;
//		scanf("%lld %lld %lld", &a, &b, &c);
//		link[b].push_back({ a,c });
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		mj[tmp] = 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (mj[i] == 0) dist[i] = INF;
//		else queues.push({ 0, i });
//	}
//
//	while (queues.empty() == 0)
//	{	
//		pair<ll, ll> tops = queues.top();	
//		queues.pop();
//		int now = tops.second;
//		if (dist[now] < tops.first) continue;
//		for (int i = 0; i < link[tops.second].size(); i++)
//		{
//			if (dist[link[now][i].first] > dist[now] + link[now][i].second)
//			{	
//				dist[link[now][i].first] = dist[now] + link[now][i].second;
//				queues.push({ dist[link[now][i].first], link[now][i].first });
//			}
//		}
//	}
//
//	ll ans = 0, ans_idx = 0;
//
//	for (int i = 1; i <= n; i++)
//		if (dist[i] > ans)
//			ans = dist[i], ans_idx = i;
//
//	printf("%lld\n%lld", ans_idx, ans);
//	return 0;
//}