#include <iostream>
#include <algorithm>

#include "day_1.h"
#include "day_2.h"
#include "day_3.h"

using std::cout;
using std::cin;


int getMaximumMEX(vector<int> arr) {
    for_each(arr.begin(), arr.end(), [](int &x){return x > 0 ? x-- : x; });
    return *std::max_element(arr.begin(), arr.end());
}

int main()
{
    // DAY 1
    executePlusMinus();
    executeMiniMax();
    cout << "TimeConversion : " << executeTimeConversion() << '\n';
    cout << "FindMedian : " <<  executeFindMedian() << '\n';

    // DAY 2
    cout << "LonelyInteger : " <<  executeLonelyInteger() << '\n';
    cout << "DiagonalDifference : " <<  executeDiagonalDifference() << '\n';
    cout << "CountingSort : ";
    auto v_temp{executeCountingSort()};
    for_each(v_temp.begin(), v_temp.end(), [](const int el){ cout << el;});
    cout << "FlippingMatrix : " <<  executeFlippingMatrix() << '\n';

    // DAY 3
    executeZigzagSequence();
    cout << "ToweBreakers : " <<  executeToweBreakers() << '\n';
    cout << "CaesarCipher : " <<  executeCaesarCipher() << '\n';
    cout << "PalindromeIndex : " <<  executePalindromeIndex() << '\n';

    // DAY 4
    return 0;
}


