//#include<cstdio>
//#include<iostream>
//#define N 10000
//#define min(a, b) ((a>b)? (b) : (a))
//using namespace std;
//int a[N + 1], tmp[N + 1], first_point;
//
//class mysort
//{
//public:
//	void merge(int s, int e)
//	{
//		int mid = (s + e) / 2;
//		int i1 = s, i2 = mid + 1, index = 1;
//		while (i1 <= mid && i2 <= e)
//		{
//			if (a[i1] < a[i2]) tmp[index++] = a[i1++];
//			else tmp[index++] = a[i2++];
//		}
//		for (int i = i1; i <= mid; i++) tmp[index++] = a[i];
//		for (int i = i2; i <= e; i++) tmp[index++] = a[i];
//		for (int i = s; i <= e; i++) a[i] = tmp[i - s + 1];
//	}
//	void merge_sort(int s, int e)
//	{
//		if (s == e) return;
//		int mid = (s + e) / 2;
//		merge_sort(s, mid);
//		merge_sort(mid + 1, e);
//		merge(s, e);
//	}
//};
//int is_okay(int num, int k, int c, int ind)
//{
//	int cnt = 0, sum = 0;
//	for (int i = ind; i <= k; i++)
//	{
//		if (a[i] - a[i - 1] > num) return 0;
//		sum += a[i] - a[i - 1];
//		if (sum > num)
//		{
//			sum = a[i] - a[i - 1];
//			cnt++;
//		}
//	}
//	return (cnt <= c);
//}
//int main()
//{
//	int l, k, c;
//	int ans_length = 0, ans_point = 0;
//	mysort my;
//
//	cin >> l >> k >> c;
//	for (int i = 1; i <= k; i++) scanf("%d", &a[i]);
//	my.merge_sort(1, k);
//
//	a[k + 1] = l;
//	k++;
//
//	int low = 1, high = l, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (is_okay(mid, k, c, 1) == 1)
//		{
//			high = mid - 1;
//			ans_length = mid;
//		}
//		else low = mid + 1;
//	}
//
//	int maxi = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		if (a[i] <= ans_length) maxi = i;
//	}
//
//	low = 1, high = maxi, mid;
//	int tm = 0;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (is_okay(ans_length, k, c-1, mid+1) == 1)
//		{
//			ans_point = mid;
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//
//
//	printf("%d %d", ans_length, a[ans_point]);
//	return 0;
//}