//#include<iostream>
//#include<cstdio>
//#include<string.h>
//
//using namespace std;
//char str[1000];
//int main()
//{
//	int T;
//	unsigned long long bits=0;
//	cin >> T;
//	while (T--)
//	{
//		int chk, len;
//		cin >> chk;
//
//		if (chk == 1)
//		{
//			cin >> str;		
//			len = strlen(str);
//
//			unsigned long long r = 1, idx = 0, idx2 = 0;
//			unsigned long long tmp[9][9] = { 0 };
//			unsigned long long sum = 0;
//
//			for(int i = len-1 ; i >= 0 ; i--)
//			{
//				if (str[i] == '.' || i == 0)
//				{
//					if (i == 0) sum += (unsigned long long)((unsigned long long)str[i] - (unsigned long long)'0') * r;
//					r = 1;
//					idx2++;
//					while (sum != 0) tmp[idx2][++idx] = sum % 2, sum /= 2;
//					idx = 0;
//				}
//				else
//				{
//					sum += ((unsigned long long)((unsigned long long)str[i]) - (unsigned long long)'0') * r;
//					r *= 10;
//				}
//			}
//			
//			r = 1;
//			for (int i = 1; i <= 8; i++)
//				for (int j = 1; j <= 8; j++)
//				{
//					sum += tmp[i][j] * r;
//					r *= 2;
//				}
//		
//			printf("%llu", sum);
//		}
//		else
//		{
//			cin >> bits;
//			unsigned long long tmp[1000] = { 0 };
//			int idx = 0;
//			while (bits != 0) tmp[++idx] = bits % 256, bits /= 256;
//			for (int i = 8; i >= 1; i--)
//			{
//				printf("%llu", tmp[i]);
//				if (i != 1) printf(".");
//			}
//		}
//
//		if (T != 0) printf("\n");
//	}
//	return 0;
//}