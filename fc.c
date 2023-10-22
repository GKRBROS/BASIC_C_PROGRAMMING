#include <stdio.h>
struct process
{
    int pid;
    float at,bt,ct,tt,wt,rt;
}p[100],temp;
void fcfs(struct process[100],int n)
{
    int i,j;
    float avgtt=0,avgwt=0,t=0,z=0;
    char s[]="        ";
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
                
        }
    }
}
int main()
{
    int n,i;
    printf("\nEnter no of process : \n");
    scanf("%d",&n);
    printf("\nEnter arrival time & burst time : \n");
    for(i=0;i<n;i++)
    {
        p[i].pid=i+1;
        printf("\nProcess %d : %d\n",(i+1),p[i].pid);
        printf("\nEnter Arrival time : \n");
        scanf("%f",&p[i].at);
        printf("\nEnter Burst time : \n");
        scanf("%f",&p[i].bt);
    }
    fcfs(p,n);
    return 0;
}