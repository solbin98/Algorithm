//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 1000000
//using namespace std;
//vector <int> link[N + 1];
//int edge[N+1], chk[N + 1];
//bool visit[N + 1];
//
//void dfs(int now, int flag)
//{
//	visit[now] = 1;
//	chk[now] = flag;
//	for (int i = 0; i < link[now].size(); i++)
//		if (visit[link[now][i]] == 0)
//			dfs(link[now][i], (flag+1)%2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b), link[b].push_back(a);
//		edge[a]++, edge[b]++;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (edge[i] != 1)
//		{
//			dfs(i, 1);
//			break;
//		}
//	}
//
//	int even = 0, odd = 0, cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (edge[i] == 1)
//		{
//			cnt++;
//			if (chk[i] == 0) even++;
//			else odd++;
//		}
//	}
//
//	if (n == 3 || n == 1) printf("1");
//	else if(n < 2) printf("0");
//	else
//	{
//		if (n - cnt <= 1) even--, odd--;
//
//		if (even > odd) printf("%d", even);
//		else printf("%d", odd);
//	}
//	return 0;
//}