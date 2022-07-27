#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>


using std::string;
using std::cout;
using std::cin;
using std::endl;

string GetLine(){
    string response;
    std::getline(cin,response);
    return response;
}

int main(){
    std::map<string,int> frequencyMap;
    cout << "Enter words : " << endl ;
    while(true){
        cout << ">";
        string response = GetLine();
        if (response.empty()) break;
        std::istringstream stream(response);
        string word ;
        while(stream>>word){
            // frequencyMap[word];  // Automat5icallly create an entry and saves the value 
            // frequencyMap.find(word); // throws an error if key doesnt exist 
            ++frequencyMap[word]; // Takes word as the key and default value being int 0 is incremented 
        }
    }
    cout << "Enter words to look out : "; 
    while (true)
    {
        cout << ">";
        string response = GetLine();
        if (response.empty()) break;
        if (frequencyMap.count(response)){
            cout << frequencyMap[response] << " entries is found" << endl; 
        }
        else cout << "None" << endl;
    }
    
    return 0;
}



