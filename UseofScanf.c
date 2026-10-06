#include <stdio.h>
#include <conio.h>

void main()
{
    int m1,m2,m3;
    int stu_id,total;
    float percent;

    printf("\nEnter Student ID: ");
    scanf("%d",&stu_id);
    printf("\nEnter Maths Marks: ");
    scanf("%d",&m1);
    printf("\nEnter Physics Marks: ");
    scanf("%d",&m2);
    printf("\nEnter Chemistry Marks: ");
    scanf("%d",&m3);

    total=m1+m2+m3;
    percent=(total/300.0)*100.0;

    printf("\nStudent ID: %d",stu_id);
    printf("\nMaths Marks: %d",m1);
    printf("\nPhysics Marks: %d",m2);
    printf("\nChemistry Marks: %d",m3);
    printf("\n__________________________");
    printf("\nTotal Marks: %d",total);
    printf("\nTotal Percentage: %f",percent);




}