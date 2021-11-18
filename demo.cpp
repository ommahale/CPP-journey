#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the button number(1=english|2=hindi|3=japanese)";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"Hello";
        break;
    case 2:
        cout<<"Namaste";
        break;
    case 3:
        cout<<"Konichiwa";
        break;
    default:
        break;
    }

    return 0;
}