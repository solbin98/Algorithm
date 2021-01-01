//#include<iostream>
//#include<cstdio>
//#define N 200000
//using namespace std;
//int deg[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		deg[u+1]++, deg[v+1]++;
//	}
//
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//		if (deg[i] == 1) cnt++;
//	
//	if (cnt % 2 == 0) printf("%d", cnt / 2);
//	else printf("%d", (cnt/2) + 1);
//	return 0;
//}