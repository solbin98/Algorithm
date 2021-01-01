//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 300000
//#define INF 987654321
//#define SUM 0 
//#define REST 1
//using namespace std;
//vector<int> link[N + 1];
//int info[N + 1][2];
//int n, k;
//
//void dfs(int now, int pre)
//{
//	int max1 = -1, max2 = -1;
//	int max_idx1 = -1, max_idx2 = -1;
//	int sum = 0;
//	for (int i = 0; i < link[now].size(); i++)
//	{
//		int next = link[now][i];
//		if (pre != next)
//		{
//			dfs(next, now);
//			if (info[next][REST] >= max1)
//				max2 = max1, max_idx2 = max_idx1, max1 = info[next][REST], max_idx1 = i;
//			else
//			{
//				if (info[next][REST] >= max2)
//					max2 = info[next][REST], max_idx2 = i;
//			}
//			sum += info[next][SUM];
//		}
//	}
//	if (max_idx1 == -1)
//	{
//		info[now][SUM] = 1;
//		info[now][REST] = k;
//	}
//	else
//	{
//		if (max1 != 0)
//		{
//			info[now][SUM] = sum;
//			info[now][REST] = max1 - 1;
//		}
//		else
//		{
//			info[now][SUM] = sum + 1;
//			info[now][REST] = k;
//		}
//
//		if (max_idx2 != -1 && max2 != 0 && max1 != 0)
//		{
//			if (2*(k+1) - (max1 + max2) + 1 <= k + 1)
//			{
//				info[now][SUM] = sum - 1;
//				info[now][REST] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b), link[b].push_back(a);
//	}
//	dfs(1, 0);
//	printf("%d", info[1][SUM]);
//	return 0;
//}