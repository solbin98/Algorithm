//#include<iostream>
//#include<cstdio>
//using namespace std;
//int arr[21][2];
//int tmp[21];
//int n, p, e, flag = 0;
//void dfs(int now, int cnt)
//{
//	if (flag == 1) return;
//	tmp[cnt] = now;
//	if (cnt == p)
//	{
//		int money = e;
//		int t[21] = { 0 };
//		for (int i = 1; i <= cnt; i++) money -= arr[tmp[i]][0], t[i] = arr[tmp[i]][1] - arr[tmp[i]][0];
//		if (money < 0) return;
//		for (int i = 1; i <= cnt; i++)
//		{
//			if (money > t[i]) money -= t[i], t[i] = 0;
//			else
//			{
//				t[i] -= money;
//				flag = 1;
//				for (int j = 1; j <= n; j++)
//				{
//					int chk = 0;
//					for (int k = 1; k <= cnt; k++)
//					{
//						if (tmp[k] == j)
//						{
//							chk = 1;
//							printf("%d ", arr[tmp[k]][1] - t[k]);
//							break;
//						}
//					}
//					if (chk == 0)
//					{
//						printf("0 ");
//					}
//				}
//				return;
//			}
//		}
//
//	}
//	for (int i = now + 1; i <= n; i++) dfs(i, cnt + 1);
//}
//int main()
//{
//	cin >> n >> p >> e;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &arr[i][0], &arr[i][1]);
//	dfs(0, 0);
//	if (flag == 0) printf("-1");
//	return 0;
//}