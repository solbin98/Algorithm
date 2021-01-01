//#include<iostream>
//#include<cstdio>
//#define N 8000000
//#define INF 987654321
//using namespace std;
//int dp[N + 1], tour[N + 1];
//bool visit[N + 1];
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int pows(int n, int r)
//{
//	int s = 1;
//	for (int i = 1; i <= r; i++) s *= n;
//	return s;
//}
//
//int calc(int num, int r)
//{
//	int idx = 1, sum = 0;
//	while (num > 0)
//	{
//		sum += pows(num % 10, r);
//		num /= 10;
//	}
//	return sum;
//}
//
//int solve(int num, int r, int idx)
//{
//	tour[idx] = num;
//	if (dp[num] != INF) return dp[num];
//	if (visit[num] == 1)
//	{
//		int index = --idx;
//		int mins = num;
//		while (tour[index] != num)
//		{
//			if (mins > tour[index]) mins = tour[index];
//			index--;
//		}
//		return mins;
//	}
//
//	visit[num] = 1;
//	int cal = calc(num, r);
//	dp[num] = min(num, solve(cal, r, idx + 1));
//	visit[num] = 0;
//	return dp[num];
//}
//
//int main()
//{
//	dp[1] = 1;
//	long long a, b, k, sum = 0;
//	cin >> a >> b >> k;
//	for (int i = 1; i <= N; i++) dp[i] = INF;
//	for (int i = a; i <= b; i++) sum += solve(i, k, 1);
//	printf("%lld", sum);
//	return 0;
//}