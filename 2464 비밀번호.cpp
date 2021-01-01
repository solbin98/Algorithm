//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int obit[N + 1], tbit[N + 1] = { 0 };
//int main()
//{
//    long long n, idx1 = 0, num = 0, num_one = 0;
//    long long ans1 = 0, ans2 = 0;
//
//    cin >> n;
//    while (n != 0)
//    {
//        obit[++idx1] = n % 2, n /= 2;
//        if (obit[idx1] == 1) num_one++;
//    }
//
//    for (int i = 1; i <= idx1; i++)
//    {
//        if (obit[i] == 1) num++;
//        else break;
//    }
//
//    for (int i = idx1; i >= 1; i--)
//    {
//        if (num_one == num) break;
//        
//        if (obit[i] == 1)
//        {
//            if (num_one == num + 1)
//            {
//                for (int j = i - 1; num_one > 0; j--)
//                {
//                    num_one--;
//                    tbit[j] = 1;
//                }
//                break;
//            }
//            else
//            {
//                tbit[i] = 1;
//                num_one--;
//            }
//        }
//    }
//
//    long long r = 1, tt = 0;
//    for (int i = 1; i <= idx1; i++) ans1 += tbit[i] * r, r *= 2;
//
//    for (int i = 1; i <= idx1; i++)
//    {
//        if (obit[i] == 1)
//        {
//            if (obit[i + 1] == 0)
//            {
//                obit[i + 1] = 1;
//                for (int j = 1; j <= i; j++) obit[j] = 0;
//                for (int j = 1; j <= tt; j++) obit[j] = 1;
//                break;
//            }
//            tt++;
//        }
//    }
//
//    r = 1;
//    for (int i = 1; i <= idx1 + 1; i++) ans2 += obit[i] * r, r *= 2;
//    printf("%lld %lld", ans1, ans2);
//    return 0;
//}