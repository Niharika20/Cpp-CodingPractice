#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    //taking input from user
    cin>>a>>b>>c>>d>>e;

    //setting precision and displaying values
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    
    cout<<"Floor of d: "<<floor(d)<<endl;
    cout<<"Ceil of d: "<<ceil(d)<<endl;
    cout<<"Round d: "<<round(d)<<endl;
    cout<<"Truncate d: "<<trunc(d)<<endl;
    

    return 0;
}

