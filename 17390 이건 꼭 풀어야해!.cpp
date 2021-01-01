//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 300000
//using namespace std;
//int a[N + 1], sum[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	sort(a,a+n+1);
//	for (int i = 1; i <= n; i++) sum[i] = a[i] + sum[i - 1];
//	for (int i = 1; i <= m; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		printf("%d\n", sum[t2] - sum[t1-1]);
//	}
//	return 0;
//}