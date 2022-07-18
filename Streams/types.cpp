#include <iostream>

using namespace std;

int main(){
    cout <<calculateSum({"Hrithik Yuva"});
    return 0;
}
auto calculateSum(const vector<string>& v){ 
    // Auto cant be used as a function parameter
    auto copy = v;
    auto multiplier =2.4 ;
    auto name = "Hrithik"; // C string
    auto betterName = string{"Hrithik"};
    auto& refMult = multiplier;
    auto func =  [](auto i){return i*2};
    return betterName;
}