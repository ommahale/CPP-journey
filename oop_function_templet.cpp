#include <iostream>
using namespace std;
template <class T>
void maximum(T a, T b){
    if(a>b){
        cout<<a<<" is greater";
    }
    else
    {
        cout<<b<<" is greater";
    }
    
    
}
int main(){
    maximum(2,5);
    maximum(3.4,4.5);
    return 0;
}