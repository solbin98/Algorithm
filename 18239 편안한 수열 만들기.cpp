//#include<iostream>
//#include<cstdio>
//#define N 10000000
//using namespace std;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	if (n == 2 && k == 1)
//	{
//		printf("YES\n");
//		for (int i = 1; i <= 5; i++) printf("swap 1 2\n");
//	}
//	else if (k >= 2 && n - k >= 2)
//	{
//		printf("YES\n");
//		printf("swap 1 2\nswap 1 2\n");
//		printf("reverse %d %d\n", 1, k);
//		printf("reverse %d %d\n", k + 1, n);
//		printf("reverse %d %d", 1, n);
//	}
//	else if (n == 3) printf("NO");
//	else
//	{
//		printf("YES\n");
//		printf("swap 1 2\nswap 1 2\n");			
//		printf("swap 1 %d\n", n);
//		printf("reverse 2 %d\n", n - 1);
//		if (k == 1) printf("reverse 1 %d", n - 1);
//		else printf("reverse 2 %d", n);
//	}
//	return 0;
//}