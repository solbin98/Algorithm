//#include<iostream>
//#include<cstdio>
//#define N 200000
//using namespace std;
//int a[N + 1][2], tmp[N + 1][2], tmp_ind[N+1], indexs[N + 1];
//int color[N + 1], sizes[N], again[N+1], ans[N + 1], sum[N + 1];
//void merge(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	int i1 = s, i2 = mid + 1, index = 1;
//	while (i1 <= mid && i2 <= e)
//	{
//		if (a[i1][1] < a[i2][1]) tmp_ind[index] = indexs[i1], tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//		else if (a[i1][1] == a[i2][1])
//		{
//			if (a[i1][0] < a[i2][0]) tmp_ind[index] = indexs[i1], tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//			else tmp_ind[index] = indexs[i2], tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//		}
//		else tmp_ind[index] = indexs[i2], tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//	}
//
//	for (int i = i1; i <= mid; i++) tmp_ind[index] = indexs[i], tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = i2; i <= e; i++) tmp_ind[index] = indexs[i], tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = s; i <= e; i++) indexs[i] = tmp_ind[i-s+1], a[i][0] = tmp[i - s + 1][0], a[i][1] = tmp[i - s + 1][1];
//}
//
//void merge_sort(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	if (s >= e) return;
//	merge_sort(s, mid);
//	merge_sort(mid + 1, e);
//	merge(s, e);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]), indexs[i] = i;
//	merge_sort(1, n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum[i] = a[i][1] + sum[i - 1];
//		if (a[i - 1][0] == a[i][0] && a[i-1][1] == a[i][1]) again[i] = again[i - 1] + 1;
//		else again[i] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		color[a[i][0]] += a[i][1];
//		sizes[a[i][1]] += a[i][1];
//		ans[i] = sum[i] - color[a[i][0]] - sizes[a[i][1]] + (again[i] * a[i][1]);
//	}
//	
//	int out[N + 1] = { 0 };
//	for (int i = 1; i <= n; i++) out[indexs[i]] = ans[i];
//	for (int i = 1; i <= n; i++) printf("%d\n", out[i]);
//	return 0;
//}