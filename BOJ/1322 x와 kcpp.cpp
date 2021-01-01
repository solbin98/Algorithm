//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//long long x_a[N + 1], k_a[N + 1];
//long long calc[N + 1];
//int main()
//{
//	long long x, k, x_idx = 0, k_idx = 0, now = 1, r = 1;
//	long long ans = 0;
//	cin >> x >> k;
//	while (x != 0) x_a[++x_idx] = x % 2, x /= 2;	
//	for (int i = 1; i <= x_idx; i++)
//	{
//		if (x_a[i] == 0) calc[now++] = r;
//		r *= 2;
//	}
//	for (int i = x_idx; i <= N; i++) calc[now++] = r, r *= 2;
//	while (k != 0) k_a[++k_idx] = k % 2, k /= 2;
//	for (int i = 1; i <= k_idx; i++) ans += calc[i] * k_a[i];
//	printf("%lld", ans);
//	return 0;
//}