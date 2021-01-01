//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//#define N 50000
//using namespace std;
//typedef long long ll;
//queue <pair<ll, ll>> queues;
//vector<ll> link[N + 1];
//int color[N + 1];
//int main()
//{
//	ll n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		ll a,b;
//		scanf("%lld %lld",&a, &b);
//		link[a].push_back(b);
//		link[b].push_back(a);
//	}
//
//	bool visit[N + 1] = { 0 }, flag = 1;
//	ll num_o = 0, num_e = 0;
//	queues.push({ 1,0 });
//	visit[1] = 1;
//	while (queues.empty() == 0)
//	{
//		pair<ll, ll>top = queues.front();
//		color[top.first] = top.second + 1;
//		if (top.second == 0) num_o++;
//		if (top.second == 1) num_e++;
//		queues.pop();
//
//		for (int i = 0; i < link[top.first].size(); i++)
//		{
//			if (color[link[top.first][i]] == color[top.first])
//			{
//				flag = 0;
//				break;
//			}
//
//			if (visit[link[top.first][i]] == 0)
//			{
//				visit[link[top.first][i]] = 1;
//				queues.push({ link[top.first][i], !(top.second) });
//			}
//		}
//	}
//
//	if (flag == 1) printf("%lld", 2 * num_o * num_e);
//	else printf("0");
//	return 0;
//}