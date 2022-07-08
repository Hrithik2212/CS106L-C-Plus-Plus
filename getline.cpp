#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(){
    string s ,t ;
    getline(cin , s);
    stringstream X(s);
    while(getline(X,t,' ')){
        cout << t << endl;
    }
    return 0;
}