//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//long long min(long long a, long long b)
//{
//	if (a < b) return a;
//	else return b;
//}
//int main()
//{
//	long long n, k, q;
//	cin >> n >> k >> q;
//	for (int i = 1; i <= q; i++) // ºÎ¸ð ÀÎµ¦½º = (n-2) / k
//	{
//		long long path_a[N + 1] = { 0 }, path_b[N + 1] = { 0 };
//		long long a, b, idx_a = 0, idx_b=0;
//		scanf("%lld %lld", &a, &b);
//		if (k == 1)
//		{
//			long long out = a - b;
//			if (out < 0) out *= -1;
//			printf("%lld\n", out);
//			continue;
//		}
//		while (1)
//		{
//			path_a[++idx_a] = a;
//			if (a == 1) break;
//			a = ((a - 2) / k)+1;
//		}
//
//		while (1)
//		{
//			path_b[++idx_b] = b;
//			if (b == 1) break;
//			b = ((b - 2) / k)+1;
//		}
//
//		long long plus_a = 0, plus_b = 0, len = min(idx_a, idx_b);
//		if (idx_a > idx_b) plus_a = idx_a - idx_b;
//		if (idx_a < idx_b) plus_b = idx_b - idx_a;
//		for (long long i = 1; i <= len; i++)
//		{
//			if (path_a[i + plus_a] == path_b[i + plus_b])
//			{
//				printf("%lld\n", (i+plus_a)-1 + (i+plus_b)-1);
//				break;
//			}
//		}
//	}
//	return 0;
//}