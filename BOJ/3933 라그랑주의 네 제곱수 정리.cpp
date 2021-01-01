//#include<iostream>
//#include<cstdio>
//#define N 200
//#define M 40000
//using namespace std;
//int num[N + 1], num_idx[M + 1];
//int a[M + 1];
//int main()
//{
//	for (int i = 1; i * i <= M; i++) num[i] = i * i, num_idx[i*i] = i;
//	while (1)
//	{
//		unsigned long long number, cnt = 0;
//		
//		cin >> number;
//		if (number == 0) break;
//
//		for (long long i = 0; i <= 200; i++)
//			for (long long j = i; j <= 200; j++)
//				for (long long k = j; k <= 200; k++)
//				{
//					unsigned long long val = (i * i) + (j * j) + (k * k);					
//					if (val == number) cnt++;
//					//else if (val < number && i > 0 && j > 0 && k > 0)
//					{
//						if (num_idx[number - val] >= k)
//						{
//							cnt++;
//						}
//					}
//				}
//		printf("%d\n", cnt);
//	}
//}