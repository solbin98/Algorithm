//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 40
//using namespace std;
//char str[N + 1];
//int len, cnt = 0;
//
//void dfs(int index)
//{
//	if (index == len)
//	{
//		cnt++;
//		return;
//	}
//	if (str[index] - '0' == 0) return;
//	dfs(index + 1);
//	if (index + 1 == len) return;
//	if ((str[index] - '0') * 10 + (str[index+1] - '0') <= 34 && (str[index]-'0')*10 + (str[index+1]-'0')>= 1) dfs(index + 2);
//}
//
//int main()
//{
//	cin >> str;
//	len = strlen(str);
//	dfs(0);
//	printf("%d", cnt);
//	return 0;
//}