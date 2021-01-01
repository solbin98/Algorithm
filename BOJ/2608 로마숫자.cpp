//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#define N 100
//
//using namespace std;
//char a[N + 1], b[N + 1];
//char ans[N + 1];
//int ind = 0;
//enum {I = 1, V=5, X = 10, L =50, C = 100, D = 500, M = 1000, IV = 4, IX = 9, XL = 40, XC=90, CD = 400, CM = 900};
//int trans_to_arab(char *a)
//{
//	int sum = 0;
//	int len = strlen(a);
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == 'I')
//		{
//			if (a[i + 1] == 'V') sum += IV, i += 1;
//			else if (a[i + 1] == 'X') sum += IX, i += 1;
//			else sum += I;
//		}
//		else if (a[i] == 'X')
//		{
//			if (a[i + 1] == 'L') sum += XL, i += 1;
//			else if (a[i + 1] == 'C') sum += XC, i += 1;
//			else sum += X;
//		}
//		else if (a[i] == 'C')
//		{
//			if (a[i + 1] == 'D') sum += CD, i += 1;
//			else if (a[i + 1] == 'M') sum += CM, i += 1;
//			else sum += C;
//		}
//		else
//		{
//			if (a[i] == 'V') sum += V;
//			else if (a[i] == 'L') sum += L;
//			else if (a[i] == 'D') sum += D;
//			else sum += M;
//		}
//	}
//	return sum;
//}
//
//void trans_to_rome(int n)
//{
//	int r = 1000, num = n;
//	int val = 0;
//
//	while (r == 1000)
//	{
//		if (num == 0) break;
//		val = num / r;
//		if (val == 0)
//		{
//			r /= 10;
//			break;
//		}
//		else
//		{
//			num -= M;
//			ans[ind++] = 'M';
//		}
//	}
//
//	while (r == 100)
//	{
//		if (num == 0) break;
//		val = num / r;
//		if (val == 0)
//		{
//			r /= 10;
//			break;
//		}
//
//		if (val < 5)
//		{
//			if (val == 4) num -= CD, ans[ind] = 'C', ans[ind + 1] = 'D', ind++;
//			else
//			{
//				num -= C;
//				ans[ind] = 'C';
//			}
//			ind++;
//		}
//		else
//		{
//			if (val == 9) num -= CM, ans[ind] = 'C', ans[ind + 1] = 'M', ind++;
//			else if (val == 6) num -= C + D, ans[ind] = 'D', ans[ind + 1] = 'C', ind++;
//			else
//			{
//				num -= D;
//				ans[ind] = 'D';
//			}
//			ind++;
//		}
//	}
//
//	while (r == 10)
//	{
//		if (num == 0) break;
//		val = num / r;
//		if (val == 0)
//		{
//			r /= 10;
//			break;
//		}
//		if (val < 5)
//		{
//			if (val == 4) num -= XL, ans[ind] = 'X', ans[ind + 1] = 'L', ind++;
//			else
//			{
//				num -= X;
//				ans[ind] = 'X';
//			}
//			ind++;
//		}
//		else
//		{
//			if (val == 9) num -= XC, ans[ind] = 'X', ans[ind + 1] = 'C', ind++;
//			else if (val == 6) num -= L + X, ans[ind] = 'L', ans[ind + 1] = 'X', ind++;
//			else
//			{
//				num -= L;
//				ans[ind] = 'L';
//			}
//			ind++;
//		}
//	}
//
//	while (r == 1)
//	{
//		if (num == 0) break;
//		val = num / r;
//		if (val == 0)
//		{
//			break;
//		}
//		if (val < 5)
//		{
//			if (val == 4) num -= IV, ans[ind] = 'I', ans[ind + 1] = 'V', ind++;
//			else
//			{
//				num -= I;
//				ans[ind] = 'I';
//			}
//			ind++;
//		}
//		else
//		{
//			if (val == 9) num -= IX, ans[ind] = 'I', ans[ind + 1] = 'X', ind++;
//			else if (val == 6) num -= V + I, ans[ind] = 'V', ans[ind + 1] = 'I', ind++;
//			else
//			{
//				num -= V;
//				ans[ind] = 'V';
//			}
//			ind++;
//		}
//	}
//}
//
//int main()
//{
//	cin >> a;
//	cin >> b;
//	int s = trans_to_arab(a) + trans_to_arab(b);
//	printf("%d\n", s);
//	trans_to_rome(s);
//	for (int i = 0; i < ind; i++) printf("%c", ans[i]);
//	return 0;
//}