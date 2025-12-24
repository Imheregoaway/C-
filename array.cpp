#include <iostream>
using namespace std;

int main(){
    char arr [5] {'a','e','i','o','u'};
    arr [0] = 'g';
    cout<<arr[0];

    int movie_rating [3] [4] {
        {0,1,2,3},
        {1,2,3,4},
        {2,3,4,5}
    };

    return 0;
}