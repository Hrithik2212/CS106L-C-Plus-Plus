#include <iostream>
#include <string>

using namespace std;
// Strings are mutable in cpp
// Strings are immutable in python 
int main(){
    string s ="Hi Hrithik";
    char a = s[4];
    cout << (int) a << endl;
    s.append(", How's your day ? ");
    cout << s <<endl;
    // == operator is used for string comparison in cpp,python,javascript 
    // but not in java and c 
    bool check = s == "Hi Hrithik, How's your day ? ";
    cout << check <<endl;
    // compare operatorcan be used to compare as well
    int b = s.compare("Hi Ramu"); // returns -1,0,1 according to the order
    cout << b << endl;
    cout << s.erase(2,-1) << endl;
    if (s.find("Varun") == string::npos){
        cout << "CPP doesnt give out a negative number when a string is not found \nIt instead gives out string::npos" <<endl;
    }
    return 0;
}