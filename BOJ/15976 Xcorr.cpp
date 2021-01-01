//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 300000
//using namespace std;
//pair <long long, long long> a[N+1];
//pair <long long, long long> b[N+1];
//long long sum[N + 1];
//int main()
//{
//	long long n, m, s, e;
//	long long ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld %lld", &a[i].first, &a[i].second);
//	cin >> m;
//	for (int i = 1; i <= m; i++) scanf("%lld %lld", &b[i].first, &b[i].second);
//	cin >> s;
//	cin >> e;
//
//	sort(a + 1, a + n + 1);
//	sort(b + 1, b + m + 1);
//	
//	for (int i = 1; i <= m; i++) sum[i] = b[i].second + sum[i - 1];
//	for (int i = 1; i <= n; i++)
//	{
//		long long first = a[i].first + s;
//		long long last = a[i].first + e;
//
//		if (first < b[1].first && last < b[1].first) continue;
//		else if (first > b[m].first && last > b[m].first) break;
//
//		if (first < b[1].first) first = b[1].first;
//		if (last > b[m].first) last = b[m].first;
//
//		int low = 1, high = m, mid;
//		int key1 = 0, key2 = 0;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//
//			if (b[mid].first == first)
//			{
//				key1 = mid;
//				break;
//			}
//			else if (b[mid].first > first)
//			{
//				key1 = mid;
//				high = mid - 1;
//			}
//			else low = mid + 1;
//		}
//		
//
//		low = 1, high = m;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//
//			if (b[mid].first == last)
//			{
//				key2 = mid;
//				break;
//			}
//			else if (b[mid].first > last) high = mid - 1;
//			else
//			{
//				key2 = mid;
//				low = mid + 1;
//			}
//		}
//		ans += (sum[key2] - sum[key1 - 1]) * a[i].second;
//	}
//	printf("%lld", ans);
//	return 0;
//}