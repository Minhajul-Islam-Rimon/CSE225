#include<iostream>
#include"StudentInfo.cpp"
using namespace std;

int main(){
    const int maxStudents=100;
    StudentInfo studentArray[maxStudents];
     int numberOfStudents=5;

    

    studentArray[0]=StudentInfo(15234," Jon ",2.6);
    studentArray[1]=StudentInfo(13732," Tyron ",2.6);
    studentArray[2]=StudentInfo(13569," Sandor ",2.6);
    studentArray[3]=StudentInfo(15467," Ramsey ",2.6);
    studentArray[4]=StudentInfo(16285," Arya ",2.6);

    for(int i=0;i<numberOfStudents;i++){
       cout<< studentArray[i].getId()<< studentArray[i].getName()<<studentArray[i].getCgpa()<<endl;
       
    }
    cout<<endl;
    int targetid=15467;
    for(int i=0;i<numberOfStudents;i++){
        if(studentArray[i].getId()==targetid){
            for(int j=i;j<numberOfStudents-1;j++){
                studentArray[j]=studentArray[j+1];
            }
            numberOfStudents--;
            break;
        }
        

    }
    cout<<endl<<"After deleting"<<endl;
    for(int i=0;i<numberOfStudents;i++){
       cout<< studentArray[i].getId()<< studentArray[i].getName()<<studentArray[i].getCgpa()<<endl;
       
    }
    cout<<endl;
    //searching 13569 id
    int targetId=13569;
    bool found=false;
    int foundIndex=-1;
    
    for(int i=0;i<numberOfStudents;i++){
        if(studentArray[i].getId()==targetId){
            found=true;
            foundIndex=i;
            break;
        }
    }
    if(found=true){
        cout<<"Item is found"<<endl;
        cout<< studentArray[foundIndex].getId()<< studentArray[foundIndex].getName()<<studentArray[foundIndex].getCgpa()<<endl<<endl;
    }else{
        cout<<targetid <<"Item is not found"<<endl;
    }
    //current list
    cout<<"List:"<<endl;
    for(int i=0;i<numberOfStudents;i++){
        
       cout<< studentArray[i].getId()<< studentArray[i].getName()<<studentArray[i].getCgpa()<<endl;
       
    }
    
}