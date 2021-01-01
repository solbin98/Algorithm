//#include<iostream>
//#include<cstdio>
//#define N 1024
//#define M 10
//using namespace std;
//double chk[N + 1][M+1][2];
//int main()
//{
//	double three = 3, two = 2;
//	for (int i = 1; i <= M; i++)
//	{
//		for (int j = 1; j <= two; j++)
//		{
//			int tmp = j - 1;
//			double sum = 0, r = 1;
//
//			while (tmp != 0)
//			{
//				if (tmp % 2 == 1) sum += r;
//				r *= 3, tmp /= 2;
//			}
//
//			chk[j][i][0] = (2 * sum) / three;
//			chk[j][i][1] = ((2 * sum) + 1) / three;			
//		}
//		two *= 2, three *= 3;
//	}
//
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int chks = -1, two = 2;
//		double a, b;
//		cin >> a >> b;
//		if (a / b > 1)
//		{
//			printf("0\n");
//			continue;
//		}
//		for (int i = 1; i <= M; i++)
//		{
//			int flag = 0;
//			for (int j = 1; j <= two; j++)
//			{
//				double s = chk[j][i][0], e = chk[j][i][1];
//				if (s <= (a / b) && (a / b) <= e)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				chks = i;
//				break;
//			}
//			two *= 2;
//		}		
//		printf("%d\n", chks);
//	}
//	return 0;
//}