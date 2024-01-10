#include<bits/stdc++.h>
using namespace std;

int main(){
    
int tt; 
    cout<<"test Case:";
    cin>>tt;
    
    while (tt--)
    {   
       
        int n;
        cin>>n;

        string str; cin>>str;
        int plus=0, minus= 0;

        for(int i=0;i<n;i++){
           if(str[i]=='+') plus++;
           else minus++;
        }

        
        cout<<abs(plus-minus)<<endl;

    
     


    }
    





}