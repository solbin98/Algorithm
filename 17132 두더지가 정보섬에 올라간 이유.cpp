//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 100000
//typedef long long ll;
//using namespace std;
//ll pare[N + 1], rnk[N + 1], link[N + 1][2], sizes[N + 1];
//bool visit[N + 1] = { 0 };
//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, less<pair<ll, ll>>> queues;
//
//ll find(ll now)
//{
//	if (pare[now] == now) return now;
//	return pare[now] = find(pare[now]);
//}
//
//void merge(ll a, ll b)
//{
//	ll pa = find(a), pb = find(b);
//	if (rnk[pa] < rnk[pb])
//	{
//		int tmp = pa;
//		pa = pb;
//		pb = tmp;
//	}
//
//	if (rnk[pa] == rnk[pb]) rnk[pa]++;
//	pare[pb] = pa, sizes[pa] += sizes[pb], sizes[pb] = 0;
//	rnk[pb] = 0;
//}
//
//
//int main()
//{
//	ll n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		ll a, b, c;
//		scanf("%lld %lld %lld", &a, &b, &c);
//		queues.push({c,i});
//		link[i][0] = a, link[i][1] = b;
//	}
//
//	for (int i = 1; i <= n; i++) pare[i] = i, sizes[i] = 1;
//	ll ans = 0;
//	while (queues.empty() == 0)
//	{
//		pair<ll, ll> top = queues.top();
//		queues.pop();
//		ll pa = find(link[top.second][0]), pb = find(link[top.second][1]);
//		ll number = sizes[pa] * sizes[pb];
//		number *= top.first;
//		merge(pa, pb);
//		ans += number;
//	}
//	
//	printf("%lld\n", ans);
//	return 0;
//}