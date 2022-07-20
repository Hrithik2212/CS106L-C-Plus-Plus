#include <iostream>
#include <cmath>

using namespace std;

void Quadratic(int& a, int& b, int& c, int& r1 ,int& r2);

int main(){
    // x^2 - 3*x -4 = 0
    int a,b,c,r1,r2;
    a = 1;
    b = -3;
    c = -4;
    Quadratic(a,b,c,r1,r2);
    cout << "r1 = " << r1 <<endl;
    cout <<" r2 = " << r2 <<endl;
    return 0;
}

void Quadratic(int& a, int& b, int& c, int& r1 ,int& r2){
    r1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    r2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;

}