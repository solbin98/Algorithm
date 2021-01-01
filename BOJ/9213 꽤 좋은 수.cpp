//#include<iostream>
//#include<cstdio>
//#define N 1000000		
//using namespace std;
//int sum[N + 1] = { 0 };
//
//int abss(int a, int b) {
//	if (a - b < 0) return -(a - b);
//	else return a - b;
//}
//
//int main()
//{
//	int idx = 0;
//	while (1)
//	{	
//		idx++;
//		int s, e, b;		
//		cin >> s >> e >> b;
//		for (int i = 0; i <= e; i++) sum[i] = 0;
//		if (s == 0 && e == 0 && b == 0) break;
//
//		for (int i = 1; i <= e; i++) {
//			for (int j = i+i; j <= e; j += i) {
//				sum[j] += i;
//			}
//		}
//
//		int ans = 0;
//		for (int i = s; i <= e; i++)
//		{
//			if (abss(i, sum[i]) <= b) ans++;
//		}
//		printf("Test %d: %d\n",idx, ans);
//	}
//	return 0;
//}