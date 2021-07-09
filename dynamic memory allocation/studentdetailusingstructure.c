#include<stdio.h>
#include<stdlib.h>
struct student{
  int roll;
  char name[20];
};
int main()
{
    struct student *s;
    
    s=(struct student *)malloc(1*sizeof(struct student));
    printf("enter roll and name of student\n");
    scanf("%d%s",&s->roll,s->name);
    printf("roll number is :%d\n",s->roll);
    printf("name of student is :%s\n",s->name);
    free(s);
}