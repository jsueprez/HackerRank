#include "day_6.h"
#include <iostream>
#include <queue>
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

int day_6::cookies(int k, vector<int> A) {
  /*
    PRIORITY_QUEUE is a container adaptor that provides constant time lookup of
    the largest (by default) element, at the expense of logarithmic insertion
    and extraction. A user-provided Compare can be supplied to change the
    ordering, e.g. using std::greater<T> would cause the smallest element to
    appear as the top(). Working with a priority_queue is similar to managing a
    heap in some random access container, with the benefit of not being able to
    accidentally invalidate the heap.
  */
  auto operations{0};
  if (std::all_of(A.begin(), A.end(), [k](const int x) { return x > k; }))
    return operations;

  std::priority_queue<int, vector<int>, std::greater<int>> pq1(A.begin(),
                                                               A.end());

  while (pq1.top() < k && pq1.size() > 1) {
    auto least_sweat{pq1.top()};
    pq1.pop();
    auto second_least_sweat{pq1.top()};
    pq1.pop();
    pq1.push(least_sweat + (second_least_sweat * 2));
    operations++;
  };
  return pq1.top() < k ? -1 : operations;
}