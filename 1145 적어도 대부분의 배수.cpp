//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int main()
//{
//	int a[6];
//	for (int i = 1; i <= 5; i++) scanf("%d", &a[i]);
//	for (int i = 1; i <= 15000000; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j <= 5; j++)
//		{
//			if (i % a[j] == 0) cnt++;
//		}
//		if (cnt >= 3)
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//	return 0;
//}