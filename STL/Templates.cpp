#include <iostream>
#include <string>
#include <vector>


// Max function using templates 
using namespace std;
template <typename T>
T Max(T x,T y){
    return (x>y)?x:y;
}


// Bubble Sort Function using templates 

template <class T > void BubbleSort(T a[],int n){
    for(int i = 0 ; i < n-1 ; i++ ){
        for(int j = n-1 ; i < j ; j--){
            if (a[j] < a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}

template <typename T1> void printVector(T1 vec[],int n){
    cout << "Given elements are " << endl;
    for(int i = 0 ; i < n ; i++ ){
        cout << vec[i] << "  " ;
    }
}

int main(){
// Max function main program
    cout << (int)Max(5,7) << endl;
    cout << (char)Max('g','c') << endl;
// BubbleSort main program 
    int a[5] = { 10, 50, 30, 40, 20 };
    BubbleSort(a , 5);
    printVector(a , 5);
    return 0;
}