//#include<iostream>
//#include<cstdio>
//#define N 30
//using namespace std;
//long long ary[N + 1][3], ans = 0;
//int cnt = 0, k;
//
//void swap(long long & a, long long & b)
//{
//	long long tmp = a;
//	a = b;
//	b = tmp;
//}
//
//long long pows(int n)
//{
//	long long r = 1;
//	for (int i = 1; i <= n; i++) r *= 2;
//	return r;
//}
//
//void find_ans(long long l, long long w, long long h, int index)
//{
//	if (l == 0 || w == 0 || h == 0) return;
//	if (index > k)
//	{
//		ans = -1;
//		return;
//	}
//	long long now = ary[index][2];
//	if (ary[index][1] == 0)
//	{
//		find_ans(l, w, h, index+1);
//		return;
//	}
//	if (now <= l && now <= w && now <= h)
//	{
//		ans++;
//		ary[index][1]--;
//		find_ans(now, w - now, now, index);
//		find_ans(l - now, w, now, index);
//		find_ans(l, w, h - now, index);
//	}
//	else find_ans(l, w, h, index + 1);
//}
//
//int main()
//{
//	int l, w, h;
//	cin >> l >> w >> h;
//	cin >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		ary[i][0] = t1, ary[i][1] = t2, ary[i][2] = pows(t1);
//	}
//
//	for (int i = k - 1; i >= 1; i--)
//		for (int j = 1; j <= i; j++)
//			if (ary[j][0] < ary[j + 1][0])
//			{
//				swap(ary[j][0], ary[j + 1][0]);
//				swap(ary[j][1], ary[j + 1][1]);
//				swap(ary[j][2], ary[j + 1][2]);
//			}
//
//	find_ans(l, w, h,1);
//	printf("%lld", ans);
//	return 0;
//}