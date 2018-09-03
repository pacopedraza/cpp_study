#include<iostream>
#include<cstdlib>

class AdditionAverage
{
    public: static void sumPro(int n, float &addition, float &average)
    {
        int i;
	addition = 0;
	float num;
	for (i = 1; i <= n; i++)
	{
            system("cls||clear");
	    std::cout<<"ENTER THE NUMBER: "<<i<<" ";
	    std::cin>>num;
	    addition+=num;
	}
	average = addition / n;
    }
};

int main()
{
    int cn;
    float sum, av;
    std::cout<<"ENTER THE QUANTITY OF NUMBERS: ";
    std::cin>>cn;
    AdditionAverage::sumPro(cn, sum, av);
    system("cls||clear");
    std::cout<<"\n\tTHE ADDITION OF THE: "<<cn<<" NUMBERS IS: "<<sum<<std::endl;
    std::cout<<"\n\tTHE AVERAGE IS: "<<av<<std::endl;
    std::cin.ignore().get();
}
