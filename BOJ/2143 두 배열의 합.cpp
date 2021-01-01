//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 1012
//
//using namespace std;
//long long a[N + 1], b[N + 1], sum[N + 1];
//long long sum_a[N * N + 1], sum_b[N * N + 1];
//
//int main()
//{
//	long long T, n, m;
//	int index_a = 0, index_b = 0;
//
//	cin >> T;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]), sum[i] = sum[i - 1] + a[i];
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j < i; j++)
//			sum_a[++index_a] = sum[i] - sum[j];
//
//	cin >> m;
//	for (int i = 1; i <= m; i++) scanf("%lld", &b[i]), sum[i] = b[i] + sum[i - 1];
//
//	for (int i = 1; i <= m; i++)
//		for (int j = 0; j < i; j++)
//			sum_b[++index_b] = sum[i] - sum[j];
//
//	sort(sum_a+1, sum_a + index_a+1);
//	sort(sum_b+1, sum_b + index_b+1);
//
//	int L = 1, R = index_b;
//	long long count = 0;
//	while (L <= index_a && R >= 1)
//	{
//		if (sum_a[L] + sum_b[R] > T) R--;
//		else if (sum_a[L] + sum_b[R] < T) L++;
//		else
//		{
//			long long tmp_a = 1, tmp_b = 1;
//			while (sum_a[L + 1] == sum_a[L] && L != index_a) tmp_a++, L++;
//			while (sum_b[R - 1] == sum_b[R] && R != 1) tmp_b++, R--;
//			count += tmp_a * tmp_b;
//			R--;
//		}
//	}
//
//	printf("%lld", count);
//	return 0;
//}