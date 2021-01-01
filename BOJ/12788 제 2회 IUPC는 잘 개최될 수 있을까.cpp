//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//int cnt[101];
//int main()
//{
//	int n,m,k;
//	int pens;
//	cin >> n;
//	cin >> m >> k;
//	pens = m * k;
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		cnt[tmp]++;
//	}
//
//	int ans = 0;
//	for (int i = 100; i >= 1; i--)
//	{
//		while (cnt[i] != 0 && pens > 0) pens -= i, cnt[i]--, ans++;
//	}
//	if (pens > 0) printf("STRESS");
//	else printf("%d", ans);
//	return 0;
//}