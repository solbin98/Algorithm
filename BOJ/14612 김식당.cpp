//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 150
//using namespace std;
//int tables[N + 1][2];
//
//void swap(int i, int j)
//{
//	int tmp1 = tables[i][0], tmp2 = tables[i][1];
//	tables[i][0] = tables[j][0], tables[i][1] = tables[j][1];
//	tables[j][0] = tmp1, tables[j][1] = tmp2;
//}
//
//int main()
//{
//	int n, m, idx = 0;
//	cin >> n >> m;
//	getchar();
//	for (int i = 1; i <= n; i++)
//	{
//		char tmp[30];
//		int len;
//		fgets(tmp,sizeof(tmp),stdin);
//		len = strlen(tmp);
//
//		if (tmp[0] == 'o')
//		{
//			int a=0, b=0;
//			int i, r = 1;
//			for (i = len-2; tmp[i] != ' '; i--)
//			{
//				b += r * (tmp[i] - '0');
//				r *= 10;
//			}
//			r = 1;
//			for (int j = i - 1; tmp[j] != ' '; j--)
//			{
//				a += r * (tmp[j] - '0');
//				r *= 10;
//			}
//			tables[++idx][0] = a, tables[idx][1] = b;
//		}
//		else if(tmp[0] == 's')
//		{
//			for (int i = idx - 1; i >= 1; i--)
//				for (int j = 1; j <= i; j++)
//					if (tables[j][1] >= tables[j + 1][1])
//					{
//						if (tables[j][1] == tables[j + 1][1])
//						{
//							if (tables[j][0] > tables[j + 1][0]) swap(j, j + 1);
//						}
//						else swap(j, j + 1);
//					}
//		}
//		else
//		{
//			int find = 0, r = 1;
//			for (int i = len - 2; tmp[i] != ' '; i--)
//			{
//				find += (tmp[i]-'0') * r;	
//				r *= 10;
//			}
//
//			for (int i = 1; i <= idx; i++)
//			{
//				if (tables[i][0] == find)
//				{
//					for (int j = i + 1; j <= idx; j++)
//						tables[j - 1][0] = tables[j][0], tables[j - 1][1] = tables[j][1];
//					idx--;
//					break;
//				}
//			}
//		}
//
//		for (int i = 1; i <= idx; i++) printf("%d ", tables[i][0]);
//		if (idx == 0) printf("sleep");
//		printf("\n");
//	}
//	return 0;
//}