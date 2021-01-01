//#include<iostream>
//#include<cstdio>
//using namespace std;
//#define N 10000
//bool chk[N + 1];
//int main()
//{
//	for (int i = 1; i * i <= 10000; i++) chk[i * i] = 1;
//	int n, m;
//	cin >> n;
//	cin >> m;
//
//	int min = 98765432, ans = 0;
//	for (int i = n; i <= m; i++)
//	{
//		if (chk[i] != 0)
//		{
//			if (min > i) min = i;
//			ans += i;
//		}
//	}
//	if (ans == 0) printf("-1");
//	else printf("%d\n%d", ans, min);
//	return 0;
//}