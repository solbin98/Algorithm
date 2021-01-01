//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define MOD 1000000007
//using namespace std;
//unsigned long long num_n, num_c, num_nc, num_cn, n;
//char str[N + 1][20];
//
//unsigned long long calc(unsigned long long max)
//{
//	unsigned long long tmp = 0, r = 1;
//	for (unsigned long long i = max; i >= 1; i--)
//	{
//		r *= i;
//		r %= MOD;
//		tmp += r;
//		tmp %= MOD;
//	}
//	tmp = tmp + 1;
//	tmp %= MOD;
//	return tmp;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%s", str[i]);
//		
//	for (int i = 1; i <= n; i++)
//	{
//		int isN = 0, isC = 0;
//		bool chk = 0;
//		for (int j = 0; str[i][j] != '\0'; j++)
//		{
//			if (isN == 1 && str[i][j] == 'C')
//			{
//				num_nc++;
//				chk = 1;
//				break;
//			}
//			else
//			{
//				if (str[i][j] == 'N') isN = 1;
//				else if (str[i][j] == 'C') isC = 1;
//			}
//		}
//
//		if (chk == 0)
//		{
//			if (isN == 1 && isC == 0) num_n++;
//			else if (isN == 0 && isC == 1) num_c++;
//			else if (isN == 1 && isC == 1) num_cn++;
//		}
//	}
//
//	unsigned long long ans = 0, minus = 0;
//	ans = calc(n);
//	minus = (((calc(num_c) * (num_cn+1)) % MOD) * calc(num_n)) % MOD;
//	ans = (ans - minus + MOD) % MOD;
//	printf("%llu", ans);
//	return 0;
//}