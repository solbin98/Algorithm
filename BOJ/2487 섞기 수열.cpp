//#include<iostream>
//#include<cstdio>
//#define N 20000
//
//using namespace std;
//int a[N + 1], circle[N + 1] = { 0, 1 }, prime[N + 1];
//bool visit[N + 1] = { 0 }, is_prime[N + 1];
//
//int dfs(int now)
//{
//	if (visit[now] == 1) return 0;
//	visit[now] = 1;
//	int sum = 0;
//	sum += dfs(a[now]);
//	return sum + 1;
//}
//
//int main()
//{
//	int n, idx = 0;
//
//	for (int i = 2; i * i <= N; i++)
//		if (is_prime[i] == 0)
//			for (int j = i + i; j <= N; j += i) is_prime[j] = 1;
//		
//	for (int i = 2; i <= N; i++)
//		if (is_prime[i] == 0)  prime[++idx] = i;
//	
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//		if (visit[i] == 0)
//		{
//			int tmp = dfs(i);
//			int a[N + 1] = { 0 };
//			int cnt[N + 1] = { 0 };
//
//			int t_idx = 1, a_idx = 0;
//			while (tmp != 1)
//			{
//				while (tmp % prime[t_idx] != 0) t_idx++;
//				tmp /= prime[t_idx];
//				a[++a_idx] = prime[t_idx], cnt[prime[t_idx]]++;
//			}
//
//			for (int i = 1; i <= a_idx; i++)
//			{
//				if (circle[a[i]] < cnt[a[i]]) circle[a[i]] = cnt[a[i]];
//			}
//		}
//	int ans = 1;
//	for (int i = 1; i <= N; i++)
//	{
//		while (circle[i] > 0) ans *= i, circle[i]--;
//	}
//	printf("%d", ans);
//	return 0;
//}