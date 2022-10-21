#include "day_6.h"
#include <iostream>
#include <vector>

using namespace day_6;
using std::string;
using std::vector;

void TextEditor::append(const string &str1) {
  string result{m_str.append(str1)};
  m_history.push(result);
}

void TextEditor::erase(int n) {
  if (static_cast<std::size_t>(n) <= m_str.length()) {
    m_str.erase(m_str.end() - n, m_str.end());
    m_history.push(m_str);
  }
}

void TextEditor::undo() {
  m_history.pop();
  m_str = m_history.top();
}

int get_operations(int k, vector<int> A) {
  if (std::any_of(A.begin(), A.end(), [k](const int x1) { return x1 < k; })) {
    vector<>
  }
}

int day_6::cookies(int k, vector<int> A) {
  /*
    1.Sort the array
    2.Check whether there is a number less than k
    3.if no return 0
    4.if yes count++, extract A[0] and A[1] and insert back A[0] + A[1*2]
    5. repeat 2

    First do  Brute Force but
    Recurssion possible solution
  */
  std::sort(A.begin(), A.end());

  return 3;
}