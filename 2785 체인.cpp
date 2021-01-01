//#include<iostream>
//#include<cstdio>
//#define N 1000000
//
//using namespace std;
//int cnt[1000001];
//
//int main()
//{
//	int n, t;
//	int n_num = 0, part_num = 0, ans = 0;
//	cin >> n;
//	n_num = n;
//	for (int i = 1; i <= n; i++) scanf("%d", &t), cnt[t]++;
//	for (int i = 1; i <= N; i++)
//	{
//		if (part_num == n_num - 1) break;
//		while (cnt[i] > 0)
//		{
//			if (part_num + i <= n_num - 2) part_num += i, n_num--, ans += i, cnt[i]--;
//			else if (part_num + i > n_num - 2)
//			{
//				ans += ((n_num - 1) - part_num);
//				part_num += ((n_num - 1) - part_num);
//				break;
//			}
//		}
//		
//	}
//	printf("%d", ans);
//	return 0;
//}