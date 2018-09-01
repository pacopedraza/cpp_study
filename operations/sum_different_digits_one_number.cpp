/*
 * This program should be able to perform an addition of the three digits of entered number
 * also will print the elements from left to right and right to left. Will make use of class
 *
 * Analisis:
 * Input: a number of 3 digits
 * Output:
 * 1. The addition of the 3 digits
 * 2. The printed digits from left to right
 * 3. The printed digits from right to left
 *
 * Process:
 * We make use of the modulus operator  to find the digits. 
 * The expression "number % 10" gives us the latest right digit.
 * Then we find the integer division between number / 10 and to that value we apply
 * modulus again and so on.
 * */

#include <iostream>
#include <cstdlib>
using namespace std;

class AddDigits{};
 int main() 
{
    int number, n, d1, d2, d3, addition;
    cout<<"\n\tENTER ONE NUMBER OF THREE DIGITS:";
    cin>>number;

    n = number;
    d3 = n % 10;
    n = n / 10;
    d2 = n % 10;
    n = n / 10;
    d1 = n % 10;
    addition = d1 + d2 + d3;
    system("cls || clear");
    std::cout<<"THE ADDITION OF THE DIGITS: "<<d1<<'+'<<d2<<'+'<<d3<<
	    " IS: "<<addition<<endl;
    cout<<"\n\tTHE DIGITS FROM LEFT TO RIGHT ARE: "<<d1<<d2<<d3;
    cout<<"\n\tTHE DIGITS FROM RIGHT TO LEFT ARE: "<<d3<<d2<<d1;
    cout<<"\n\t";
    cin.ignore().get();
    return 0;
}

