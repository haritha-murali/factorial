#include <iostream>

using namespace std;
int factorial(int n);
int main()
{
    cout<<"enter no=";
    int n;
    cin >>n;
    factorial(n);
    cout<<factorial(n);
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
