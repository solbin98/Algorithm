//#include<iostream>
//#include<cstdio>
//
//#define N 100000
//#define MAX 1000000000
//
//using namespace std;
//long long a[N + 1], ans = MAX + 1;
//
//unsigned long long calc(long long dis, int n)
//{
//	long long pre = 0;
//	unsigned long long sum = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		long long now = a[i] - a[i - 1] + pre;
//		if (now > dis)
//		{
//			sum += now - dis;
//			pre = now - dis;
//		}
//		else if (now < dis)
//		{
//			sum += dis - now;
//			pre = -(dis - now);
//		}
//		else pre = 0;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
//
//	long long low = 0, high = MAX, pos1, pos2;
//	unsigned long long ans = MAX * 1000000;
//
//	for (int i = 0; i < 100; i++)
//	{
//		pos1 = (low * 2 + high) / 3;
//		pos2 = (low + high * 2) / 3;	
//		if (calc(pos1, n) < calc(pos2, n)) high = pos2;
//		else low = pos1;
//	}
//	for (int i = low; i <= high; i++)
//		if (ans > calc(i, n)) ans = calc(i, n);
//
//	printf("%lld", ans);
//	return 0;
//}