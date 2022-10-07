#ifndef DAY_1_H
#define DAY_1_H

#include <string>
#include <iostream>
#include <vector>
#include <numeric>

using std::string;
using std::vector;
using std::cout;
/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    auto ampm = s.find('P', s.length()-2);
    if(ampm != std::string::npos)
    {
        auto hour = std::stoi(s.substr(0,2));
        hour += 12;
        if(12 == hour)
            s.replace(0, 2, "00");
        else if (24 == hour)
            s.replace(0,2,"12");
        else
            s.replace(0,2, std::to_string(hour));
    }
    else
    {
        if(12 == std::stoi(s.substr(0,2)))
            s.replace(0, 2, "00");
    }

    s.erase(s.length() - 2);

    return s;
}

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

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    auto sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    auto minSum{sum - arr.back()};
    auto maxSum{sum - arr.front()};

    //cout << minSum << " " << maxSum << '\n';
}

/*
* Complete the 'findMedian' function below.
*
* The function is expected to return an INTEGER.
* The function accepts INTEGER_ARRAY arr as parameter.
*/
int findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() / 2];
}

string executeTimeConversion(){
    auto str  {"06:40:03AM"};
    auto str1 {"02:34:50PM"};
    auto str2 {"12:40:22AM"};
    auto str3 {"12:45:54PM"};

    return timeConversion(str3);
}

void executePlusMinus(){
    int n = 0;
    vector<int> v1{-4, 3, -9, 0,4,1};
    plusMinus(v1);
}

void executeMiniMax(){
    vector<int> v1 {256741038,623958417,467905213,714532089,938071625};
    miniMaxSum(v1);
}

int executeFindMedian(){
    vector<int> v1{0, 1, 2, 4, 6, 5, 3};
    return findMedian(v1);
}
#endif // DAY_1_H
