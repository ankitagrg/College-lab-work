#include <iostream>
using namespace std;
int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}
int main()
{
    int n = 5;
    cout << "Number is: " << n;
    cout << "\nFibbonacci series upto number " << n << " are: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibbonacci(i) << " ";
    }
}