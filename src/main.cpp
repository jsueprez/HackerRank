#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <string>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <algorithm>

#include "plusMinus.h"

using std::vector;
using std::string;
using std::string_view;
using std::cout;
using std::cin;



/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    auto sum = std::accumulate(arr.begin(), arr.end(), 0LL);
    cout << sum - arr.back() << " " << sum - arr.front() << '\n';
}

/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a)
{
    sort(a.begin(), a.end());
    for(auto el{0}; el <=a.size(); el+=2)
    {
        if(a[el] == a[el + 1 ])
            continue;
        else
            return a[el];
    }
    return 0;
}

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr)
{
    auto size = arr.size() - 1;
    auto l_diagonal{0};
    auto r_diagonal{0};

    for(auto outter{0}; outter<=size; outter++)
    {
        l_diagonal += arr[outter][outter];
        r_diagonal += arr[outter][size-outter];
    }

    return abs(l_diagonal - r_diagonal);

}

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr)
{
    vector<int> v1(100,0);

    for (const int i : arr)
        v1[i]++;

    return v1;
}

/*
 * Complete the 'flippingMatrix' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

int flippingMatrix(vector<vector<int>> matrix)
{
    auto max_index{matrix.size() - 1};

    auto sum{0};

    for (auto i{0}; i < matrix.size()/2; i++)
        for (auto j{0}; j < matrix.size()/2; j++)
        {
            auto r1{i};
            auto r2{max_index - i};
            auto c1{j};
            auto c2{max_index - j};
            sum += std::max(std::max(matrix[r1][c1], matrix[r1][c2]),
                            std::max(matrix[r2][c1], matrix[r2][c2]));
        }

    return sum;
}

void findZigZagSequence(vector < int > a, int n){
    sort(a.begin(), a.end());
    auto mid {n/2};
    std::swap(a[mid], a[n-1]);

    auto st {mid + 1};
    auto ed { n - 2};
    while(st > ed){
        std::swap(a[st], a[ed]);
        st += 1;
        ed -= 1;
    }
    for(auto i{0}; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << std::endl;
}

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m)
{
    if(m == 1)
        return 2;
    else if(n % 2 == 0)
        return 2;
    else
        return 1;
}

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k)
{

    std::array<int, 26> letters;
    auto rotation = k % 26;
    std::iota(letters.begin(), letters.end() - rotation, 'a' + rotation);
    std::iota(letters.end() - rotation, letters.end(), 'a' );

    for(auto i = 0; i <= s.length(); i++)
    {
        if(!std::isalpha(s[i]))
            continue;

        if(std::isupper(s[i]))
            s.replace(i,1,1, std::toupper(letters[s[i] - 65]) );
        else
            s.replace(i,1,1, letters[s[i]-97]);

    }

    return s;
}

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

bool isPalindrome(string_view s1){

    auto front = s1.begin();
    auto back{s1.end() - 1};

    while(front < back){
        if(*front != *back)
            return false;
        front++;
        back--;
    }

    return true;
}

int palindromeIndex(string s)
{

    if(isPalindrome(s)) return -1;
    auto lenght{s.length()};

    auto s1{s};
    auto s2{s};
    std::reverse(s2.begin(),s2.end());

    auto first_diff = std::mismatch(s1.begin(), s1.end(),
                                         s2.begin(), s2.end());
    auto index = std::distance(s1.begin(), first_diff.first);

    s.erase(index,1);
    s1.erase(lenght - index - 1, 1);

    if(isPalindrome(s)){
        return index;
    }else if(isPalindrome(s1)){
       return lenght - index - 1;
    }

    return -1;

}


int getMaximumMEX(vector<int> arr) {
    for_each(arr.begin(), arr.end(), [](int &x){return x > 0 ? x-- : x; });
    return *std::max_element(arr.begin(), arr.end());
}

void executePlusMinus();
int main()
{
    int n = 0;
    vector<int> arr_temp_temp{-4, 3, -9, 0,4,1};
    plusMinus(arr_temp_temp);



    vector<int> v1 {256741038,623958417,467905213,714532089,938071625};
    miniMaxSum(v1);

    vector<vector<int>> v2{{11,2,4},
                           {4, 5, 6},
                           {10, 8, -12}};

    cout << diagonalDifference(v2) << '\n';

    vector<int> v3{63,25,73,1,98,73,56,84,86,57,
                   16,83,8,25,81,56,9,53,98,67,
                   99,12,83,89,80,91,39,86,76,
                   85,74,39,25,90,59,10,94,32,
                   44,3,89,30,27,79,46,96,27,
                   32,18,21,92,69,81,40,40,34,
                   68,78,24,87,42,69,23,41,78,
                   22,6,90,99,89,50,30,20,1,43,
                   3,70,95,33,46,44,9,69,48,33,
                   60,65,16,82,67,61,32,21,79,75,
                   75,13,87,70,33};
    auto v3_temp = countingSort(v3);
    for (auto el{0}; el < v3_temp.size(); el++)
    {
        if(el == v3_temp.size() - 1)
            cout << v3_temp[el] << '\n';
        else
            cout << v3_temp[el] << ", ";

        if((el + 1)  % 8 == 0 )
            cout << '\n';
    }

    vector<vector<int>> matrix{{112, 42, 83, 119},
                               {56, 125, 56, 49},
                               {15, 78, 101, 43},
                               {62, 98, 114, 108}};

    cout << flippingMatrix(matrix) << '\n';

    vector<int> v4{1, 2, 3, 4, 5, 6, 7};
    auto size_v4{7};
    findZigZagSequence(v4, size_v4);

    cout << towerBreakers(374625, 796723) << '\n';

    auto s1{"middle-Outz"};
    auto s2{"Hello_World!"};
    auto s3{"www.abc.xy"};
    cout << caesarCipher(s3, 87) << '\n';


    auto s4{"aaabaaaaaaaaaaa"};

    cout << palindromeIndex(s4) << '\n';

    return 0;
}


