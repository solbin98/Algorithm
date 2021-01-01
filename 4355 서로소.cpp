//#include<iostream>
//#include<cstdio>
//#define N 500
//using namespace std;
//double primes[N + 1];
//int main()
//{
//	int idx = 0, idx_a = 0;
//	long long n, ori;
//	double ans;
//	cin >> n;
//	ans = (double)n;
//	ori = n;
//	long long r = 2;
//	while (n != 1 && r*r <= n)
//	{
//		while (n % r == 0) n /= r, primes[++idx] = r;
//		r++;
//	}
//	if(n != 1) primes[++idx] = n;
//	int tmp = 1;
//	while (tmp <= idx)
//	{
//		while (primes[tmp] == primes[tmp + 1] && tmp < idx)
//		{
//			for (int i = tmp + 1; i <= idx; i++) primes[i - 1] = primes[i];
//			idx--;
//		}
//		tmp++;
//	}
//
//	for (int i = 1; i <= idx; i++) ans *= (1 - (1 / primes[i]));
//	printf("%.lf", ans);
//	return 0;
//}