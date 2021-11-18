#include<iostream>
using namespace std;
struct Terms
{
    int coeff;
    int exp;
};
Terms polynomial(int n){
    cout<<"Enter the no. of terms ";
    cin>>n;
    Terms arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the coefficient";
        cin>>arr[i].coeff;
        cout<<"Enter the exponent";
        cin>>arr[i].exp;
    }
    cout<<"The polynomial is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"+("<<arr[i].coeff<<"X^"<<arr[i].exp<<")";
    }
    return arr[n];
}
int main(){
    int a;
    Terms x;
    x=polynomial(a);
    cout<<x.coeff;
    
    
    return  0;
}