#include <iostream>
using namespace std;

int main(){
    int cents {0};
    int dollar_value {100};
    int quarter_value {25};
    int dime_value {10};
    int nickel_value {5};
    int penny_value {1};
    int bal {0};
    int dollar {}, int quarter{}, int dime{}, int nickel {}, int penny{};

    cout<<"Enter the number of cents: ";
    cin>>cents;

    cout<<"You can provide this change as follows:"<<endl;

    dollar = cents/dollar_value;
    bal = cents - (dollar*dollar_value); 


    


    return 0;
}