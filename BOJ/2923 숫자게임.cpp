//#include<iostream>
//#include<cstdio>
//#define N 102
//#define INF 987654321
//
//using namespace std;
//int a[N + 1], b[N + 1];
//int ta[N + 1], tb[N + 1];
//
//int find_min()
//{
//	int a_i = 1, b_i = 100;
//	int ans = 0;
//	while (a_i <= 100 && b_i >= 1)
//	{
//		while (ta[a_i] == 0 && a_i <= 100) a_i++;
//		while (tb[b_i] == 0 && b_i >= 1) b_i--;
//
//		if (a_i > 100 || b_i < 1) break;
//		if (ta[a_i] > tb[b_i])
//		{
//			ta[a_i] -= tb[b_i], tb[b_i] = 0;
//			if (a_i + b_i > ans) ans = a_i + b_i;
//		}
//		else
//		{
//			tb[b_i] -= ta[a_i], ta[a_i] = 0;
//			if (a_i + b_i > ans) ans = a_i + b_i;
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		a[t1]++, b[t2]++;
//		for (int i = 1; i <= N; i++) ta[i] = a[i], tb[i] = b[i];
//		printf("%d\n", find_min());
//	}
//
//	return 0;
//}