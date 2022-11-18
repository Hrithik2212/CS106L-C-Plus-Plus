#include <iostream>
#include <list>
#include <iterator>
using namespace :: std ;

void show(list<int> g) {
    list <int> :: iterator it;
    for(it =g.begin(); it != g.end() ;it++){
        cout << *it << " ";
    }
    cout << endl ;
}

int main(){
    list <int> l1 ;
    list<int> :: iterator it;
    for(int i=1;i<=10;i++){
        l1.push_back(i*10);
    }
    cout << "\nElements in the list : " ;
    show(l1) ;
}