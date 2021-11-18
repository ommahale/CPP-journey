#include<iostream>
#include <string>
using namespace std;
class Publication{
    public:
    string title;
    float price;
    void get(){
        cout<<"Enter book name: ";
        cin>>title;
        cout<<"enter price: ";
        cin>>price;
    }
    void put(){
        cout<<title<<" "<<"- Rs"<<price<<endl;
    }
};
class Book: public Publication{
    public:
    int page;

};
class Tape: public Publication{
    public:
    float time;
};
int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Publication arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        arr[i].get();
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i].put();
    }

    return 0;
}