//#include<iostream>
//#include<cstdio>
//#define N 50
//
//using namespace std;
//
//
//int a[N + 1], even[N + 1], odd[N + 1];
//int is_prime[2001], links[N + 1][N + 1], match[N + 1];
//int e_i = 1, o_i = 1;
//bool visit[N + 1];
//
//int dfs(int num)
//{
//	visit[num] = 1;
//	for (int i = 1; i <= e_i; i++)
//	{
//		if (links[num][i] == 0) continue;
//		if (match[i] == 0)
//		{
//			match[i] = num;
//			return 1;
//		}
//		else
//		{
//			if (match[i] == 1) continue;
//			if (visit[match[i]] == 0 && dfs(match[i]) == 1)
//			{
//				match[i] = num;
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	int mods = a[1] % 2;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] % 2 != mods) even[e_i++] = a[i];
//		else odd[o_i++] = a[i];
//	}
//	o_i--, e_i--;
//
//	if (e_i != o_i)
//	{
//		printf("-1");
//		return 0;
//	}
//
//	for (int i = 3; i <= 2000; i++)
//	{
//		
//		if (is_prime[i] == 0)
//		{
//			for (int j = i + i; j <= 2000; j += i) is_prime[j] = -1;
//			is_prime[i] = 1;
//		}
//	}
//
//	for (int i = 1; i <= o_i; i++)
//		for (int j = 1; j <= e_i; j++)
//			if (is_prime[even[j] + odd[i]] == 1)
//			{
//				links[i][j] = 1;
//			}
//	int outputs[1001] = { 0 };
//	int flag = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= N; j++) match[j] = 0;
//		if (links[1][i] == 1)
//		{
//			int ans = 1;
//			match[i] = 1, visit[1] = 1;
//			for (int j = 2; j <= o_i; j++)
//			{
//				ans += dfs(j);
//				for (int k = 0; k <= N; k++) visit[k] = 0;
//			}
//			if (o_i == ans) flag = 1, outputs[even[i]]++;
//		}
//	}
//	if (flag == 0) printf("-1");
//
//	for (int i = 1; i <= 1000; i++)
//	{
//		if (outputs[i] != 0) printf("%d ", i);
//	}
//	return 0;
//}