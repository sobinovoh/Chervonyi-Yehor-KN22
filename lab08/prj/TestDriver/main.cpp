#include <iostream>
#include "ModulesChervonyi.h"
using namespace std;

int main()
{
    float test_input[5][3] = {{3, 2, 1}, {5, 1, 6}, {9, 4, 7}, {7, 1, 5}, {1, 0.2, 0.5}};
    float test_output[5] = {2.378, 4.51958, 3.58805, 5.81718, 1.54051};
    for (int i=0;i<sizeof(test_input)/sizeof(test_input[0]); i++){
        if(test_input[i][0]<test_input[i][1]){
            cout << "X must be more then Y";
        }
        else{
            float s = s_calculation(test_input[i][0], test_input[i][1], test_input[i][2]);
            if(s == test_output[i]){
                cout << "Test #" << i+1 << " PASSED" << endl;
            }
            else{
                cout << "Test #" << i+1 << " FAILED" << endl;
            }

        }

    }
}
