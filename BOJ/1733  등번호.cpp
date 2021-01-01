//#include<iostream>
//#include<cstdio>
//#define N 4000000
//using namespace std;
//int prime[N + 1];
//bool p[N + 1] = { 0 };
//int main()
//{
//	for (int i = 2; i <= N; i++) p[i] = 1;
//	for (int i = 2; i * i <= N; i++)
//	{
//		if (p[i] == 0) continue;
//		for (int j = i + i; j <= N; j += i) p[j] = 0;
//	}
//
//	int idx = 0;
//	for (int i = 2; i <= N; i++)
//		if (p[i] == 1) prime[++idx] = i;
//	
//	int T = 1;
//	int L = 1, R = 1, n, cnt = 0;
//	int sum = 2;
//	cin >> n;	
//
//	while (1)
//	{
//		while (n > sum) sum += prime[++R];
//		if (prime[R] > n) break;
//		if (n == sum) cnt++;
//		while (n <= sum)
//		{
//			sum -= prime[L++];
//			if (sum == n) cnt++;
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}