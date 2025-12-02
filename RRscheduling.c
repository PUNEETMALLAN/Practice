#include<stdio.h>
#include<conio.h>

void main(){
    int n,i,count=0,qt,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10];
    float awt=0,atat=0;
    clrscr();
    printf("Enter the number of Process:");
    scanf("%d\n",&n);
    printf("Enter the burst time:");
    for(i=0;i<n;i++){
        scanf("%d\n",&bt[i]);
        rem_bt[i]=bt[i];
    }
    printf("Enter the quantum time:");
    scanf("%d\n",&qt);
    while(1){
        for(i=0;count=0;i<n;i++){
            temp=qt;
            if(rem_bt[i]==0){
                count++;
                continue;
            }
            if(rem_bt[i]>qt){
                rem_bt[i]=rem_bt[i] - qt;
            }
            else if(rem_bt[i]>=0){
              temp=rem_bt[i];
              rem_bt[i]=0;  
            }
            sq=sq+temp;
            tat[i]=sq;

        }
        if(n==count)
        break;
    }
    printf("\n")
}