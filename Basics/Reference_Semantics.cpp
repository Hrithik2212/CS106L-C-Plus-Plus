#include <iostream>

using namespace std;

void swap(int& a , int&  b);

int main(){
    int x,y;
    cout << "Enter the two integers one by one " << endl ; 
    cout <<" x =  ";
    cin >>x;
    cout << " y = ";
    cin >>y;
    swap(x,y);
    cout << "x = "<<x<<" , y = "<< y << endl;
    return 0 ; 
}

void swap(int& a,int& b){
    int temp = a;
    a = b;
    b =temp;
}