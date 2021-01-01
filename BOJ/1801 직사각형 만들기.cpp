//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//#define N 16
//#define M 70000
//using namespace std;
//int a[N + 1], ary[5], pows[N + 1];
//int n, r = 1, ans = 0;
//
//int chk(int now, int sum, int idx, int bit)
//{
//	//printf("now : %d sum : %d idx : %d bit : %d\n", now, sum, idx, bit);
//
//	if (now == 5) return 0;
//	if (now == 4 && ary[now] == sum) return 1;
//	
//	int ref = 0;
//	if (ary[now] == sum) ref += chk(now + 1, 0, 1, bit);
//	for (int i = idx; i <= n; i++)
//	{
//		if (((bit + pows[i]) == (bit | pows[i])) && (sum + a[i] <= ary[now])) ref += chk(now, sum + a[i], i, bit | pows[i]);
//		else if (sum + a[i] > ary[now]) break;
//	}
//
//	return ref;
//}
//
//int main()
//{
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	sort(a + 1, a + n + 1);
//	for (int i = 1; i <= n; i++) pows[i] = r, r *= 2;
//
//	for (int w = 1; w <= 80; w++)
//		for (int h = w; h <= 80; h++)
//		{
//			if (w * 2 + h * 2 > 160) continue;
//			ary[1] = w, ary[2] = w;
//			ary[3] = h, ary[4] = h;
//			if (chk(1,0,1,0) >= 1)
//			{
//				if (ans < w * h) ans = w * h;
//			}
//		}
//	printf("%d", ans);
//	return 0;
//}