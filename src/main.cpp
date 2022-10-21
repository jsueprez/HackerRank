#include <algorithm>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

#include "day_1.h"
#include "day_2.h"
#include "day_3.h"
#include "day_4.h"
#include "day_5.h"
#include "day_6.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  // DAY 1
  executePlusMinus();
  executeMiniMax();
  cout << "TimeConversion : " << executeTimeConversion() << '\n';
  cout << "FindMedian : " << executeFindMedian() << '\n';

  // DAY 2
  cout << "LonelyInteger : " << executeLonelyInteger() << '\n';
  cout << "DiagonalDifference : " << executeDiagonalDifference() << '\n';
  cout << "CountingSort : ";
  auto v_temp{executeCountingSort()};
  for_each(v_temp.begin(), v_temp.end(), [](const int el) { cout << el; });
  cout << "FlippingMatrix : " << executeFlippingMatrix() << '\n';

  // DAY 3
  executeZigzagSequence();
  cout << "ToweBreakers : " << executeToweBreakers() << '\n';
  cout << "CaesarCipher : " << executeCaesarCipher() << '\n';
  cout << "PalindromeIndex : " << executePalindromeIndex() << '\n';

  // DAY 4

  // DAY 5
  // auto n_queries{0};
  // cin >> n_queries;
  // string dummy{""};
  // getline(cin, dummy);
  // vector<vector<int>> queries{};
  // for (auto q{0}; q < n_queries; q++)
  // {
  //     string query{""};

  //     getline(cin, query);

  //     std::stringstream query_temp(query);

  //     auto type{0};
  //     auto value{0};
  //     vector<int> query_element{};
  //     query_temp >> type;
  //     query_element.push_back(type);
  //     if (type == 1)
  //     {
  //         query_temp >> value;
  //         query_element.push_back(value);
  //     }
  //     queries.push_back(query_element);
  // }

  // std::list<int> list{};

  // for (const auto &q : queries)
  // {
  //     if (q[0] == 1)
  //     {
  //         list.push_back(q[1]);
  //     }
  //     else if (q[0] == 2)
  //     {
  //         list.pop_front();
  //     }
  //     else if (q[0] == 3)
  //     {
  //         cout << list.front() << '\n';
  //     }
  // }

  // DAY 6
  auto n_queries{0};
  cin >> n_queries;
  string dummy{""};
  getline(cin, dummy);
  vector<vector<string>> queries{};
  for (auto q{0}; q < n_queries; q++) {
    string query{""};

    getline(cin, query);

    std::stringstream query_temp(query);

    auto type{0};
    string value{};
    vector<string> query_element{};
    query_temp >> type;
    query_element.push_back(std::to_string(type));
    if (type < 4) {
      query_temp >> value;
      query_element.push_back(std::move(value));
    }
    queries.push_back(query_element);
  }

  day_6::TextEditor editor("");

  for (const auto &q : queries) {
    if (q[0] == "1")
      editor.append(q[1]);
    else if (q[0] == "2")
      editor.erase(stoi(q[1]));
    else if (q[0] == "3")
      cout << editor.get_ch(stoi(q[1])) << '\n';
    else if (q[0] == "4")
      editor.undo();
  }

  return 0;
}