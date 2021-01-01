//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int effect[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n;
//	for (int i = 0; i <= N; i++) effect[i] = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		effect[a] = b;
//	}
//
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int len, tmp[N + 1] = { 0 }, idx = 0;
//		bool chk = 1;
//		cin >> len;
//		for (int j = 1; j <= len; j++)
//		{
//			int a;
//			cin >> a;
//			if (a > N || effect[a] == -1)
//			{
//				chk = 0;
//				continue;
//			}
//			tmp[++idx] = effect[a];
//		}
//		if (chk == 0) printf("YOU DIED\n");
//		else
//		{
//			for (int j = 1; j <= idx; j++) printf("%d ", tmp[j]);
//			printf("\n");
//		}
//	}
//
//}