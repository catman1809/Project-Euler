#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

/* The sum of the squares of the first ten natural numbers is,
The square of the sum of the first ten natural numbers is,
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int main()
{
    long long int sumOfSquares =0, squareOfSum=0;
    long long int sum = 0;
    long long int diff;
    for (long long int i=1; i<=100; i++)
    {
        sumOfSquares += pow(i,2);
        sum = sum + i;
    }
    squareOfSum = sum*sum;


    diff = squareOfSum - sumOfSquares;

    cout << diff << endl;
    //cout << sum << endl;
    //cout << sumOfSquares << endl;
    //cout << squareOfSum << endl;

    getch();
    return 0;
}