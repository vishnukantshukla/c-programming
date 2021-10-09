#include<stdio.h>
int main()
{
  float english,maths,physics,computer,chemistry,total,average,percentage;
  printf("Enter the marks of five subjects:\n");
  scanf("%f%f%f%f%f",&english,&maths,&physics,&computer,&chemistry);
  total=english+maths+physics+computer+chemistry;
  average=total/5;
  percentage=(total/500)*100;
  printf("Total marks=\t%f\nAverage marks obtained=\t%f\nTotal percentage obtained=%f",total,average,percentage);
  return 0;
}
