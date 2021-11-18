#include <iostream>
using namespace std;
int main(){
    //Syntax=data_type array_name[size];
    //array-> static
    
    int arr[10];
    for (int i=0; i<10; i++){
        cin>> arr[i];
    }
    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}