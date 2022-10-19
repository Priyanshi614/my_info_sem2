#include <iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,num,current_num,sqrt_num;
    cin >> num;
    for( i=0 ; i<num ; i++ )
    {
        cin >> current_num;
        sqrt_num = sqrt(current_num);
        if(1== current_num)
            continue;
        else if (2== current_num)
            printf("%d ",current_num);
        else if(current_num % 2) // to check whether current_num is divisible by 2,3,5,...
        {
            for(j=3;j <= sqrt_num; j+=2)
                if(current_num %j == 0)
                    break;
            if(j > sqrt_num)
                printf("%d ",current_num);
        }
    }
    return 0;
}
