//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define N 1000005
//using namespace std;
//int fail[N + 1] = { 0 };		
//char str[N + 1];
//int main()
//{
//	while (1)
//	{
//		memset(fail, 0, sizeof(fail));
//		cin >> str;
//		if (str[0] == '.' && strlen(str) == 1) break;
//		int len = strlen(str);
//		for (int i = 1, j = 0;  str[i] != '\0'; i++)
//		{
//			while (j > 0 && str[i] != str[j]) j = fail[j - 1];
//			if (str[i] == str[j]) fail[i] = ++j;
//		}
//
//		int r = fail[len - 1];
//		if (r == 0) printf("1\n");
//		else if ((len % (len - r) != 0)) printf("1\n");
//		else printf("%d\n", len / (len - r));
//	}
//	return 0;
//}