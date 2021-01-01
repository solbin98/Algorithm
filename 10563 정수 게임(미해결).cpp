//#include<iostream>
//#include<cstdio>
//#define N 100
//
//using namespace std;
//int arr[N + 1], link1[N + 1][N + 1], link2[N + 1][N + 1], n;
//int dp1[N + 1], dp2[N + 1];
//
//int dfs(int now)
//{
//	if (now == 0) return 0;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//		if (link2[now][i] == 1) cnt += dfs(i);
//	return dp2[now] = cnt + 1;
//}
//
//int calc_pare(int now)
//{
//	if (now == 0) return 0;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//		if (link1[now][i]) cnt += calc_pare(i);
//	return dp1[now] = cnt + 1;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int start = 0;
//		for (int i = 1; i <= N; i++) dp1[i] = 0, dp2[i] = 0, arr[i] = 0;
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				link1[i][j] = 0, link2[i][j] = 0;
//
//		cin >> n;
//		for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i] == 1) start = i;
//			if (arr[i - 1] > arr[i]) link1[i][i - 1] = 1, link2[i - 1][i] = 1;
//			if (arr[i + 1] > arr[i]) link1[i][i + 1] = 1, link2[i + 1][i] = 1;
//		}
//
//		int parent[2] = { 0 };
//		int cnt = -1;
//		
//		for (int i = 1; i <= n; i++)
//			if (link1[start][i] == 1) parent[++cnt] = i;
//		if (cnt == -1)
//		{
//			printf("Alice\n");
//			continue;
//		}
//		calc_pare(parent[0]), calc_pare(parent[1]);
//		dfs(parent[0]), dfs(parent[1]);
//		dp2[parent[0]] -= 2, dp2[parent[1]] -= 2;
//
//		if (cnt == 0)
//		{
//			if (dp1[parent[0]] >= 2)
//			{
//				if (n % 2 == 1) printf("Alice\n");
//				else printf("Bob\n");
//			}
//			else
//			{
//				if ((n - dp2[parent[0]]) % 2 == 1) printf("Alice\n");
//				else printf("Bob\n");
//			}
//		}
//		else if (cnt == 1)
//		{
//			if (dp1[parent[0]] * dp1[parent[1]] == 1)
//			{
//				if ((n - dp2[parent[0]]) % 2 == 1 || (n - dp2[parent[1]]) % 2 == 1) printf("Alice\n");
//				else printf("Bob\n");
//			}
//			else
//			{
//				if (n % 2 == 1) printf("Alice\n");
//				else printf("Bob\n");
//			}
//		}
//	}
//	return 0;
//}