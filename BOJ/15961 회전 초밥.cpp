//#include<iostream>
//#include<cstdio>
//#define N 10000000
//#define M 3000
//using namespace std;
//int a[N + 1], cnt2[M + 1];
//int main()
//{
//	int n, d, k, c, max = 0;
//	cin >> n >> d >> k >> c;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), a[i + n] = a[i];
//
//	int tmp = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		if (cnt2[a[i]] == 0) tmp++;
//		cnt2[a[i]]++;
//	}
//	if (cnt2[c] == 0) tmp++;
//	if (tmp > max) max = tmp;
//	if (cnt2[c] == 0) tmp--;
//	for (int i = k+1; i <= 2 * n; i++)
//	{
//		if (cnt2[a[i - k]] == 1) tmp--;
//		cnt2[a[i - k]]--;
//
//		if (cnt2[a[i]] == 0) tmp++;
//		cnt2[a[i]]++;
//
//		if (cnt2[c] == 0) tmp++;
//		if (tmp > max) max = tmp;
//		if (cnt2[c] == 0) tmp--;
//	}
//
//	printf("%d", max);
//	return 0;
//}