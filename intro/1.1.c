#include<stdio.h>
void cmp(int*,int*);
int main(){
int a,b;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
cmp(&a,&b);
return 0;
}
void cmp(int*a ,int*b)
{
 if(*a>*b)
 
{
  printf("%d is greater than %d",*a,*b);
  }
  else if(*a<*b)
 {
  printf("%d is smaller than %d",*a,*b);
  }
  else
  printf("both numbers are same");
  }
