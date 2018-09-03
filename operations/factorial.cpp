/*
 * This program should be able to find the "Factorial" of any number if it's positive.
 * Input: The number that we will find the factorial.
 * Output: The factorial of that number.
 * Process: n! = 1*2*3*4*5 ... n-1 * n
 * We need a counter to generate the integer numbers between 1 and "n" and then 
 * an acumulator to keep the product, obtaining the multiply the acumulator by the counter. 
 * Should always start in 1.
 * */

#include<iostream>
#include<cstdlib>
class Factorial{};
    int main()
    {
        int n, fact = 1, i = 2;
	std::cout<<"\n\n\t ENTER THE NUMBER, IN ORDER TO CALCULATE THE FACTORIAL: ";
	std::cin>>n;
	while( i <= n)
	{
	    fact *= i;
	    i++;
	}
	system("cls || clear");
	std::cout<<"\n\tTHE FACTORIAL OF: "<<n<<" IS: "<<fact<<std::endl;
	std::cin.ignore().get();
    }
