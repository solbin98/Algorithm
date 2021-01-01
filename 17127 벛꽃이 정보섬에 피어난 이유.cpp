//#include<iostream>
//#include<cstdio>
//#define N 10
//using namespace std;
//int a[N + 1], path[N + 1];
//int n, max = 0;
//
//void calc(int idx, int cnt)
//{
//	if (cnt == 4)
//	{
//		int ans = 0;
//		for (int i = 1; i <= 4; i++)
//		{
//			int sum = 1;
//			for (int j = path[i - 1] + 1; j <= path[i]; j++) sum *= a[j];
//			ans += sum;
//		}
//		if (ans > max) max = ans;
//		return;
//	}
//
//	for (int i = idx + 1; i <= n; i++) path[cnt+1] = i, calc(i, cnt + 1);
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	calc(0, 0);
//	printf("%d", max);
//	return 0;
//}