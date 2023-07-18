#include<iostream>
using namespace std;

int main(){
    int maximum=-1999999;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,a[i]);
        cout<< maximum<<endl;
    }
    return 0;
}