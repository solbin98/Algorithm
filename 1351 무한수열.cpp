//#include<cstdio>
//
//long long dp[50][50];
//long long n, p, q;
//bool is_okay(int y, int x)
//{
//	long long pr = 1, qr = 1;
//	for (int i = 1; i <= y; i++) pr *= p;
//	for (int i = 1; i <= x; i++) qr *= q;
//	if (n / (pr * qr) == 0) return 1;
//	else return 0;
//}
//
//long long solve(int y, int x)
//{
//	if (dp[y][x] != 0) return dp[y][x];
//	if (is_okay(y, x) == 1)
//	{
//		dp[y][x] = 1;
//		return dp[y][x];
//	}
//	long long sum = 0;
//	sum += solve(y + 1, x);
//	sum += solve(y, x + 1);
//
//	dp[y][x] = sum;
//	return sum;
//}
//
//int main()
//{
//	scanf_s("%lld %lld %lld", &n, &p, &q);
//	solve(0, 0);
//	printf("%lld", dp[0][0]);
//	return 0;
//}