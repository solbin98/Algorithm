//#include<iostream>
//#include<cstdio>
//#define N 4000
//using namespace std;
//double score[N + 1][21];
//int main()
//{
//	double w, l, d;
//	cin >> w >> l >> d;
//	score[1950][1] = l, score[2050][1] = w, score[2000][1] = d;
//	for (int j = 2; j <= 20; j++)
//	{
//		for (int i = 0; i <= N; i++)
//		{
//			score[i][j] += score[i][j-1] * d;
//			if (i - 50 >= 0) score[i][j] += score[i - 50][j - 1] * w;
//			if (i + 50 <= N) score[i][j] += score[i + 50][j - 1] * l;
//		}
//	}
//	
//	double bronze = 0, silver = 0, gold = 0, pletinum = 0, dia = 0;
//	for (int i = 1000; i <= 1499; i++) bronze += score[i][20];
//	for (int i = 1500; i <= 1999; i++) silver += score[i][20];
//	for (int i = 2000; i <= 2499; i++) gold += score[i][20];
//	for (int i = 2500; i <= 2999; i++) pletinum += score[i][20];
//	for (int i = 3000; i <= 3499; i++) dia += score[i][20];
//	printf("%.8lf\n", bronze);
//	printf("%.8lf\n", silver);
//	printf("%.8lf\n", gold);
//	printf("%.8lf\n", pletinum);
//	printf("%.8lf\n", dia);
//	return 0;
//}