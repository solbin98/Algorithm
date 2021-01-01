//#include<iostream>
//#include<cstdio>
//#define N 2000000
//using namespace std;
//int a[N + 1], tmp[N + 1];
//int n, k;
//
//void merge(int s, int e)
//{
//	int mid = (s + e) / 2;
//	int idx1 = s, idx2 = mid + 1, idx_t = 0;
//	while (idx1 <= mid && idx2 <= e)
//	{
//		if (a[idx1] < a[idx2]) tmp[++idx_t] = a[idx1++];
//		else tmp[++idx_t] = a[idx2++];
//	}
//	for (int i = idx1; i <= mid; i++) tmp[++idx_t] = a[i];
//	for (int i = idx2; i <= e; i++) tmp[++idx_t] = a[i];
//	for (int i = s; i <= e; i++) a[i] = tmp[i - s + 1];
//}
//void sort(int s, int e, int now)
//{
//	if (s == e) return;
//	int mid = (s + e) / 2;
//
//	sort(s, mid, now * 2);
//	sort(mid + 1, e, now * 2);
//	merge(s, e);
//
//	if (now == k)
//	{
//		for (int i = s; i <= e; i++)
//			printf("%d ", a[i]);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	cin >> k;
//	sort(1,n,1);
//	return 0;
//}