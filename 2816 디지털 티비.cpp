//#include<iostream>
//#include<cstdio>
//#define N 100
//
//using namespace std;
//
//char str[N + 1][N + 1];
//char is_kbs1[5] = "KBS1", is_kbs2[5] = "KBS2";
//int outputs[N * 5 + 1];
//
//int strlen(char* str1)
//{
//	int count = 0;
//	for (int i = 0; str1[i] != '\0'; i++) count++;
//	return count;
//}
//
//int chk(char* s1, char* s2)
//{
//	int l1 = strlen(s1), l2 = strlen(s2);
//	if (l1 != l2) return 0;
//	for (int i = 0; i < l1; i++)
//	{
//		if (s1[i] != s2[i]) return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n, k1_index, k2_index;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> str[i];
//		if (chk(is_kbs1, str[i]) == 1) k1_index = i;
//		if (chk(is_kbs2, str[i]) == 1) k2_index = i;
//	}
//	int now = 1;
//	while (k1_index != 1 || k2_index != 2)
//	{
//		if (k1_index != 1)
//		{
//			if (k1_index > now)
//			{
//				if (now + 1 == k1_index) k1_index--;
//				if (now + 1 == k2_index) k2_index--;
//				now++;
//				printf("3");
//			}
//			else if(k1_index < now)
//			{
//				now--;
//				printf("2");
//			}
//
//			else
//			{
//				if (now - 1 == k2_index) k2_index++;
//				now--;
//				k1_index--;
//				printf("4");
//			}
//		}
//
//		else if (k2_index != 2)
//		{
//			if (k2_index > now && now != 1)
//			{
//				if (now + 1 == k2_index) k2_index--;
//				now++;
//				printf("3");
//			}
//
//			else if (k2_index > now)
//			{
//				printf("1");
//				now++;
//			}
//
//			else if (k2_index < now)
//			{
//				now--;
//				printf("2");
//			}
//			else
//			{
//				now--;
//				k2_index--;
//				printf("4");
//			}
//		}
//	}
//	return 0;
//}