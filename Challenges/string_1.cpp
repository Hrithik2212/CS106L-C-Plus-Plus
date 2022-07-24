/*WAF nameDiamond that accepts a string parameterand prints the leter 
   in diamond format
*/

#include <iostream>
#include <string>
using namespace std;

void nameDiamond(string word);
int main(){
    string word = "MARRY";
    nameDiamond(word);
    return 0;
}

void nameDiamond(string word){
    for(int i=0; i< word.length() ; i++){
        for(int j=0;j<=i;j++){
            cout<< word[j] ;
        }
        cout<<endl;
    }
    for(int i=1 ; i <= word.length() ; i++){
        for(int j=0 ; j<i ; j++){
            cout << " " ;
        }
        for(int k=i; k<word.length() ; k++){
            cout << word[k];
        }
        cout<<endl;
    }
}
