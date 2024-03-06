#include"StudentInfo.h"


StudentInfo::StudentInfo()
{
    studentId=0;
    studentName="";
    studentCgpa=0.0;
}
StudentInfo::StudentInfo(int id,string name,double cgpa)
{
    studentId=id;
    studentName=name;
    studentCgpa=cgpa;
}
void StudentInfo::setId(int id)
{
 studentId=id;
}
void StudentInfo::setName(string name)
{
    studentName=name;
}
void StudentInfo::setCgpa(double cgpa)
{
    studentCgpa=cgpa;
}
int  StudentInfo::getId()
{
    return studentId;
}
string StudentInfo::getName()
{
    return  studentName;
}
double StudentInfo::getCgpa()
{
    return studentCgpa;
}
bool StudentInfo::operator== (StudentInfo s)
{
    return(studentId==s.studentId)&&(studentName==s.studentName)&&(studentCgpa==s.studentCgpa);
    
}
bool StudentInfo::operator!=(StudentInfo s)
{
    return !(*this==s);
}
void StudentInfo::print()
{
    cout<<"StudentName:"<<studentId<< endl;
    cout<<"StudentId:"<<studentId<< endl;
    cout<<"StudentCgpa"<<studentCgpa<< endl;
}

