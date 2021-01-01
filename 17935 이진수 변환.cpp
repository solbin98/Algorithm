//#include<iostream>
//#include<cstdio>
//using namespace std;
//bool bits[60];
//
//long long pows(int n)
//{
//	long long r = 1;
//	for (int i = 1; i <= n; i++) r *= 2;
//	return r;
//}
//int main()
//{
//	long long x, n;
//	long long first;
//	cin >> x >> n;
//	first = x;
//	int index = 0, cnt = 0;
//	while (x != 0)
//	{
//		bits[++index] = x % 2;
//		x /= 2;
//		if (bits[index] == 1) cnt++;
//	}
//
//	if (n > cnt) printf("-1");
//	else
//	{
//		long long tmps[70] = { 0 };
//		int tmp = 0, ind = index;
//		
//		while (n > 1)
//		{
//			if (bits[ind] == 1)
//			{
//				tmps[++tmp] = pows(ind-1);
//				n--;
//			}
//			ind--;
//		}
//		
//		for (int i = ind; i >= 1; i--)
//			if (bits[i] == 1)
//				tmps[tmp+1] += pows(i-1);
//			
//		for (int i = 1; i <= tmp + 1; i++)
//			first = first - tmps[i], printf("%lld ", first);
//	}
//	
//	return 0;
//}