//#include<iostream>
//#include<cstdio>
//#define N 10000
//#define INF 98765432100000000
//using namespace std;
//long long a[N + 1];
//int n;
//
//long long abss(long long a, long long b)
//{
//    long long tmp = a - b;
//    if (tmp < 0) tmp *= -1;
//    return tmp;
//}
//
//long long calc_sum1(long long key)
//{
//    long long sum = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        long long cnt = a[i];
//        sum += abss(i, key) * cnt;
//    }
//    return sum;
//}
//
//long long calc_sum2(long long key)
//{
//    long long sum = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        long long cnt = a[i];
//        sum += abss(i, key) * abss(i, key) * cnt;
//    }
//    return sum;
//}
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int tmp;
//        scanf("%d", &tmp);
//        a[tmp]++;
//    }
//
//    long long low = 1, high = 10000, mid;
//    long long min_sum1 = INF, min_sum2 = INF;
//    long long min1 = 0, min2 = 0;
//
//    while (low <= high)
//    {
//        mid = (low + high) / 2;
//        long long sum1 = calc_sum1(mid);
//        long long sum2 = calc_sum1(mid + 1);
//        if (sum1 <= min_sum1) min_sum1 = sum1, min1 = mid;
//        if (sum1 <= sum2) high = mid - 1;
//        else low = mid + 1;
//    }
//
//    low = 1, high = 10000;
//    while (low <= high)
//    {
//        mid = (low + high) / 2;
//        long long sum1 = calc_sum2(mid);
//        long long sum2 = calc_sum2(mid + 1);
//        if (sum1 <= min_sum2) min_sum2 = sum1, min2 = mid;
//        if (sum1 <= sum2) high = mid - 1;
//        else low = mid + 1;
//    }
//
//    printf("%lld %lld", min1, min2);
//    return 0;
//}