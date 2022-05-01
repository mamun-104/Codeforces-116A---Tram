#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i;
    int a,b;
    int sum=0,temp;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(i==0){sum=b;temp=sum;}
        else{
            sum=sum-a+b;
            if(sum>temp){temp=sum;}
        }

    }

    cout<<temp<<endl;



    return 0;
}






