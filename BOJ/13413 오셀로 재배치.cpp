//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		char O[N + 1], P[N + 1];
//		int Count_W = 0, Count_B = 0, len;
//		cin >> len;
//		cin >> P >> O;
//		for (int i = 0; i < len; i++)
//			if (O[i] != P[i])
//			{
//				if (P[i] == 'W') Count_W++;
//				else Count_B++;
//			}
//		printf("%d\n", max(Count_W, Count_B));
//	}
//	return 0;
//}