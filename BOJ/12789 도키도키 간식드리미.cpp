//#include<iostream>
//#include<cstdio>
//#define N 1000
//
//using namespace std;
//int stack[N + 1] = { 0 }, top = 0;
//int a[N+1];
//int main()
//{
//	int n, order = 1;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] == order) order++;
//		else if (stack[top] == order) top--, i--, order++;
//		else stack[++top] = a[i];
//	}
//
//	if (top != 0) printf("Sad");
//	else printf("Nice");
//	return 0;
//}