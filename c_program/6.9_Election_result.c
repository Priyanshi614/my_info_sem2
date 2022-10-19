#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int candidate,no_of_voters;
    
    scanf("%d\n%d",&candidate,&no_of_voters);
    int votes[no_of_voters];
    candidate +=1;
    int vote_count[candidate];
    for(int i =0;i<=candidate;i++)
        vote_count[i]=0;
    for(int i=0;i<no_of_voters;i++)
    {
        scanf("%d",&votes[i]);
        for(int k=0;k<candidate;k++)
            if(votes[i] ==k)
            {
                vote_count[k]++;
                break;
            }
    }
    int max= vote_count[0];
    int j=0;
    for(int i=1;i<candidate;i++)
    {
        if(max<vote_count[i])
        {
            j=i;
            max = vote_count[i];
            continue;
        }
        if(max ==vote_count[i])
            j = candidate*candidate;
    }
    if(j>candidate)
        printf("-1");
    else
        printf("%d",j);
    return 0;
}

