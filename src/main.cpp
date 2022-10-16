#include <iostream>
#include <algorithm>

#include "day_1.h"
#include "day_2.h"
#include "day_3.h"
#include "day_4.h"
#include "day_5.h"

#include <list>
#include <string>
#include <sstream>

using std::cout;
using std::cin;


int getMaximumMEX(vector<int> arr) {
    for_each(arr.begin(), arr.end(), [](int &x){return x > 0 ? x-- : x; });
    return *std::max_element(arr.begin(), arr.end());
}

int main()
{
//    // DAY 1
//    executePlusMinus();
//    executeMiniMax();
//    cout << "TimeConversion : " << executeTimeConversion() << '\n';
//    cout << "FindMedian : " <<  executeFindMedian() << '\n';

//    // DAY 2
//    cout << "LonelyInteger : " <<  executeLonelyInteger() << '\n';
//    cout << "DiagonalDifference : " <<  executeDiagonalDifference() << '\n';
//    cout << "CountingSort : ";
//    auto v_temp{executeCountingSort()};
//    for_each(v_temp.begin(), v_temp.end(), [](const int el){ cout << el;});
//    cout << "FlippingMatrix : " <<  executeFlippingMatrix() << '\n';

//    // DAY 3
//    executeZigzagSequence();
//    cout << "ToweBreakers : " <<  executeToweBreakers() << '\n';
//    cout << "CaesarCipher : " <<  executeCaesarCipher() << '\n';
//    cout << "PalindromeIndex : " <<  executePalindromeIndex() << '\n';

    // DAY 4

    // DAY 5
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    cout << "put something" << std::endl;
    auto n_queries{0};
    cin >> n_queries;
    vector<vector<int>> queries{};
    for(auto q{0}; q <= n_queries; q++){

        string query{""};

        getline(cin, query, '\0');

        std::stringstream query_temp(query);

        auto type{0};
        auto value{0};
        while(1) {
           vector<int> query_element{};
           query_temp >> type;
           query_element.push_back(type);
           if(type == 1){
               query_temp >> value;
           }
           queries.push_back(query_element);
        }

    }

    for(auto const &el : queries){
        cout << el[0];
        if(el[0] == 1)
            cout << el[1];
        else
            cout << '\n';
    }
    return 0;
}



