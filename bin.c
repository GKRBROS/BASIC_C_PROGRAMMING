#include<stdio.h>
int main()
{
    int beg=0,mid,end,key;
    n=5;
    int a[n];
    end=n-1;
    mid=(beg+end)/2;
    printf("Enter elements :\t");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter key:\t");
    scanf("%d",&key);
    while ((beg<=end)&&(a[mid]!=key))
    {
        if(key<A[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==key)
        printf("\nelement found at %d position\n",mid);
    else
        printf("\nelement not found found\n");
}