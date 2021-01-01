//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define INF 987654321
//#define N 10
//#define M 1024	
//using namespace std;
//vector<int> links[N + 1];
//int d[M + 1] = { 0 };
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i <= M; i++) d[i] = INF;
//	for (int i = 1; i <= m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		for (int j = 1; j <= tmp; j++)
//		{
//			int t;
//			cin >> t;
//			links[i].push_back(t);
//		}
//	}
//	
//	int max = 1, max_m = 1;
//	for (int i = 1; i <= n; i++) max *= 2;
//	for (int i = 1; i <= m; i++) max_m *= 2;
//
//	for (int i = 0; i <= max_m; i++)
//	{
//		int tmp[N + 1] = { 0 };
//		int next[N + 1] = { 0 };
//
//		int idx = 0, number = i, cnt = 0;
//		while (number != 0)
//		{
//			tmp[++idx] = number % 2;
//			number /= 2;
//		}
//
//		for (int i = 1; i <= idx; i++)
//		{
//			if (tmp[i] != 0)
//			{
//				for (int j = 0; j < links[i].size(); j++) next[links[i][j]] = 1;
//				cnt++;
//			}
//		}
//
//		int r = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			number += next[i] * r;
//			r *= 2;
//		}
//		if (d[number] > cnt) d[number] = cnt;
//	}
//
//	if (d[max - 1] == INF) d[max - 1] = -1;
//	printf("%d", d[max-1]);
//	return 0;
//}