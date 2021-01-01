//#include<iostream>
//#include<cstdio>
//#define N 200000
//using namespace std;
//long long a[N + 1][2];
//int cnt[101][101];
//
//int main()
//{
//	int n, t, index = 1;
//	long long sum = 0;
//	cin >> n >> t;
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		cnt[t1][t2]++;
//	}
//	
//	for (int j = 100; j >= 1; j--)
//		for (int i =100; i >= 1; i--)
//			while (cnt[i][j] != 0)
//			{
//				a[index][0] = i, a[index++][1] = j;
//				cnt[i][j]--;
//			}
//	
//	int T = t - 1;
//	for (int i = 1; i < index; i++)
//	{
//		sum += T * a[i][1] + a[i][0];
//		T--;
//	}
//	printf("%lld", sum);
//	return 0;
//}
