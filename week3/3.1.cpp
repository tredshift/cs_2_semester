#include <iostream>

int fibonacchi(int n)
{
    return (n > 2) ? fibonacchi(n-1) + fibonacchi(n-2): 1;
}
int main()
{
    int n;

    std::cout << "number of the desired element?";
    std::cin >> n;

    std::cout << fibonacchi(n);

    return 0;
}
