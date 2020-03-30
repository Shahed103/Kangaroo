#include<iostream>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<10000;i++)
    {x1=x1+v1;
    x2=x2+v2;
    if(x1==x2){
        cout<<"YES";
        break;}
        else if(v1>v2&&x1>x2){
            cout<<"NO";
            break;}
            else if(v2>v1&&x2>x1){
                cout<<"NO";
                break;}
         else if(v1==v2&&x1!=x2){
             cout<<"NO";
             break;
         }

        }}
