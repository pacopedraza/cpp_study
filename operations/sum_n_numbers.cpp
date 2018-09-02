/*
 * This program should be able to perform the addition between "n" numbers
 * Input: The quantity of numbers that the operation will perform.
 * Output: The addition of the first "n" numbers
 * Process: First we should know the quantity of the numbers to make addition, then
 * we read inside the cycle each number and perform the addition
 * */

#include<iostream>
#include<cstdlib>

int main()
{
    short cont = 1, n;
    float num, addition = 0; // the numbers can have point or not.
    std::cout<<"\n\tENTER THE QUANTITY OF THE NUMBERS TO MAKE ADDITION: ";
    std::cin>>n;
    while( cont <= n )
    {
        system("cls || clear");
	std::cout<<"\n\tENTER THE NUMBER: "<<cont<<':';
	std::cin>>num;
	addition += num;
	cont++;
    }
    system("cls || clear");
    std::cout<<"THE ADDITION OF: "<<n<<" NUMBERS IS: "<<addition<<"\n";
    std::cout<<"\n\t";
    std::cin.ignore().get();
}

