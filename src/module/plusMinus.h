#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <iostream>
#include <vector>

using std::vector;
using std::cout;

bool isZero(const int x, int& positives, int& negatives )
{
    auto zero{false};
    x > 0 ? positives++
          : x < 0 ? negatives++
                  : zero = true ;

    return zero;
}

void plusMinus(vector<int> arr)
{
    auto arr_lenght = arr.size();
    auto positives{0};
    auto negatives{0};
    auto zeros = std::count_if(arr.begin(), arr.end(),
                               [&positives, &negatives](const int x){ return isZero(x, positives, negatives);});


    /*cout.setf( std::ios::fixed, std:: ios::floatfield );
    cout.precision(6);
    cout << static_cast<double>(positives) / static_cast<double>(arr_lenght) << "\n"
         << static_cast<double>(negatives) / static_cast<double>(arr_lenght) << "\n"
         << static_cast<double>(zeros) / static_cast<double>(arr_lenght) << "\n";*/
}

void executePlusMinus(){
    int n = 0;
    vector<int> arr_temp_temp{-4, 3, -9, 0,4,1};
    plusMinus(arr_temp_temp);
}

#endif // PLUSMINUS_H
