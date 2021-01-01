//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int a[N+1], b[N+1] = {0,1};
//int pa[7] = { 0,500,300,200,50,30,10 };
//int pb[6] = { 0,512,256,128,64,32 };
//
//int main()
//{
//	int ai = 1, bi = 1, bl = 1;
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			a[ai++] = i;
//	}
//
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= bl; j++) b[bi++] = i;
//		bl *= 2;
//	}
//
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int ta, tb;
//		cin >> ta >> tb;
//		printf("%d\n", (pa[a[ta]] * 10000) + (pb[b[tb]] * 10000));
//	}
//	return 0;
//}