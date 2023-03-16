#include<iostream>
#include<string>
using namespace std;
class stu{
 private: string name,email,dept;
 int roll,age,phone,sem;
 public: stu(string n,string e,string d,int r,int a,int p,int
s){
 name=n;
 email=e;
 dept=d;
 roll=r;
 age=a;
 phone=p;
 sem=s;
 }
 void display(){
 cout<<"Student Name:"<<name<<endl;
 cout<<"Student Email:"<<email<<endl;
 cout<<"Student Department:"<<dept<<endl;
 cout<<"Student Rollnumber:"<<roll<<endl;
 cout<<"Student Age:"<<age<<endl;
 cout<<"Student Phonenumber:"<<phone<<endl;
 cout<<"Student Semester:"<<sem<<endl;
 }
};
int main(){
 string name,email,dept;
 int roll,age,phone,sem;
 cout<<"Enter Student name:";
 getline(cin,name);
 cout<<"Enter Student email:";
 getline(cin,email);
 cout<<"Enter Student department:";
 getline(cin,dept);
 cout<<"Enter Student rollnumber:";
 cin>>roll;
 cout<<"Enter Student age:";
 cin>>age;
 cout<<"Enter Student phonenumber:";
 cin>>phone;
 cout<<"Enter semester:";
 cin>>sem;
 stu s(name,email,dept,roll,age,phone,sem);
 s.display();
 return 0;
 }
