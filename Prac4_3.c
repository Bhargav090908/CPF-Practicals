#include <stdio.h>

int main(){
    int ch,sem,mm,pm,cpfm,t;
    double avg,per;
    char ebr[10],mob[20],erno[20],ename[20];
     

do
{
    printf("\n*******************************************************************************************");
    printf("\nSTUDENT               RECORD            MANAGEMENT                   SYSTEM\n");
    printf("*******************************************************************************************\n");
    printf("----------------------------------MAIN   MENU-----------------------------------------------\n");
    printf("1.Register New Student\n2.Display Student Record\n3.Enter Students Marks\n4.Display Academic Results\n5.Exit\n");
    printf("Enter Your Choice :");
    scanf("%d",&ch);

switch (ch)
{
case 1:
    printf("\nEnter Enrollment Number:");
    scanf("%s",&erno);
    printf("\nEnter Student Name     :");
    scanf("%s",&ename);
    printf("\nEnter Branch           :");
    scanf("%s",&ebr);
    printf("\nEnter Semester         :");
    scanf("%d",&sem);
    printf("\nEnter Mobile Number    :");
    scanf("%s",&mob);
    printf("\nStudent Registered Successfully.");
    printf("\n------------------------------------------------------------------------------------------------");
    break;
case 2:
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\nSTUDENT REGISTRATION DETAILS");
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\nEnrollment Number      :%s      ",erno);
    printf("\nStudent Name           :%s      ",ename);
    printf("\nBranch                 :%s      ",ebr);
    printf("\nSemester               :%d      ",sem);
    printf("\nMobile Number          :%s      ",mob);
    break;
case 3:
    printf("\nEnter Maths Marks                                :");
    scanf("%d",&mm);
    printf("\nEnter Physics Marks                              :");
    scanf("%d",&pm);
    printf("\nEnter Computer Programming Foundation Marks      :");
    scanf("%d",&cpfm);
    printf("\nMarks entered Successfully.");
    break;
case 4:
    t=mm+pm+cpfm;
    avg=((mm+pm+cpfm)/300.0)*100.0;
    printf("\nTotal Marks                :%d",t);
    printf("\nAverage Marks              :%.2lf",avg);
    printf("\nPercentage                 :%.2lf",avg);
    if (mm>40 && pm>40 && cpfm>40)
    {
        printf("\nResult                     :Pass");
        if (avg>=95)
        {
            printf("\nGrade:                 :O");
        }
        else if(avg<95 && avg>=90)
        {
            printf("\nGrade                 :A+");
        }
        else if(avg<90 && avg>=80)
        {
            printf("\nGrade                 :A");
        }
        else if(avg<80 && avg>=70)
        {
            printf("\nGrade                 :B");
        }
        else if(avg<70 && avg>=60)
        {
            printf("\nGrade                 :B+");
        }
        else if(avg<60 && avg>=50)
        {
            printf("\nGrade                 :C");
        }
    }
    else
    {
        printf("\nResult                     :Fail");
    }   
    break;
} 
} while (ch!=5);
return 0;
}