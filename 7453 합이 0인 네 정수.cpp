//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 4000
//#define INF 987654321
//#define M 5
//using namespace std;
//int ary[N * N + 1], bry[N * N + 1] = { INF }, dp_b[N * N + 1];
//int a[N + 1], b[N + 1], c[N + 1], d[N + 1];
//
//int find(int number, int len)
//{
//	int low = 1, high = len, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (bry[mid] == number) return dp_b[mid];
//		else if (bry[mid] > number) high = mid - 1;
//		else low = mid + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n, idx1 = 0, idx2 = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			ary[++idx1] = a[i] + b[j], bry[++idx2] = c[i] + d[j];
//
//	sort(ary + 1, ary + (n*n) + 1), sort(bry + 1, bry + (n*n) + 1);
//
//	for (int i = 1; i <= n * n; i++)
//	{
//		if (bry[i] == bry[i - 1]) dp_b[i] = dp_b[i - 1];
//		else
//		{
//			for (int j = i; j <= n*n && bry[i] == bry[j]; j++) dp_b[i]++;
//		}
//	}
//
//	long long ans = 0;
//	for (int i = 1; i <= n * n; i++) ans += find(-ary[i], n * n);
//	printf("%lld", ans);
//	return 0;
//}