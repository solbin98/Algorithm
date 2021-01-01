//#include<iostream>
//#include<cstdio>
//using namespace std;
//int arr[7] = { 0 };
//int ans = 0;
//
//int main()
//{
//	for (int i = 1; i <= 6; i++) cin >> arr[i];
//	for (int i = 6; i >= 1; i--)
//	{
//		while (arr[i] > 0)
//		{
//			arr[i]--, ans++;
//			if (i == 6) continue;
//			if (i == 5)
//			{
//				if (arr[1] >= 11) arr[1] -= 11;
//				else arr[1] = 0;
//			}
//			if (i == 4)
//			{
//				if (arr[2] >= 5) arr[2] -= 5;
//				else
//				{
//					if (arr[1] >= (5 - arr[2]) * 4) arr[1] -= (5 - arr[2]) * 4;
//					else arr[1] = 0;
//					arr[2] = 0;
//				}
//			}
//			if (i == 3)
//			{
//				if (arr[3] >= 3) arr[3] -= 3;
//				else
//				{
//					if (arr[3] == 2)
//					{
//						if (arr[2] >= 1)
//						{
//							arr[2]--;
//							if (arr[1] >= 5) arr[1] -= 5;
//							else arr[1] = 0;
//						}
//						else
//						{
//							if (arr[1] >= 9) arr[1] -= 9;
//							else arr[1] = 0;
//						}
//					}
//
//					if (arr[3] == 1)
//					{
//						if (arr[2] >= 3)
//						{
//							arr[2] -= 3;
//							if (arr[1] >= 6) arr[1] -= 6;
//							else arr[1] = 0;
//						}
//						else
//						{
//							if ((3 - arr[2]) * 4 + 6 <= arr[1]) arr[1] -= (3 - arr[2]) * 4 + 6;
//							else arr[1] = 0;
//							arr[2] = 0;
//						}
//					}
//
//					if (arr[3] == 0)
//					{
//						if (arr[2] >= 5)
//						{
//							arr[2] -= 5;
//							if (arr[1] >= 7) arr[1] -= 7;
//							else arr[1] = 0;
//						}
//						else
//						{
//							if (arr[1] >= (5 - arr[2]) * 4 + 7) arr[1] -= (5 - arr[2]) * 4 + 7;
//							else arr[1] = 0;
//							arr[2] = 0;
//						}
//					}
//					arr[3] = 0;
//				}
//			}
//
//			if (i == 2)
//			{
//				if (arr[2] >= 8) arr[2] -= 8;
//				else
//				{
//					if (arr[1] >= 32 - (4*arr[2])) arr[1] -= 32 - (4*arr[2]);
//					else arr[1] = 0;
//					arr[2] = 0;
//				}
//			}
//
//			if (i == 1)
//			{ 
//				if (arr[1] >= 35) arr[1] -= 35;
//				else arr[1] = 0;
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}