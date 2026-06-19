#include <iostream>
#include <vector>
using namespace std;
vector<string> push(vector<string> myVector, string str){
    myVector.resize(myVector.size() + 1);
    int size = myVector.size();
    myVector.at(size - 1) = str;
    return myVector;
}
int main() {
    // Test the function
    vector<string> old_vec = {"Zidane" ,"Drogba", "Courtois"};
    for(string player: old_vec){
        cout << player << ' ';
    }
    //Output: Zidane Drogba Courtois 
    cout << "\n================\n";
    old_vec = push(old_vec, "Rooney");
    for(string player: old_vec){
        cout << player << ' ';
    }
    // Output: Zidane Drogba Courtois Rooney
    return 0;
}