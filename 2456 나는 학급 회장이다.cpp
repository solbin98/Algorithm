//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//int n, a[3] = { 0 }, cnt[3][4] = { 0 };
//bool compare(int i, int j)
//{
//	if (a[i] == a[j])
//	{
//		if (cnt[i][3] == cnt[j][3])
//		{
//			if (cnt[i][2] == cnt[j][2])
//			{
//				if (cnt[i][1] == cnt[j][1]) return 0;
//				else return cnt[i][1] < cnt[j][1];
//			}
//			else return cnt[i][2] < cnt[j][2];
//		}
//		else return cnt[i][3] < cnt[j][3];
//	}
//	else return a[i] < a[j];
//}
//
//int main()
//{
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a1, a2, a3;
//		cin >> a1 >> a2 >> a3;
//		a[0] += a1, a[1] += a2, a[2] += a3;
//		cnt[0][a1]++, cnt[1][a2]++, cnt[2][a3]++;
//	}
//
//	int max = 0, max_idx = 0, count = 0;
//	max_idx = compare(0, 1);
//	if (max_idx == 0)
//	{
//		if (compare(0, 2) == 0) max_idx = 0;
//		else max_idx = 2;
//	}
//	else
//	{
//		if (compare(1, 2) == 0) max_idx = 1;
//		else max_idx = 2;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (a[i] == a[max_idx] && cnt[max_idx][1] == cnt[i][1] && cnt[max_idx][2] == cnt[i][2] && cnt[max_idx][3] == cnt[i][3])
//		{
//			count++;
//		}
//	}
//
//	if (count > 1)
//	{
//		printf("0 %d", a[max_idx]);
//		return 0;
//	}
//	printf("%d %d\n", max_idx+1, a[max_idx]);
//	return 0;
//}