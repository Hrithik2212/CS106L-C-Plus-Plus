#include <iostream>
#include <vector>

using namespace std;

// Structered Bindings 
pair<int,int> findPriceRange(int dist){
    int min = static_cast<int>(dist*0.08+100);
    int max = static_cast<int>(dist*0.36+750);
    return make_pair(min,max);
    /* Disadvantage 
    ->One cant figure out which one is the min and which one is a max
    */
}

struct Course{
    string Course_Language;
    vector<string> Days,Instructors;
};


int main(){
    int dist = 6542;
    auto [min,max] = findPriceRange(dist);
    cout << "The min : - "<<min << " and max is " <<max<<endl;
    cout << endl;
    //cout <<"Course language is "<< CS106L.Course_Language<< endl;
    // cout <<"Course Schedule"<<endl;
    // cout << CS106L.Days[0] << " , "<< CS106L.Days[1] << endl ; 
    // cout << "Instructors are " << endl;
    // cout << CS106L.Instructors[0]<<endl;
    // cout << CS106L.Instructors[1]<<endl;
    return 0;
}
