#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

int main()
{
    long int product;
    long int max=0;
    long int rev=0, rem;
    for (long int i=100; i<=999; i++)
    {
        for (long int j=i; j<=999; j++)
        {
            product = i*j;
            long int n;
            n=product;
            rev = 0;
            do 
            {
                rem = n%10;
                rev = (rev*10) + rem;
                n=n/10;
            }
            while (n!=0);
            //cout << rev << endl; 
            if (rev==product && product>max)
            {
                //cout << product << endl;
                max = product;
            }
        }
    }

    cout << max << endl;
    getch();
    return 0;
}