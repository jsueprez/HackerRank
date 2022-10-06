#ifndef TIMECONVERSION_H
#define TIMECONVERSION_H

#include <string>
#include <iostream>

using std::string;
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

void executeTimeConversion(){
    auto str  {"06:40:03AM"};
    auto str1 {"02:34:50PM"};
    auto str2 {"12:40:22AM"};
    auto str3 {"12:45:54PM"};

    auto result = timeConversion(str3);
    //cout << result << '\n';
}

#endif // TIMECONVERSION_H
