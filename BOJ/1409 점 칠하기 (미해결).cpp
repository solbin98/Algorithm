//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 360
//using namespace std;
//bool chk[N + 1];
//
//int calc(int now, int diff, bool visit[])
//{
//	visit[now] = 1;
//	int sum = 0;
//	if (visit[(now + diff) % N] == 0 && chk[(now + diff)%N] == 1) 
//		sum += calc((now + diff) % N, diff, visit);
//	if (visit[(now + N - diff) % N] == 0 && chk[(now + N - diff) % N] == 1) 
//		sum += calc((now + N - diff) % N, diff, visit);
//	return sum + 1;
//}
//
//int main()
//{
//	int n, ans = 0, t;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> t, chk[t] = 1;
//	for (int diff = 1; diff <= 359; diff++)
//	{
//		bool visit[N + 1] = { 0 };
//		int cnts = 0, sum = 0;
//		for (int i = 0; i <= 359; i++)
//		{
//			if (visit[i] == 0 && chk[i] == 1)
//			{
//				sum = calc(i, diff, visit);
//				if (sum % 2 == 1) cnts += sum - 1;
//				else cnts += sum;
//			}
//		}
//		if (cnts > ans) ans = cnts;
//	}
//
//	printf("%d", ans);
//	return 0;
//}