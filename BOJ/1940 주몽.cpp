//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int chk[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		chk[tmp]++;
//	}
//	int cnt = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (chk[i])
//		{
//			if (m - i > N || m - i < 1) continue;
//
//			if (m - i == i) continue;
//			else
//			{
//				if (chk[m - i] > 0)
//				{
//					chk[m - i]--;
//					cnt++;
//				}
//			}
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}