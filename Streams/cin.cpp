#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int getInteger(const string& prompt = "Enter an integer: ",
               const string& reprompt ="Illegal numeric format. Try again.\n");

int main(){
    cout << "What is your name? " ;
    string name;
    cin >> name;
    int age ;
    getInteger("How old are you ?");
    cout <<"where are you from ? ";
    string home;
    cin >> home;
    cout << "Hello " << name << "(age "<<age<<" from "<<home<<")"<<endl;
    cout << "Write any qoute you like" << endl;
    string qoute;
    cin.ignore();
    getline(cin ,qoute); // getline doesnt work as it takes the previous \n from stream
                        // thus we use cin.ignore() 
    cout << "Your Qoute is : \n"<<qoute;
    return 0;
}

int getInteger(const string& prompt,const string& reprompt){
    while(true){
        cout << prompt ;
        string line;
        if(!getline(cin,line)) throw domain_error("Something hpd :_)");
        istringstream iss(line);
        int val;
        char remain;
        if (iss>>val && !(iss>>remain)) return val;
        cout << reprompt << endl;
    }
    return 0;
}

/* Reasons why >> with cin is nightmare 

-> Reads the entire line into the buffer but gives 
whitespcae seperated tokens 

->Trash in the buffer will make cin not prompt the user 
for input at the right time 

->When cin fails all futire cin fails
*/


