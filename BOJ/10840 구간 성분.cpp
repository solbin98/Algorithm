//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string.h>
//
//#define N 1500
//#define M 32
//using namespace std;
//int prime[1000001];
//char a[N + 1], b[N + 1];
//bool is_prime[4000001];
//vector <int> keys[4000001];
//
//int min(int a, int b)
//{
//    if (a < b) return a;
//    else return b;
//}
//
//int main()
//{
//    int idx = 0;
//    for (int i = 2; i <= 4000000; i++) is_prime[i] = 1;
//    for (int i = 2; i * i <= 4000000; i++)
//    {
//        if (is_prime[i] == 1)
//            for (int j = i; j <= 4000000; j += i) is_prime[j] = 0;
//    }
//
//    for (int i = 2; i <= 4000000; i++)
//        if (is_prime[i]) prime[++idx] = i;
//
//    cin >> a;
//    cin >> b;
//
//    int len_a = strlen(a), len_b = strlen(b);
//    int min_len = min(len_a, len_b);
//
//    for (int len = 1; len <= min_len; len++)
//    {
//        int sum1 = 0, sum2 = 0;
//        for (int j = 0; j < len; j++)
//        {
//            sum1 = (sum1 + a[j] * (prime[a[j] - 'a' + 1])) % prime[idx];
//            sum2 = (sum2 + a[j] * (prime[a[j] - 'a' + M])) % prime[idx];
//        }
//
//        keys[sum1].push_back(sum2);
//
//        for (int j = len; j < len_a; j++)
//        {
//            sum1 = sum1 - (a[j-len]*prime[a[j - len] - 'a' + 1]) + (a[j]*prime[a[j] - 'a' + 1]) + prime[idx];
//            sum1 %= prime[idx];
//
//            sum2 = sum2 - (a[j-len]*prime[a[j - len] - 'a' + M]) + (a[j]*prime[a[j] - 'a' + M]) + prime[idx];
//            sum2 %= prime[idx];
//
//            keys[sum1].push_back(sum2);
//        }
//    }
//
//    int ans = 0;
//    for (int len = min_len; len >= 1; len--)
//    {
//        int sum1 = 0, sum2 = 0;
//        for (int j = 0; j < len; j++)
//        {
//            sum1 = (sum1 + (b[j] * (prime[b[j] - 'a' + 1]))) % prime[idx];
//            sum2 = (sum2 + (b[j] * (prime[b[j] - 'a' + M]))) % prime[idx];
//        }
//
//        int flag = 0;
//
//        for (int i = 0; i < keys[sum1].size(); i++)
//        {
//            if (keys[sum1][i] == sum2)
//            {
//                flag = 1;
//                break;
//            }
//        }
//
//        for (int j = len; j < len_b; j++)
//        {
//            if (flag == 1) break;
//            sum1 = sum1 - (b[j-len] * prime[b[j - len] - 'a' + 1]) + (b[j] * prime[b[j] - 'a' + 1]) + prime[idx];
//            sum1 %= prime[idx];
//
//            sum2 = sum2 - (b[j-len] * prime[b[j - len] - 'a' + M]) + (b[j] * prime[b[j] - 'a' + M]) + prime[idx];
//            sum2 %= prime[idx];
//
//            for (int i = 0; i < keys[sum1].size(); i++)
//            {
//                  if (keys[sum1][i] == sum2)
//                  {
//                      flag = 1;
//                      break;
//                  }
//            }
//        }
//        if (flag == 1)
//        {
//            ans = len;
//            break;
//        }
//    }
//    printf("%d", ans);
//
//    return 0;
//}