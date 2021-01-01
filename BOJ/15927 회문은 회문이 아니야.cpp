//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 500000
//using namespace std;
//char str[N + 1];
//int main()
//{
//	bool chk = 0;
//	cin >> str;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		int left = i, right = len - i - 1;
//		if (left <= right)
//		{
//			if (str[left] != str[right])
//			{
//				chk = 1;
//				break;
//			}
//		}
//		else break;
//	}
//	if (chk == 1)
//	{
//		printf("%d", len);
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < len; i++)
//		{
//			int left = i, right = len - i - 2;
//			if (left <= right)
//			{
//				if (str[left] != str[right])
//				{
//					chk = 1;
//					break;
//				}
//			}
//			else break;
//		}
//
//		if (chk == 1)
//		{
//			printf("%d", len - 1);
//			return 0;
//		}
//
//		for (int i = 0; i < len; i++)
//		{
//			int left = i+1, right = len - i - 1;
//			if (left <= right)
//			{
//				if (str[left] != str[right])
//				{
//					chk = 1;
//					break;
//				}
//			}
//			else break;
//		}
//
//		if (chk == 1)
//		{
//			printf("%d", len - 1);
//			return 0;
//		}
//	}
//	printf("-1");
//	return 0;
//}