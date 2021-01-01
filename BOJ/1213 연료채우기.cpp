//#include<iostream>
//#define N 50
//
//using namespace std;
//
//char str[N + 1], news[N + 1];
//int alpha[27];
//
//int main()
//{
//	int count = 0, index = 0, mid = 0;
//	cin >> str;
//	for (int i = 0; str[i] != '\0'; i++) alpha[str[i] - 'A']++;
//	for (int i = 0; i < 26; i++)
//		if (alpha[i] % 2 == 1) count++;
//
//	if (count > 1)
//	{
//		printf("I'm Sorry Hansoo\n"); 
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < 26; i++)
//		{
//			while (alpha[i] - 2 >= 0) news[index++] = 'A' + i, alpha[i] -= 2;
//			if (alpha[i] == 1) mid = i;
//		}	
//		news[index] = 'A' + mid;
//	}
//	
//	if (count == 1)
//	{
//		for (int i = 0; i <= index; i++) printf("%c", news[i]);
//		for (int i = index - 1; i >= 0; i--) printf("%c", news[i]);
//	}
//	else
//	{
//		for (int i = 0; i < index; i++) printf("%c", news[i]);
//		for (int i = index - 1; i >= 0; i--) printf("%c", news[i]);
//	}
//	return 0;
//}