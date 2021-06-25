#include<stdio.h>
struct Book{
   char book_name[50],author_name[50],published_month[10],ISBN[50];
   int published_year;
   float price;
}b[50];
int main()
{
    int n,i,j;
    printf("Number of books: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        getchar();
        printf("Take information for Book_%d\n",i);
        printf("Book name: ");
        gets(b[i].book_name);
        printf("Author name: ");
        gets(b[i].author_name);
        printf("ISBN No: ");
        scanf("%s",&b[i].ISBN);
        printf("Published:\n");
        printf("Month:");
        scanf("%s",b[i].published_month);
        printf("Year:");
        scanf("%d",&b[i].published_year);
        printf("Price: ");
        scanf("%f",&b[i].price);
    }
    printf("\n\tBook List:\n");
    for(j=1;j<=n;j++)
    {
        printf("%d.Book name:%s\n Author name:%s\n ISBN No:%d\n Published:%s,%d\n Price:%f\n\n",j,b[j].book_name,b[j].author_name,b[j].ISBN,b[j].published_month,b[j].published_year,b[j].price);
    }

    return 0;
}
