//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#define N 200000
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//pair<ll, ll> a[N + 1];	
//vector<ll> tree[N*4 + 1];
//ll n, same1[N + 1], same2[N + 1];
//ll tmp[N + 1];
//
//void init(ll node, ll s, ll e)
//{
//	if (s == e) tree[node].push_back(a[s].second);
//	else
//	{
//		ll mid = (s + e) / 2;
//		for (int i = s; i <= e; i++) tmp[i] = a[i].second;
//		sort(tmp + s, tmp + e + 1);
//		for (int i = s; i <= e; i++) tree[node].push_back(tmp[i]);
//		init(node * 2, s, mid);
//		init(node * 2 + 1, mid + 1, e);
//	}
//}
//
//ll calc(ll node, ll val)
//{
//	ll s = 0, e = tree[node].size() - 1, mid = 0;
//	while (s <= e)
//	{
//		mid = (s + e) / 2;
//		if (tree[node][mid] <= val) s = mid + 1;
//		else e = mid - 1;
//	}
//	if (tree[node][mid] <= val) return mid+1;
//	return mid;
//}
//
//ll count(ll node, ll val, ll s, ll e, ll l, ll r)
//{
//	if (l <= s && e <= r) return calc(node, val);
//	else if (r < s || e < l) return 0;
//	else
//	{
//		ll mid = (s + e) / 2;
//		return count(node * 2, val, s, mid, l, r) + count(node * 2 + 1, val, mid + 1, e, l, r);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		scanf("%lld %lld", &a[i].first, &a[i].second);
//	
//	sort(a + 1, a + n + 1);
//	init(1, 1, n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i - 1].first == a[i].first && i != 1) same1[i] = same1[i - 1];
//		else same1[i] = i;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		if (a[i + 1].first == a[i].first && i != n) same2[i] = same2[i + 1];
//		else same2[i] = i;
//	}
//
//	long long cal = 0;
//	for (int i = 2; i < n; i++)
//	{
//		ll size_left = same1[i] - 1;
//		ll size_right = n - (same2[i]);
//		
//		size_left -= count(1, a[i].second, 1, n, 1, same1[i] - 1);
//		size_right -= count(1, a[i].second, 1, n, same2[i] + 1, n);
//	
//		cal += size_left * size_right;
//		cal %= MOD;
//	}
//
//	printf("%lld", cal);
//}