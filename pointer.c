#include<stdio.h>
int swap(int *x,int *y)
{
    printf("passing address:\nx=%d\ty=%d\n",x,y);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("swap completed\nx=%d\ty=%d\n",*x,*y);
}

int main()
{
    int x=3,y=8;
    swap(&x,&y);
    printf("x=%d\ty=%d",x,y);

    int i=2,*j,**k;
    j=&i;
    k=&j;
    printf("\n\n\n%u\n",i);//value of i
    printf("%u\n",&i);//address of i
    printf("%u\n",j);//address of i
    printf("%u\n",*j);//value of i
    printf("%u\n",&j);//address of j
    printf("%u\n",k);//address of j
    printf("%u\n",*k);//address of i
    printf("%u\n",**k);//value of i
    printf("%u\n",&k);//address of k
    printf("%u",*(&i));//value of i

    return 0;
}
