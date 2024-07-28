#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void printpyramid(int rowcount){
char space[45]={'\0'};
int i; int x=1; int y=1;
printf("%d is number of rows\n",rowcount);
for(int i=1;i<=rowcount;i++)
{
    for(int k=rowcount-i;k>=0;k--)
    {
        printf(" ");
    }
    
    for(int j=1;j<i+x;j++)
    { if(j%2==0){printf(" ");}
     else {printf("*");}     
    }
    x=x+1;
    
    for(int k=0;k<=rowcount-i;k++)
    {
        printf(" ");
    }
    printf("\n");
}
}
int main(){
    printf("   1  \n");
    printf("  2 3\n");
    printf(" 4 5 6\n");
    printf("7 8 9 10\n");
    printpyramid(4);
    printpyramid(6);
    printpyramid(10);
    printpyramid(20);
    return 0;
}