#include <iostream>
#include <vector>
using namespace std;

int main(){
    int addvector1 {0};
    int addvector2 {0};
    int addvector3 {0};
    int addvector4 {0};
    vector <int> vector1 {0};
    vector <int> vector2 {0};

    cout<<"Adding value in vector1: ";
    cin>>addvector1;
    vector1.push_back(addvector1);
    cout<<"Adding value in vector2: ";
    cin>>addvector2;
    vector2.push_back(addvector2);

    cout<<vector1.at(1)<<endl;
    cout<<vector2.at(1)<<endl;

    cout<<vector1.size()<<endl;
    cout<<vector2.size()<<endl;

    cin>>addvector3;
    vector2.push_back(addvector3);
    cin>>addvector4;
    vector2.push_back(addvector4);
cout<<"========================================================/n";
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<vector2.at(2)<<endl;
    cout<<vector2.at(3)<<endl;
    //cout<<vector2.at(4)<<endl;

    vector <vector<int>> vector_2d {0};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
cout<<"===================================================/n";
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    cout<<vector_2d.at(1).at(2)<<endl;
    //cout<<vector_2d.at(0).at(0)<<endl;
    //cout<<vector_2d.at(0).at(0)<<endl;




    return 0;
}