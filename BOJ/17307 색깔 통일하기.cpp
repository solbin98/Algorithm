//#include<iostream>
//#include<stdio.h>
//#define N 250005
//#define INF 9876543210000000
//using namespace std;
//long long dp1[N + 1], dp2[N + 1], a[N + 1];
//long long dp3[N + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int abss(int a, int b)
//{
//	int ref = a - b;
//	if (ref < 0) ref *= -1;
//	return ref;
//}
//
//int main()
//{
//	int n, c;
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//
//	a[0] = -1, a[n + 1] = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i - 1] >= a[i]) dp1[i] = dp1[i - 1];
//		else dp1[i] = dp1[i - 1] + 1;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		if (a[i + 1] >= a[i]) dp2[i] = dp2[i + 1];
//		else dp2[i] = dp2[i + 1] + 1;
//	}
//
//	long long min = INF;
//
//	for (int i = 1; i <= n; i++)
//	{
//		long long ans = INF;
//		long long left = dp1[i - 1], right = dp2[i + 1], val = 0;
//
//		if (a[i] <= a[i - 1] && a[i] <= a[i + 1])
//		{
//			if (left == 1 && right == 1)
//			{
//				if (ans > abss(a[i], max(a[1], a[n]))) ans = abss(a[i], max(a[1], a[n]));
//			}
//		}
//		else if (a[i] <= a[i - 1] || a[i] <= a[i + 1])
//		{
//			if (left == 1 && right == 0)
//			{
//				if (ans > abss(a[i], a[1])) ans = abss(a[i], a[1]);
//			}
//			else if (left == 0 && right == 1)
//			{
//				if (ans > abss(a[i], a[n])) ans = abss(a[i], a[n]);
//			}
//		}
//	
//		val = c - a[i];
//		if (a[i] <= a[i - 1] && a[i] <= a[i + 1]) left--, right--;
//		else if (a[i] <= a[i - 1] || a[i] <= a[i + 1])
//		{
//			if (a[i] > a[i - 1]) right--;
//			else if (a[i] > a[i + 1]) left--;
//		}
//		if (right > left)
//		{
//			if (ans > val + right * c - (c - a[n])) ans = val + right * c - (c - a[n]);
//		}
//		else if (right < left)
//		{
//			if (ans > val + left * c - (c - a[1])) ans = val + left * c - (c - a[1]);
//		}
//		else
//		{
//			if (ans > val + left * c - (c - max(a[1], a[n]))) ans = val + left * c - (c - max(a[1], a[n]));
//		}
//	
//		dp3[i] = ans;
//		if (min > ans) min = ans;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (min == dp3[i])
//		{
//			printf("%lld\n%lld", i, min);
//			return 0;
//		}
//	}
//	return 0;
//}