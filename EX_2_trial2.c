#include"Array_functions.h"
#define ROWS 10
#define MODE 'a'

int main()
{
    int *a;
    int rows=ROWS,k;
    char mode=MODE;
    array_create(a,rows);
    //array_assign(a,rows);
    //array_sort(a,mode,rows);
    printf("ARRAY\n");
    for(k=0;k<rows;k++)
    {
        printf("%d\t",a[k]);
    }
    k=0;
    printf("\n");
    //if(mode=='a')
    {
        array_sort(a,mode,rows);
        printf("Array in Ascending order:\t");
        for(k=0;k<rows;k++)
        {
        printf("%d\t",a[k]);
        }k=0;
    }
    /*else
        {
        array_sort(a,mode,rows);
        printf("Array in Descending order:\t");
        for(k=0;k<rows;k++)
        {
        printf("%d\t",a[k]);
        }k=0;
    }*/
}
