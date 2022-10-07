#ifndef DAY_3_H
#define DAY_3_H

#include <vector>
#include <array>
#include <string>
#include <iostream>
#include <numeric>

using std::vector;
using std::string;
using std::array;
using std::cout;

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
        //if(i > 0) cout << " ";
        //cout << a[i];
    }
    //cout << std::endl;
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

bool isPalindrome(string s1){

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

void executeZigzagSequence(){
    vector<int> v1{1, 2, 3, 4, 5, 6, 7};
    auto size{7};
    findZigZagSequence(v1, size);
}

int executeToweBreakers(){
    return towerBreakers(374625, 796723);
}

string executeCaesarCipher(){
    auto s1{"middle-Outz"};
    auto s2{"Hello_World!"};
    auto s3{"www.abc.xy"};

    return caesarCipher(s3, 87);
}

int executePalindromeIndex(){
    auto s1{"aaab"};
    return palindromeIndex(s1) ;
}

#endif // DAY_3_H
