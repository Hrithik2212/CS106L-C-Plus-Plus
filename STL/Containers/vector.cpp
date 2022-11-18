#include <iostream>
#include <vector>
#include <string>

using namespace std ;


int main(){
    vector<int> gl ; 
    for(int i=0;i<5;i++){
        gl.push_back(i);
    }

    cout << "Output of begin and end : " ;
    for(auto i=gl.begin() ;i<gl.end();i++){
        cout<< *i << " " ;
    }
    cout << "\nOutput cbegin and cend : ";
    for(auto i=gl.cbegin() ; i <gl.cend();i++){
        cout << *i << " ";
    }
    cout << "\nOutput rbegin and rend : ";
    for(auto i=gl.rbegin() ;i<gl.rend();i++){
        cout <<*i << " " ;
    }
    cout << "\nOutput crbegin and crend : ";
    for(auto i=gl.crbegin();i<gl.crend();i++){
        cout <<*i << " ";
    }
    cout << "\nSize : " << gl.size(); 
    cout << "\nMax size : "<<gl.max_size();
    return 0;
}