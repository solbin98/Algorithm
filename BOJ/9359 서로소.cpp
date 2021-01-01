//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long number[1000] = { 0 }, tmp_ary[1000] = { 0 };
//long long a, b, n, t, ans = 0;
//long long tmp, r , idx = 0;
//
//long long calc(int index1, int index2, int cnt, int max)
//{
//	if (cnt == max)
//	{
//		long long calc = 0, tr = 1;
//		for (int i = 1; i <= cnt; i++) tr *= tmp_ary[i];		
//	
//		calc = (b / tr) - ((a - 1) / tr);
//		if (max % 2 == 0) calc *= -1;
//		ans += calc;
//		return 0;
//	}
//	for (int i = index2; i <= idx; i++)
//	{
//		tmp_ary[index1] = number[i];
//		calc(index1 + 1, i+1, cnt + 1, max);
//	}
//	return 0;
//}
//
//int main()
//{
//	int tcase = 1;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b >> n;
//		r = 2, tmp = n, idx = 0, ans = 0;
//		while (r <= tmp && r * r <= n)
//		{
//			bool flag = 0;
//			while (tmp % r == 0)
//			{
//				if (flag == 0) number[++idx] = r, flag = 1;
//				tmp /= r;
//			}
//			r++;
//		}
//		if (tmp != 1) number[++idx] = tmp;
//		for (int i = 1; i <= idx; i++) calc(1, 1, 0, i);
//		printf("Case #%d: %lld\n",tcase++, (b-a+1)-ans);
//	}
//
//	return 0;
//}