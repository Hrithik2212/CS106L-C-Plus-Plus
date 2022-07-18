#include <iostream> //for stringstream
#include <sstream>  // for cout 

using namespace std;

int stringToInteger(const string& str);

int main(){
    // output
    ostringstream oss("Its too hot out there ");//,ostringstream::ate);
    cout << oss.str() <<endl;

    oss << 16.9 << " Ounce ";
    cout << oss.str() << endl;

    oss << "(Pack of " <<12 << ")";
    cout << oss.str() <<endl;

    // input 

    istringstream iss(oss.str());
    double amount; 
    string unit;
    iss >> amount >> unit ;

    // checking if the input is recognized properly  
    cout << amount << " " << unit << endl;
    //Checking the function 
    string number = "23";
    cout << typeid(stringToInteger(number)).name() << endl;
    return 0;
} 

int stringToInteger(const string& str){
    istringstream  iss(str);
    int value;
    iss >> value;
    return value;    
}
// Same function withh Error Checking 

int stringToInteger(const string& str){
    istringstream iss(str);
    int result ;
    iss >> result ;
    if (iss.fail()) throw domain_error("_");

    char remain;
    iss >> remain;
    if (iss.fail()) throw domain_error("_");
    return result ;
}