//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100000
//#define MOD 1000000000
//using namespace std;
//
//typedef struct
//{
//	long long a, b, cost;
//}info;
//
//info a[N + 1];
//long long pare[N + 1], sum[N + 1], cnts[N + 1];
//
//long long find(long long now)
//{
//	if (pare[now] == now) return now;
//	return pare[now] = find(pare[now]);
//}
//
//void unions(long long a, long long b)
//{
//	long long pa = find(a), pb = find(b);
//	if (pa == pb) return;
//	if (cnts[pa] < cnts[pb])
//	{
//		long long t = pa;
//		pa = pb;
//		pb = t;
//	}
//	pare[pb] = pa;
//	cnts[pa] += cnts[pb];
//	cnts[pb] = 1;
//}
//
//bool compare(info p1, info p2)
//{
//	return p1.cost > p2.cost;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) pare[i] = i, cnts[i] = 1;
//	for (int i = 1; i <= m; i++) scanf("%lld %lld %lld", &a[i].a, &a[i].b, &a[i].cost);
//
//	sort(a + 1, a + m + 1, compare);
//
//	for (int i = 1; i <= m; i++)
//		sum[i] = sum[i - 1] + a[m - i + 1].cost, sum[i] %= MOD;
//
//	long long ans = 0;
//
//	for (int i = 1; i <= m; i++)
//	{			
//		long long pa = find(a[i].a), pb = find(a[i].b);
//		if (pa != pb)
//		{	
//			ans += sum[m - i + 1] * (cnts[pa]*cnts[pb]);	
//			ans %= MOD;
//		}
//		unions(pa, pb);
//	}
//	printf("%lld", ans);
//	return 0;
//}