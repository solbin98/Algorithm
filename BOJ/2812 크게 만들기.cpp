//#include<iostream>
//#include<cstdio>
//
//#define N 500000
//#define INF 987654321
//
//using namespace std;
//
//char str[N + 1];
//int a[N + 1] = { INF }, b[N + 1];
//int stack[N + 1] = {0};
//
//int main()
//{
//	int top = 1;
//	int n, k;
//
//	cin >> n >> k;
//	cin >> str;
//	for (int i = 0; str[i] != '\0'; i++) a[i + 1] = str[i] - '0';
//	for (int i = 1; i <= n; i++)
//	{
//		while (a[stack[top - 1]] < a[i] && k > 0) b[stack[top - 1]]=-1, top--, k--;
//		if (k == 0) break;
//		stack[top++] = i;
//	}
//	if (k != 0)
//	{
//		for (int i = n; i >= 1 && k > 0; i--)
//		{
//			if (b[i] != -1) b[i] = -1, k--;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//		if (b[i] == 0) printf("%d", a[i]);
//	return 0;
//}