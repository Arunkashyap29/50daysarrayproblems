#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr = (int*) calloc(5,sizeof(int));

if(ptr ==NULL)
{

printf("Memory not allocated ");
return 0;

}

for(int i=0; i<5; ++i)ptr[i]=i+1;
for(int i=0; i<5; ++i)printf("%d",ptr[i]);



free(ptr);

printf("\n after free ");

for(int i=0; i<5; ++i)printf("%d ",ptr[i]);


return 0;



}