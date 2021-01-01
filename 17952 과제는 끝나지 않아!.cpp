//#include<iostream>
//#include<cstdio>
//#define N 1000005
//using namespace std;
//
//long long stack[N + 1][2], arr[N + 1][2];
//int top = 0;
//int main()
//{
//	long long n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		long long a, b, c;
//		scanf("%lld", &a);
//		if (a == 1) scanf("%lld %lld",&b,&c), arr[i][0] = b, arr[i][1] = c;
//	}
//
//	for (int i = 1; i <= n+1; i++)
//	{
//		if (top != 0 && stack[top][1] == 0) ans += stack[top][0], top--;
//		else if (top != 0) stack[top][1]--;
//		
//		if (arr[i][1] != 0)	
//			stack[++top][0] = arr[i][0], stack[top][1] = arr[i][1]-1;
//	}
//	printf("%lld", ans);
//	return 0;
//}