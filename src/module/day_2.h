#ifndef DAY_2_H
#define DAY_2_H

#include <vector>

using std::vector;

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
 * Sean invented a game involving a matrix where each cell of the matrix contains an integer. He
can reverse any of its rows or columns any number of times. The goal of the game is to maximize the sum
of the elements in the submatrix located in the upper-left quadrant of the matrix.
Given the initial configurations for matrices, help Sean reverse the rows and columns of each matrix in the
best possible way so that the sum of the elements in the matrix's upper-left quadrant is maximal
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

int executeLonelyInteger(){
    vector<int> v1 {1,2,3,4,3,2,1};
    return lonelyinteger(v1);
}

int executeDiagonalDifference(){
    vector<vector<int>> v1{{11,  2,   4},
                           {4,   5,   6},
                           {10,  8, -12}};

    return diagonalDifference(v1);
}

vector<int> executeCountingSort(){
    vector<int> v1{63,25,73,1,98,73,56,84,86,57,
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
    return countingSort(v1);
}

int executeFlippingMatrix(){
    vector<vector<int>> matrix{{112, 42, 83, 119},
                               {56, 125, 56, 49},
                               {15, 78, 101, 43},
                               {62, 98, 114, 108}};

    return flippingMatrix(matrix);
}
#endif // DAY_2_H
