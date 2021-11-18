#include <iostream>
#include<string.h>
#include<fstream>
using namespace std;
class student{
    public:
    int roll_no;
    char name[30];
    void getData(){
        cout<<"Enter name ";
        cin>>name;
        cout<<"enter roll no. ";
        cin>>roll_no;
    }
    void putData(){
        cout<<"The name is: "<<name<<endl;
        cout<<"The roll no. is: "<<roll_no<<endl;
    }

};
int main(){
    ifstream os;
    
}