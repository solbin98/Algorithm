//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//
//char str[N + 1];
//
//int main()
//{
//	int a = 0, b = 0;
//	cin >> str;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == 'a') a++;
//		else b++;
//	}
//
//	int ans = INF, count = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		count = 0;
//		for (int j = i; j < i+a; j++)
//		{
//			if (str[j] != 'a') count++;
//		}
//		if (count < ans) ans = count;
//		count = 0;
//		for (int j = i; j < i + b; j++)
//		{
//			if (str[j] != 'b') count++;
//		}
//		if (count < ans) ans = count;
//	}
//
//	printf("%d",ans);
//	return 0;
//}