//#include<iostream>
//#include<cstdio>
//#define N 100006
//using namespace std;
//char str1[N + 1], str2[N + 1];
//int a[N + 1], b[N + 1];
//int main()
//{
//	int n;
//	int ans = 0, flag = 0, result = N+1;
//	cin >> n;
//	cin >> str1;
//	cin >> str2;
//	for (int i = 1; i <= n; i++) a[i] = str1[i-1] - '0', b[i] = str2[i-1] - '0';
//
//	if (b[1] == a[1])
//	{
//		a[3] = !a[3];
//		ans += 2;
//		for (int i = 3; i <= n ;i++)
//		{
//			if (i == n)
//			{
//				if (a[i] != b[i]) a[i] = !(a[i]), a[i - 1] = !(a[i - 1]), ans++;
//			}
//			else
//			{
//				if (a[i] != b[i])
//				{
//					ans++;
//					for (int j = i; j <= i + 2; j++) a[j] = !(a[j]);
//				}
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			if (a[i] != b[i]) flag = 1;
//		
//		if (flag == 0)
//		{
//			if (result > ans) result = ans;
//		}
//
//		ans = 0, flag = 0;
//		for (int i = 1; i <= n; i++) a[i] = str1[i - 1] - '0';
//		for (int i = 2; i <= n; i++)
//		{
//			if (i == n)
//			{
//				if (a[i] != b[i]) a[i] = !(a[i]), a[i - 1] = !(a[i - 1]), ans++;
//			}
//			else
//			{
//				if (a[i] != b[i])
//				{
//					ans++;
//					for (int j = i; j <= i + 2; j++) a[j] = !(a[j]);
//				}
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			if (a[i] != b[i]) flag = 1;
//
//		if (flag == 0)
//			if (result > ans) result = ans;
//	}
//	else
//	{
//		a[1] = !a[1], a[2] = !a[2], ans++;
//		for (int i = 2; i <= n - 1; i++)
//		{
//			if (i == n)
//			{
//				if (a[i] != b[i]) a[i] = !(a[i]), a[i - 1] = !(a[i - 1]), ans++;
//			}
//			else
//			{
//				if (a[i] != b[i])
//				{
//					ans++;
//					for (int j = i; j <= i + 2; j++) a[j] = !(a[j]);
//				}
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			if (a[i] != b[i]) flag = 1;
//
//		if (flag == 0)
//		{
//			if (result > ans) result = ans;
//		}
//
//		ans = 0, flag = 0;
//		for (int i = 1; i <= n; i++) a[i] = str1[i-1] -'0';
//		for (int i = 1; i <= n - 1; i++)
//		{
//			if (i == n)
//			{
//				if (a[i] != b[i]) a[i] = !(a[i]), a[i - 1] = !(a[i - 1]), ans++;
//			}
//			else
//			{
//				if (a[i] != b[i])
//				{
//					ans++;
//					for (int j = i; j <= i + 2; j++) a[j] = !(a[j]);
//				}
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			if (a[i] != b[i]) flag = 1;
//
//		if (flag == 0)
//		{
//			if (result > ans) result = ans;
//		}
//	}
//	if (result == N + 1) result = -1;
//	printf("%d",result);
//	return 0;
//}