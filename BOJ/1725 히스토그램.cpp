//#include<iostream>
//#include<cstdio>
//#define N 1000000
//
//using namespace std;
//int top = 0;
//long long a[N + 1], stack[N + 1] = { -3 }, cnt[N + 1];
//
//int main()
//{
//	while (1)
//	{
//		long long n, ans = 0;
//		cin >> n;
//		if (n == 0) break;
//		for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
//
//		a[n + 1] = -1;
//		stack[++top] = a[1], cnt[top] = 1;
//
//		for (int i = 2; i <= n + 1; i++)
//		{
//			if (a[i] > stack[top]) stack[++top] = a[i], cnt[top] = 1;
//			else
//			{
//				long long save = 1, ori_top = top, plus = 0;
//				while (a[i] <= stack[top])
//				{
//					if (ans < stack[top] * (cnt[top] + (ori_top - top) + plus)) ans = stack[top] * ((ori_top - top) + cnt[top] + plus);
//					if (cnt[top] >= 2) plus += cnt[top] - 1;
//					save += cnt[top];
//					top--;
//				}
//				stack[++top] = a[i], cnt[top] = save;
//			}
//		}
//
//		printf("%lld\n", ans);
//	}
//	return 0;
//}