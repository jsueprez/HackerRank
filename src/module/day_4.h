#ifndef DAY4_H
#define DAY4_H

#include <vector>
#include <string>

class day4
{
public:
     /*
     * Complete the 'gridChallenge' function below.
     * Given a square grid of characters in the range ascii[a-z],
     * rearrange elements of each row alphabetically, ascending.
     * Determine if the columns are also in ascending alphabetical order,
     * top to bottom. Return YES if they are or NO if they are not.
     *
     * Example
     *  The grid is illustrated below.
     *      e b a c d       -->abcde
     *      f g h i j       -->fghij
     *      o l m k n       -->klmno
     *      t r p q s       -->pqrst
     *      x y w u v       -->uvwxy
     *
     * Sample Output
     *      TRUE
     *
     * Constraints
     * Each string consists of lowercase letters in the range ascii[a-z]
     * Output Format
     * For each test case, on a separate line print YES if it is possible
     * to rearrange the grid alphabetically ascending in both its rows and columns,
     * or NO otherwise.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING_ARRAY grid as parameter.
     */
    bool gridChallenge(std::vector<std::string> grid);
    bool executeGridChallenge();

    /*
     * Complete the 'superDigit' function below.
     *
     *
     * We define super digit of an integer
     * using the following rules:
     *
     * Given an integer, we need to find the super digit of the integer.
     *     If x
     *          has only 1 digit, then its super digit is x
     *     Otherwise,
     *          the super digit of x is equal to the super digit of the sum of the digits of x.
     *
     *     Ex.
     *
     *     super_digit(9875)   	9+8+7+5 = 29
     *     super_digit(29)      2 + 9 = 11
     *     super_digit(11)		1 + 1 = 2
     *     super_digit(2)		= 2
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. STRING n
     *  2. INTEGER k
     */

    int superDigit(std::string n, int k);
    int executeSuperDigit();

    /*
     * It is New Year's Day and people are in line for the Wonderland rollercoaster ride.
     * Each person wears a sticker indicating their initial position in the queue from to.
     * Any person can bribe the person directly in front of them to swap positions,
     * but they still wear their original sticker. One person can bribe at most two others.
     *
     * Determine the minimum number of bribes that took place to get to a given queue order.
     * Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic.
     *
     *      Ex.
     *      q = [ 1, 2, 3, 5, 4, 6, 7, 8 ]
     *
     *      If person bribes person , the queue will look like this: . Only
     *      bribe is required. Print 1.
     *
     *      q = [ 4, 1, 2, 3 ]
     *
     *      Person had to bribe people to get to the current position. Print Too chaotic.
     *
     */

    int minimumBribes(std::vector<int> q);
    int excecuteMinimumBribes();

    /*
     * Complete the 'truckTour' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
     */

    int truckTour(std::vector<std::vector<int>> petrolpumps);
    int executePetrolPumps();

};

#endif // DAY4_H
