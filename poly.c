
#include <stdio.h>
void addition(){

}
int main()
{
    int choice,m1,m1,n1,n2;
    printf("\nMenu\n1.Reading polynominal-1\n2.Reading polynomial-2\n3.Addition\n4.multiplication\n5.Quit\nEnter choice : ");
    scanf("%d",&choice);
    printf("\nEnter expo and coeff for poly 1:\t");
    scanf("%d",&m);
    printf("\nEnter expo and coeff for poly 2:\t");
    scanf("%d",&n);
    int poly1[][m],poly2[][n];
    switch (choice)
    {
    case 1:
        printf("\nEnter poly1: \n");
        for(int i=0;i<m;i++)
        {
            scanf("\t%d",&poly1[0][i]);
        }   
        break;
    case 2:
        printf("\nEnter poly2: \n");
        for(int i=0;i<2;i++)
        {
            scanf("\t%d",&poly1[0][i]);
        }   
        break;

    default:
        break;
    }
}