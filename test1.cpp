#include <iostream>
using namespace std;

int main(){
    cout<<"================================="<<endl;
    cout<<"==========This is Frank's Carpet Service================"<<endl;
    
    int small_room {0};
    int large_room {0};
    const int small_room_charge {25};
    const int large_room_charge {35};
    const float tax {6.6};
    float Cost {0.0};
    float Total {0.0};

    cout<<"Number of small room u want:";
    cin>>small_room;
    cout<<"Number of large room u want:";
    cin>>large_room;

    cout<<"Estimate Cost without tax"<<endl;
    Cost = small_room * small_room_charge + large_room * large_room_charge;
    cout<<"Cost withouttax: "<<Cost<<endl;
    cout<<"Tax :"<<tax<<endl;

    cout<<"=================================================="<<endl;

    Total = Cost * tax;
    cout<<"Total:"<<Total<<endl;






    return 0;
}