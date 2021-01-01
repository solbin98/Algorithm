//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//long long dp[19] = { 0 };
//
//long long calc(long long num)
//{
//	if (num == 0) return 1;
//	else if (num < 0) return 0;
//	long long arr[30] = { 0 };
//	int idx = 0;
//	long long tmp = num, cnt_zero = 0;
//
//	while (tmp != 0)
//	{
//		arr[++idx] = tmp % 10;
//		tmp /= 10;
//	}
//
//	int now = 1;
//	long long sum = 0, r = 1;
//
//	for (int i = now + 1; i <= idx; i++) if (arr[i] == 0) cnt_zero++;
//	sum += (arr[1] + 1) * cnt_zero;
//	sum++;
//	arr[1] = 0;
//	while (now <= idx)
//	{	
//		long long cnt = 0;
//		for (int i = now + 1; i <= idx; i++) if (arr[i] == 0) cnt++;
//		while (arr[now] > 0)
//		{
//			if (now == idx && arr[now] == 1) break;
//			if (arr[now] - 1 == 0) sum += r;
//			sum += dp[now - 1] + r * cnt;
//			arr[now]--;
//		}
//		now++, r *= 10;
//	}
//	sum += dp[idx - 1];
//	r = 1;
//	for (int i = 1; i <= idx - 2; i++) r *= 10, sum -= r;
//	return sum;
//}
//
//
//int main()
//{
//	long long r = 1;
//	for (int i = 1; i <= 18; i++) dp[i] = 10 * dp[i - 1] + r, r *= 10;
//	while (1)
//	{
//		long long a, b;
//		cin >> a >> b;		
//		if (a < 0 && b < 0) break;
//		printf("%lld \n", calc(b) - calc(a-1));
//	}
//	return 0;
//}