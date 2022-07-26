#include <fstream> // header for file operation 
#include <iostream>
#include <string>
using namespace std;


int main(){
    // reading from a file
    fstream Poem;
    Poem.open("poem.txt");
    if (Poem.fail()){
        cout << "Such file doesnt exist" <<endl;   
    }
    string s;
    while(getline(Poem,s)){
        cout << s <<endl;
    } 
    Poem.close();
    return 0;
}