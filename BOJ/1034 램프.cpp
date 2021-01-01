//#include<iostream>
//#include<cstdio>
//#define N 50
//using namespace std;
//int arr[N + 1][N + 1];
//char a[N + 1][N + 1];
//int main()
//{
//	int n, m, k, maxs = 0;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			arr[i][j] = a[i - 1][j - 1] - '0';
//
//	cin >> k;
//	for (int p = 1; p <= n; p++)
//	{
//		int tmp[N + 1][N + 1] = { 0 };
//		bool chk[N + 1] = { 0 };
//
//		int t_cnt = 0;
//		for (int j = 1; j <= m; j++) if (arr[p][j] == 0) chk[j] = 1, t_cnt++;
//		if ((t_cnt < k) && (t_cnt % 2 != k % 2)) continue;
//		if (t_cnt > k) continue;
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//			{
//				if (chk[j] == 1) tmp[i][j] = !arr[i][j];
//				else tmp[i][j] = arr[i][j];
//			}
//
//		int cnt = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int flag = 1;
//			for (int j = 1; j <= m; j++)
//				if (tmp[i][j] == 0) flag = 0;
//			if (flag == 1) cnt++;
//		}
//		if (cnt > maxs) maxs = cnt;
//	}
//	printf("%d", maxs);
//	return 0;
//}