//#include<iostream>
//#include<cstdio>
//#include<string>
//
//#define n 100000
//#define m 10
//using namespace std;
//char H[n + 1], N[m + 1];
//int main()
//{
//	int ans = 0;
//	cin >> H;
//	cin >> N;
//	int len_H = strlen(H), len_N = strlen(N);
//	for (int i = 0; i < len_H - len_N + 1; i++)
//	{
//		bool flag = 0;
//		for (int j = 0; j < len_N; j++)
//		{
//			if (H[i + j] != N[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}