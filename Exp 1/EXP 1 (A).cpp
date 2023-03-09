#include<iostream>
using namespace std;
class student{
    char name[20],branch[20],subject[20];
    int rollno,semester;
public:
    student();
    ~student();
    void read();
    void display();
};
student::student(){
    cout<<"\n This is Constructor"<<endl;
}
void student::read(){
    cout<<"\nEnter the studmet name: ";
    cin>> name;
    cout<<"\nEnter the branch: ";
    cin>>branch;
    cout<<"\nEnter the subject ";
    cin>>subject;
    cout<<"\nEnter the RollNo.: ";
    cin>>rollno;
    cout<<"\nEnter the Semester: ";
    cin>>semester;
    cout<<"ENROLL";
}
void student::display(){
    cout<<"this is the details of the studemt"<<endl;
    cout<<"student name: "<<name<<endl;
    cout<<"student Branch: "<<branch<<endl;
    cout<<"student Subject: "<<subject<<endl;
    cout<<"student RollNo: "<<rollno<<endl;
    cout<<"student Semester: "<<semester<<endl;
}
student::~student(){
    cout<<"Student details is closed:";
}
int main(){
    student P;
    P.read();
    P.display();
    return 0;
}
