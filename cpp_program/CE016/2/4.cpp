#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,ncount = 0;
    cin >> num;
    int ary[num][2];
    for(int i=0 ; i<num ;i++)
    {
        for(int j = 0; j<2 ; j++)
        {
            cin >> ary[i][j];
        }
    }
    int amount;
    cin >> amount;
    int amt2 = amount;
    int amt3 = amount;
    
    for(int i = 0;i<num +1 ;i++) //sort array by  denomination
    {
        for (int j = i +1 ;j<num;j++)
        {
            if(ary[j][0]>ary[i][0])
            {
                int temp = ary[i][0];
                ary [i][0] = ary[j][0];
                ary[j][0] = temp;
                temp = ary[i][1];
                ary[i][1] = ary[j][1];
                ary[j][1] = temp;
            }
        }
    }
    for (int i=0 ;i<num;i++)
    {
        int count = 0;
        for(int j = 1; j<=ary[i][1];j++)
        {
            if(amt3 - (ary[i][0])* j >=0)
                count++;
        }
        amt3 -= ((ary[i][0])*count);
       
        
    }
    if(amt3 ==0) //to check if calculation is possible
    {
            for(int i =0;i<num ;i++)
            {
                int count = 0;
                for(int j = 1; j<= ary[i][1];j++)
                {
                    if(amt2 - (ary[i][0])* j >=0)
                        count++;
                     
        
                }
                if(count!= 0)
                    ncount++; // number of diff coins we need for  give a fixed amount
                amt2 -= ((ary[i][0])*count);
            }
    
            cout << ncount <<"\n";  
            for(int i = 0; i<num;i++)
            {
                int count = 0;
                for(int j = 1;j<=ary[i][1];j++)
                {
                    if(amount - (ary[i][0])* j >= 0)
                        count++;
                }
                    if(count!= 0)
                        cout << ary[i][0] << " " << count <<"\n";
                amount -= ((ary[i][0])*count);
            
            
            
        
            }
    }
   else
       cout << "-1";
    
    return 0;
}
