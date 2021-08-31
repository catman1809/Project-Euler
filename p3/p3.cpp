#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

/* The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ? */

int main()
{
    long long int no , n;
    long long int max=0;
    //cout << "enter number: ";
    //cin >> no;
    no=600851475143;
    n=no;
    
    //evens
    max = n/2==0?max+2:max;
    while (n%2==0)
    {   
        n/=2;
        //cout << n << endl;
    }

    //diving odd by primes
    for (long long int i=3; i<=sqrt(n); i=i+2)
    {   
        while (n%i==0)
        {
            //cout << i << endl;
            n/=i;
            //cout << n << endl;
        }

        max = max<i?i:max;
    }

    //for leftover prime factors > sqrt(n)
    if (n>2)
    {
        n = n;
        //cout << n << endl;
        max = n;
    }
    
    //for prime numbers
    if (n==no)
    {
        max = no;
        //cout << n << endl;
    }

    cout << max << endl;
    getch();
    return 0;
}