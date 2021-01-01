//#include<iostream>
//#include<cstdio>
//#define INF 987654321
//using namespace std;
//bool chk[10];
//int diff(int a, int b)
//{
//	int out = a - b;
//	if (out < 0) out *= -1;
//	return out;
//}
//int main()
//{
//	for (int i = 0; i <= 9; i++) chk[i] = 1;
//	int n, m, k, ans = INF;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		chk[tmp] = 0;
//	}
//
//	for (int i = 0; i <= 1000000; i++)
//	{
//		bool tmp[10] = { 0 }, flag = 0;
//		int num = i, cnt = 0;
//
//		while (1)
//		{
//			tmp[num % 10] = 1;
//			num /= 10;
//			cnt++;			
//			if (num == 0) break;
//		}	
//
//		for (int i = 0; i <= 9; i++) if (tmp[i] > chk[i]) flag = 1;		
//		if (i == 100) cnt = 0, flag = 0;
//		if (flag == 0)
//		{
//			if (diff(n, i) + cnt < ans) ans = diff(n, i) + cnt;
//			if (diff(100, n) < ans) ans = diff(100, n);
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}