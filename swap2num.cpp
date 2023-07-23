#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;
    swap(&a,&b);//we have to use the address of a and b because the above a and b are different variables(diff between local and global variable)
    cout<<a<<" "<<b<<endl;
}