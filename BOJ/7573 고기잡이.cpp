//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 105
//#define INF 987654321
//using namespace std;
//int sorted[N + 1][N + 1][N + 1], sorted_idx[N + 1][N + 1];
//pair<int, int> pos[N + 1];
//int main()
//{
//	int n, len, m;
//	int ans = 0;
//	cin >> n >> len >> m;
//	for (int i = 1; i <= m; i++) scanf("%d %d", &pos[i].first, &pos[i].second);
//	sort(pos + 1, pos + m + 1);
//	for (int i = 1; i <= m; i++)
//		for (int j = i; j <= m; j++)
//		{
//			int tmp[N + 1] = { 0 };
//			int idx = 0;
//			for (int k = i; k <= j; k++) tmp[++idx] = pos[k].second;
//			sort(tmp + 1, tmp+idx+1);
//			for (int k = 1; k <= idx; k++) sorted[i][j][k] = tmp[k];
//			sorted_idx[i][j] = idx;
//		}
//
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = i; j <= m; j++)
//		{
//			if (pos[j].first - pos[i].first >= len / 2) continue;
//			for (int k = 1; k <= sorted_idx[i][j]; k++)
//			{
//				for (int l = k; l <= sorted_idx[i][j]; l++)
//				{
//					int y1 = sorted[i][j][k], y2 = sorted[i][j][l];
//					int x1 = pos[i].first, x2 = pos[j].first;
//					if (y2 - y1 >= len/2) continue;
//					if (x2 - x1 + y2 - y1 <= len / 2)
//					{		
//						if (ans < l - k + 1) ans = l - k + 1;
//					}
//				}
//			}
//		}
//	}
//	if (ans == 0) ans++;
//	printf("%d", ans);
//	return 0;
//}