#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
// int main()
// {
//     int *ptr;
//     int n;
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",(ptr+i));
//     }
//     for(int i=0; i<n; i++)
//     {
//         printf("%d", *(ptr+i));
//         printf("\n");
//     }
// }

int main()
{
    char *ptr;
    int n;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    fflush(stdin);
    for(int i=0; i<n; i++)
    {
        scanf("%c", (ptr+i));
    }
    printf("\n\n\n");
    for(int i=0; i<n; i++)
    {
        prnitf("%c", *(ptr+i));
    }
}
