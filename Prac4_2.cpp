#include <iostream>
using namespace std;

int main() {
   


    int erno,esem,mm,pm,pfm,c=0;
    double t,percent,avg;
    string ename,ebr,emno;
   
    cout<<"\n*********************************************************************************************************";
    cout<<"\n             STUDENT                RECORD                    MANAGEMENT             SYSTEM";
    cout<<"\n*********************************************************************************************************\n";
    cout<<"\nSoftware Version                   : 1.1";
    cout<<"\nInstitute                          : CHARUSAT UNIVERSITY";
    "\nAcademic Year                      : 2026-27\n";
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nSTUDENT REGISTRATION";
    cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    cout<<"\nEnter Enrollment Number            :";
    cin>>erno;
    cout<<"\nEnter Enrollment Name              :";
    cin>>ename;
    cout<<"\nEnter Branch                       :";
    cin>>ebr;
    cout<<"\nEnter Semester                     :";
    cin>>esem;
    cout<<"\nEnter Mobile Number                :";
    cin>>emno;
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nACADEMIC INFORMATION";
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nEnter Mathematics Marks            :";
    cin>>mm;
    cout<<"\nEnter Physics Marks                :";
    cin>>pm;
    cout<<"\nEnter Programming Foundation Marks :";
    cin>>pfm;
    t=mm+pm+pfm;
    percent=(t/300.0)*100.0;
    avg=t/3.0;
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nACADEMIC SUMMARY";
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nTotal Marks                        :"<<t;
    cout<<"\nAverage Marks                      :"<<avg;
    cout<<"\nPercentage                         :"<<percent;

cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\nSTUDENT INFORMATION";
    cout<<"\n----------------------------------------------------------------------------------------------------------\n";
    cout<<"\nEnrollment Number                  :"<<erno;
    cout<<"\nStudent Name                       :"<<ename;
    cout<<"\nBranch                             :"<<ebr;
    cout<<"\nSemester                           :"<<esem;
    cout<<"\nMobile Number                      :"<<emno;
    
    
    cout<<"\n----------------------------------------------------------------------------------------------------------";
if (mm>=35 and pm>=35 and pfm>=35){
    cout<<"\n\nResult:                            :Pass";
    c+=1;
}
else{
    cout<<"\nResult:                              :Fail";
}
if (c>0){
    if (percent >90.00){
    cout<<"\nGrade                                 : O(Outstanding)";
    } 
    else if (percent <90.00 and percent >=80.00){
    cout<<"\nGrade                                 :A+(Excellent)";
    }
    else if (percent <80.00 and percent >=70.00){
    cout<<"\nGrade                                 :A(Very Good)";
    }
    else if (percent <70.00 and percent >=60.00){
    cout<<"\nGrade                                 :B+(Good)";
    }
    else if (percent <60.00 and percent >=50.00){
    cout<<"\nGrade                                 :B(Satisfactory)";
    }
    else if (percent <50.00 and percent >=40.00){
    cout<<"\nGrade                                 :C(Needs Improvement)";
    }
    else if (percent <40){
    cout<<"\nGrade                                 :F(Failed)";
    }
}





return 0;
}
