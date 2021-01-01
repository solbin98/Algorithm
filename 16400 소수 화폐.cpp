//#include<iostream>
//#include<cstdio>
//#define N 40000
//#define MOD 123456789
//using namespace std;
//bool isnt_prime[N + 1];
//int m[N + 1];
//long long d[N + 1];
//int main()
//{
//	int n, idx = 0;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		if (isnt_prime[i] == 1) continue;
//		for (int j = i + i; j <= n; j += i) isnt_prime[j] = 1;
//	}
//
//	for(int i=2;i<=n;i++) 
//		if (isnt_prime[i] == 0)
//			m[++idx] = i;
//	
//	d[0] = 1;
//	for (int i = 1; i <= idx; i++)
//	{
//		for (int j = m[i]; j <= n; j++)
//		{
//			d[j] += d[j - m[i]];
//			d[j] %= MOD;
//		}
//	}
//	printf("%lld", d[n]);
//	return 0;
//}