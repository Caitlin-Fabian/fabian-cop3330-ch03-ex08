#include "std_lib_facilities.h"
int main()

{
    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    if((number % 2) == 0){
        cout << "The valaue " << number << " is an even number.";
    }
    else{
        cout << " The value " << number << " is an odd number.";
    }

    return 0;
    
}
