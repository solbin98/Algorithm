//#include<iostream>
//#include<cstdio>
//#define N 500000
//#define M 1000000
//using namespace std;
//int info[M + 1][2], L[N + 1], R[N + 1], ans[N + 1];
//int visit[N + 1];
//int main()
//{
//	int n, m;
//	bool chk = 0;
//	cin >> n >> m;	
//	for (int i = 1; i <= n; i++) L[i] = i;
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d %d", &info[i][0], &info[i][1]);
//		L[info[i][1]]--, R[info[i][0]]++;
//	}
//	for (int i = 1; i <= n; i++) ans[i] = L[i] + R[i], visit[ans[i]]++;
//	for (int i = 1; i <= n; i++)
//	{
//		if (visit[i] > 1)
//		{
//			chk = 1;
//			break;
//		}
//	}
//	if (chk == 1) printf("-1");
//	else
//	{
//		for (int i = 1; i <= n; i++) printf("%d ", ans[i]);
//	}
//	return 0;
//}