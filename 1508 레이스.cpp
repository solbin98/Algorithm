//#include<iostream>
//#include<cstdio>
//#define K 50
//using namespace std;
//int a[K + 1];
//bool visit[K + 1], ans[K + 1];
//int chk(int dis, int m, int k)
//{
//	int last = 0, cnt = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		if (((a[i] - last) >= dis) || (i == 1)) visit[i] = true, cnt++, last = a[i];
//		if (cnt == m) return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= k; i++) cin >> a[i];
//	if (m >= k)
//	{
//		for (int i = 1; i <= k; i++) printf("1");
//		return 0;
//	}
//	int low = 0, high = 1000000, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;		
//		if (chk(mid, m, k) == 1)
//		{
//			for (int i = 1; i <= k; i++) ans[i] = visit[i];
//			low = mid + 1;
//		}
//		else high = mid - 1;
//		for (int i = 1; i <= k; i++) visit[i] = 0;
//	}
//
//	for (int i = 1; i <= k; i++) printf("%d", ans[i]);
//	return 0;
//}