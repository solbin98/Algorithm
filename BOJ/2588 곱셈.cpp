//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, tmp, sum = 0;
//	cin >> a;
//	cin >> b;
//	tmp = b;
//	int ary[3] = { 0 };
//	int idx = 0;
//	while (tmp != 0)
//	{
//		ary[idx++] = tmp % 10;
//		tmp /= 10;
//	}
//	int r = 1;
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%d\n", a * ary[i]);
//		sum += a * ary[i] * r;
//		r *= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}