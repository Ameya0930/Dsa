#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin >>r>>c;
    for (int i = 1; i<=r; i++)
    {
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }//for rectangle
    cout<<endl;
    for (int k = 1; k <=r; k++)
    {
        for (int l = 1; l<=c; l++)
        {
            if (k == 1 || k==r || l == 1 || l==c)
            {
                cout<<"*";
                
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }//for hollow rectangle
    cout<<endl;
    for(int h =1;h<=r;h++){
        for(int g=h-1;g<=c;g++){
            cout<<"*";        
        }
        cout<<endl;
    }//inverted half pyramid
    cout<<endl;
    for (int u = 1; u <=r; u++)
    {
        for (int v = 1; v <=r; v++)
        {
            if (v<=r-u)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }//inverted half pyramid rotated 180
    cout<<endl;
    for (size_t i = 0; i < count; i++)
    {
            
    }
    
    }
