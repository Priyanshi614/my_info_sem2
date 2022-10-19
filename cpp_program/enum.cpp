#include<iostream>
int main()
{
    enum day{sunday,monday=60,tuesday,wednesday,thrusday,friday,saturday};
    day abc = saturday;
    std::cout << abc <<'\n';
    day bg;
    bg =(day)12;
    std ::cout << bg <<std::endl;
    int num = bg;
    std:: cout << bg<< std::endl;
    float i = 10;
    std ::cout <<i;
    
    
    std::cout <<   saturday << "\n";
    switch (60)
    {
    	case sunday:
    	{
    	std::	cout << "sunday";
    		break;	
		}
    	case monday:
    	{
    		std::cout << "monday" <<"\n";
    	//	break;	
		}
		case tuesday:
    	{
    		std::cout << "tuesday";
    		break;	
		}
    	
	}
}
