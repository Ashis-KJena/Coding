#include <iostream>
using namespace std;
int main() {
    int a=5, b=6;
    // arthematic opreators in c++
    cout<<"the value of a+b is: "<<a+b<<endl;
    cout<<"the value of a-b is: "<<a-b<<endl;
    cout<<"the value of a*b is: "<<a*b<<endl;
    cout<<"the value of a/b is: "<<a/b<<endl;
    cout<<"the value of a%b is: "<<a%b<<endl;
    cout<<"the avle of a++ is: "<<a++<<endl;
    cout<<"the value of a-- is: "<<a--<<endl;
    cout<<"the value of ++a is: "<<++a<<endl;
    cout<<"the value of --a is: "<<--a<<endl;
    cout<<endl;

    
    // comparision opreators in c++
    cout<<"the value of a==b is: "<<(a==b)<<endl;
    cout<<"the value of a!=b is: "<<(a!=b)<<endl;
    cout<<"the value of a>b is: "<<(a>b)<<endl;
    cout<<"the value of a<b is: "<<(a<b)<<endl;
    cout<<"the value of a>=b is: "<<(a>=b)<<endl;
    cout<<"the value of a<==b is : "<<(a<=b)<<endl;
    cout<<endl;

    // logical opreators in c++
    cout<<"the value of this LP ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"the value of this LP ((a==b) || (a<b)) is; "<<((a==b) || (a<b))<<endl;
    cout<<"the value of this LP (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}