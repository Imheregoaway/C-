#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> test_scores  {100,90,80};
    vector <double> tmp (365,80); //
    
    cout<<"This is the output:"<<tmp.at(4);
    tmp.push_back(90);
}