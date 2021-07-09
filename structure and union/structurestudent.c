#include<stdio.h>
struct student
{
  char name[20];
  int roll, marks;

};
int main(){
  struct student s;
  
  printf("enter the name,roll and marks of student\n");
  scanf("%s%d%d", &s.name,&s.roll,&s.marks);
  printf("student name:%s\n",s.name);
  printf("student rool no:%d\n",s.roll);
  printf("student marks:%d\n",s.marks);
  return 0;
}