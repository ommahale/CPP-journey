#include <iostream>
#include<string>
using namespace std;

class Book{
    public:
    string author;
    string title;
    int price;
    string pub;
    int stock;
    int index;
    static int success;
    static int unsuccess;
    

    void get(){
        cout<<"enter author: "<<endl;
        cin>>author;
        cout<<"enter Title: "<<endl;
        cin>>title;
        cout<<"enter price: "<<endl;
        cin>>price;
        cout<<"enter Publisher: "<<endl;
        cin>>pub;
        cout<<"enter stock: "<<endl;
        cin>>stock;
    }
    void display(){
        cout<<"author "<<author<<endl;
        cout<<"Title "<<title<<endl;
        cout<<"price Rs."<<price<<endl;
        cout<<"publisher "<<pub<<endl;
        cout<<"stock "<<stock<<endl;
    }
    void update_stock(int newval){
        stock=stock-newval;
    }
    void update_price(int newv){
        price=newv;
    }
    void successful(){
        success++;
    }
    void unsuccessful(){
        unsuccess++;
    }

};
int Book::success=0;
int Book::unsuccess=0;


int main(){
    int num;
    cout<<"Enter the number of books"<<endl;
    cin>>num;
    Book arr[num];
    for (int i = 1; i <= num; i++)
    {
        cout<<i<<" book"<<endl;
        arr[i].get();
        arr[i].display();
        arr[i].index=i;
    }
    bool nums=true;
    while(nums){
    int task;
    cout<<"enter what you want to do"<<endl;
    cout<<"1. update price"<<endl;
    cout<<"2. purchase"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>task;
        if (task==1)
        {
            cout<<"select title"<<endl;
               for (int i = 1; i <= num; i++)
            {
                cout<<"S.no. "<<i<<" "<<" "<<arr[i].title<<endl;

            }
            int sno;
            cout<<"enter the S no. of the title to be updated"<<endl;
            cin>>sno;
            int new_price;
            cout<<"enter the new price"<<endl;
            cin>>new_price;
            arr[sno].update_price(new_price);
        }
        else if (task==2)
        {
            cout<<"Enter the sno. of title to be purchased"<<endl;
            for (int i = 1; i <= num; i++)
            {
                cout<<"S.no. "<<i<<" "<<" "<<arr[i].title<<endl;
        
            }   
            int sno;
            int pur;
            cin>>sno;
            cout<<"Enter purchase"<<endl;
            cin>>pur;
            if(pur<arr[sno].stock)
            {
                arr[sno].update_stock(pur);
                arr[sno].successful();
            }
            else
            {
                cout<<"Input is more than available stock"<<endl;
                arr[sno].unsuccessful();
            }
            
            
        }   
        else if (task==3)
        {
            nums=false;
        }
        else
        {
            cout<<"invalid command"<<endl;
        }
    }
    return 0;
}