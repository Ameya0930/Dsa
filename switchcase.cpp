#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a alphabet";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hi"<<endl;
        break;
    case 'b':
        cout<<"hello"<<endl;
        break;
    case 'c':
        cout<<"Supp"<<endl;
        break;
    case 'd':
        cout<<"hey"<<endl;
        break;
    default:
        cout<<"Invalid Character";
        break;
    }
}