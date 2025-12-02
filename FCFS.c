#include<stdio.h>
int main(){
    int prs[20],at[20],bt[20],wt[20],tat[20],i,n;
    float wt_total,tat_total;
    printf("Enter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the burst time for the proces %d:",i);
        scanf("%d",&bt[i]);
    }
    wt[0]=wt_total=0;
    tat[0]=tat_total=bt[0];
    for(i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
        wt_total=wt_total+wt[i];
        tat_total=tat_total+tat[i];
    }
    printf("\n\tProcess\tBurst time\t Waiting time\tTurnaround time\n");
    for(i=0;i<n;i++)
    printf("\n\tp%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
    printf("\nAverage Wating time:%.2f",wt_total);
    printf("\nAverage Turnaround time:%.2f",tat_total);
}
