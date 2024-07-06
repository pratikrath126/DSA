#include<stdio.h>

struct student {

char name[30];
int roll;
int marks;
};
int main()
{
struct student s1={"pratik",1,20};
struct student s2={"rarth",2,30};
printf("studen1 info");
printf("%s name,%d roll ,%d marks",s1.name,s1.roll,s1.marks);
printf("\nstuden1 info");
printf("%s name,%d roll ,%d marks",s2.name,s2.roll,s2.marks);
return 0;
}

