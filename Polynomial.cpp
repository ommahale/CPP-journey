#include <iostream>
#include <string.h>
using namespace std;
class Polynomial{
    public:
    struct terms
    {
        int coeff;
        int exp;
    };
    int n;
    terms GetData(){
        cout<<"Enter the number of terms in your polynomial: ";
        cin>>n;
        terms arr[n];
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the coeffeciant of term "<<i+1<<" ";
            cin>>arr[i].coeff;
            cout<<"Enter the exponent of term "<<i+1<<" ";
            cin>>arr[i].exp;
        }
        cout<<"==========================================Polynomial created=========================================="<<endl;
        return arr[n];
        
    }
    
};
int main(){
    Polynomial p;
    p.GetData();

    return 0;

}