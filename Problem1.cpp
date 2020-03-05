#include <iostream>
#include <array>
using namespace std;

bool k_check(array<int, 4> numbers_in, int k_in) {
        for (int i = 0; i < numbers_in.size(); i++)
        {
            for (int j = 0; j < numbers_in.size(); j++){
                if (i != j){
                    if (numbers_in[i]+numbers_in[j] == k_in ){
                        return true;
                    }
                }
            }
        }
        return false;
    }


int main(){

    

    const int k = 17;
    array<int, 4> numbers = {10,15,3,7};
    bool k_boolean = k_check(numbers, k);
    if(k_boolean){
        cout << "Two numbers in this array add up to " << k ;
    }
    else{
        cout << "There are no pairs of numbers in this array which add up to " << k ;
    }

}