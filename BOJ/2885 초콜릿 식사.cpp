//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int pows(int num)
//{
//	if (num == 1) return 1;
//	int n = 1;
//	for (int i = 1;; i++)
//	{
//		if (n * 2 >= num)
//		{
//			n *= 2;
//			break;
//		}
//		else n *= 2;
//	}
//	return n;
//}
//
//int main()
//{
//	int n, count = 0;
//	int tn;
//	cin >> n;
//	tn = n;
//
//	if (n == pows(n))
//	{
//		printf("%d 0",n);
//		return 0;
//	}
//
//	int tmp = pows(n);
//	if (tmp > n) tmp /= 2;
//
//	for (int i = 1;; i++)
//	{ 
//		count++;
//		if (n - tmp > 0) n -= tmp;
//		else if (n - tmp == 0) break;
//		tmp /= 2;
//	}
//	cout << pows(tn) << " " << count;
//	return 0;
//}