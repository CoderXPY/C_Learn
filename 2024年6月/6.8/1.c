#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int fib(int n)
{
    return n <= 2 ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int fib(int i);
    printf("%d", fib(n));
    return 0;
}


//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main()
//{
//
//    int n;
//    cin >> n;
//
//    cout << factorial(n) << endl;
//
//    return 0;
//}
//
//long long factorial(int n)
//{
//    if (n > 1)
//    {
//        return factorial(n - 1) * n;
//    }
//    return n;
//}



int sum(int n)
{
    if (n > 1)
    {
        return sum(n - 1) + n;
    }
    return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
    return 0;
}