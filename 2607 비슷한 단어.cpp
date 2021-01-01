//#include<cstdio>
//#include<iostream>
//using namespace std;
//#define N 100
//
//char str[N + 1][N + 1];
//int a[N];
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> str[i];
//	for (int i = 0; str[1][i] != '\0'; i++) a[str[1][i] - 'A']++;
//	for (int i = 2; i <= n; i++)
//	{
//		int b[N] = { 0 };
//		int sum = 0;
//		for (int j = 0; str[i][j] != '\0'; j++) b[str[i][j] - 'A']++;
//		for (int j = 0; j < N; j++)
//		{
//			if (a[j] > b[j]) sum += a[j] - b[j];
//			else sum += b[j] - a[j];
//		}
//		if (sum <= 1) ans++;
//		else
//		{
//			if (sum > 2) continue;
//			else
//			{
//				int flag = 0;
//				for(int j = 0;j<=25;j++)
//					for (int k = 0; k <= 25; k++)
//					{
//						sum = 0;
//						if (flag == 1) break;
//						int tmp[N] = { 0 };
//						for (int p = 0; p < N; p++) tmp[p] = b[p];
//						if (tmp[j] == 0) continue;
//						tmp[j]--, tmp[k]++;
//
//						for (int p = 0; p < N; p++)
//						{
//							if (a[p] > tmp[p]) sum += a[p] - tmp[p];
//							else sum += tmp[p] - a[p];
//						}
//						if (sum <= 1)
//						{
//							flag = 1;
//							ans++;
//						}
//					}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}