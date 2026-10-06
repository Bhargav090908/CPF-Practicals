#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
   


    int erno,esem,mm,pm,pfm,t;
    double emno,percent,avg;
    char ename[20],ebr[10];
   
    printf("\n*********************************************************************************************************");
    printf("\n             STUDENT                RECORD                    MANAGEMENT             SYSTEM");
    printf("\n*********************************************************************************************************\n");
    printf("\nSoftware Version                   : 1.1");
    printf("\nInstitute                          : CHARUSAT UNIVERSITY");
    printf("\nAcademic Year                      : 2026-27\n");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nSTUDENT REGISTRATION");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\nEnter Enrollment Number            :");
    scanf("%d",&erno);
    printf("\nEnter Enrollment Name              :");
    scanf("%s",&ename);
    printf("\nEnter Branch                       :");
    scanf("%s",&ebr);
    printf("\nEnter Semester                     :");
    scanf("%d",&esem);
    printf("\nEnter Mobile Number                :");
    scanf("%lf",&emno);
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nACADEMIC INFORMATION");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nEnter Mathematics Marks            :");
    scanf("%d",&mm);
    printf("\nEnter Physics Marks                :");
    scanf("%d",&pm);
    printf("\nEnter Programming Foundation Marks :");
    scanf("%d",&pfm);
    t=mm+pm+pfm;
    percent=(t/300.0)*100.0;
    avg=t/3.0;
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nACADEMIC SUMMARY");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nTotal Marks                        :%d",t);
    printf("\nAverage Marks                      :%0.2lf",avg);
    printf("\nPercentage                         :%0.2lf",percent);

    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nSTUDENT INFORMATION");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\nEnrollment Number                  :%d",erno);
    printf("\nStudent Name                       :%s",ename);
    printf("\nBranch                             :%s",ebr);
    printf("\nSemester                           :%d",esem);
    printf("\nMobile Number                      :%.0lf",emno);
    
    
    printf("\n----------------------------------------------------------------------------------------------------------");







if (percent<33.0){
    printf("\n\nStatus:                            :Fail");
}
else{
    printf("\nStatus:                            :Pass");
}
return 0;
}