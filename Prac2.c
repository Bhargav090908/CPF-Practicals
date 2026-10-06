#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
   


    int erno,esem,date,month,year;
    double emno;
    char ename[20],ebr[10],gender[10],bloodgrp[10];
   
    printf("\n*********************************************************************************************************");
    printf("\n             STUDENT                RECORD                    MANAGEMENT             SYSTEM");
    printf("\n*********************************************************************************************************\n");
    printf("\nSoftware Version        : 1.1");
    printf("\nInstitute               : CHARUSAT UNIVERSITY");
    printf("\nAcademic Year           : 2026-27\n");
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nSTUDENT REGISTRATION");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\nEnter Enrollment Number :");
    scanf("%d",&erno);
    printf("\nEnter Enrollment Name   :");
    scanf("%s",&ename);
    printf("\nEnter Branch            :");
    scanf("%s",&ebr);
    printf("\nEnter Semester          :");
    scanf("%d",&esem);
    printf("\nEnter Mobile Number     :");
    scanf("%lf",&emno);
    printf("\nEnter Birth Day         :");
    scanf("%d",&date);
    printf("\nEnter Birth Month       :");
    scanf("%d",&month);
    printf("\nEnter Birth Year        :");
    scanf("%d",&year);
    printf("\nEnter Gender            :");
    scanf("%s",&gender);
    printf("\nEnter Blood Group       :");
    scanf("%s",&bloodgrp);
    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nSTUDENT INFORMATION");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\nEnrollment Number       :%d",erno);
    printf("\nStudent Name            :%s",ename);
    printf("\nBranch                  :%s",ebr);
    printf("\nSemester                :%d",esem);
    printf("\nMobile Number           :%.0lf",emno);
    printf("\nDate of Birth           :%d",date);
    printf("/%d",month);
    printf("/%d",year);
    printf("\nGender(Male/Female)     :%s",gender);
    printf("\nBlood Group             :%s\n",bloodgrp);
    
    printf("\n----------------------------------------------------------------------------------------------------------");



return 0;


}