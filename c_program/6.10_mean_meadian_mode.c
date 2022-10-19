#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,a,i,y,j,maxcount = 0,count=0;
    double arr[1000],votes[1000],sum = 0,mean,mode;
    
    for(int i=0;i<1000;i++)
    {
        scanf("%lf",&arr[i]);
        
           
            
        if (arr[i] == -1)
            break;
        else
        {
            count +=1;
            sum +=arr[i];
        }
        
    }
    for(i=0;i<count;++i)
    {
        for(j=i+1;j<count;++j)
        {
            
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j] = a;
            }
        }
    }
    mean =sum/count;
    printf("%1.2lf ",mean);
    if(count%2 ==1)
    {
        x= count/2;
        printf("%1.2lf ",arr[x]);
    }
    else{
        x=(count/2)-1;
        y=(count/2);
        printf("%1.2lf ",(arr[x]+arr[y])/2);
    }
    if(count==1)
        printf("-1.00 ");
    else{
        for(i=0;i<=count;i++)
        {
            votes[i]=0;
            for(j=0;j<count;j++)
            {
                if (arr[j]==i)
                    votes[i]++;
            }
        }
        for(i=0;i<count;i++)
        {
            if(votes[i]==maxcount)
                mode=-1;
            if (votes[i]>maxcount)
            {
                maxcount = votes[i];
                mode = i;
            }
        }
        printf("%1.2lf",mode);
    }
    
   
    return 0;
}