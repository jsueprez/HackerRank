#include "day_5.h"

#include <algorithm>
#include <set>
#include <stack>
#include <vector>

using std::stack;
using std::string;
using std::vector;

SinglyLinkedListNode *day_5::mergeLists(SinglyLinkedListNode *head1,
                                        SinglyLinkedListNode *head2) {
  SinglyLinkedList *merged_list = new SinglyLinkedList();

  // There is a sort algorithm to do this kind of operations[merge Sort]
  vector<int> list;

  while (head1 != nullptr) {
    list.push_back(head1->data);
    head1 = head1->next;
  }
  while (head2 != nullptr) {
    list.push_back(head2->data);
    head2 = head2->next;
  }

  std::sort(list.begin(), list.end());

  for (auto const &data : list)
    merged_list->insert_node(data);

  return merged_list->head;
}

string day_5::isBalanced(string s) {
  std::stack<char> st;
  auto result{"YES"};
  for (const auto &bracket : s) {
    if (bracket == '[' || bracket == '{' || bracket == '(') {
      st.push(bracket);
    } else if (bracket == ']' || bracket == '}' || bracket == ')') {
      if (st.empty())
        return "NO";
      if ((bracket == ']' && st.top() == '[') ||
          (bracket == '}' && st.top() == '{') ||
          (bracket == ')' && st.top() == '(')) {
        st.pop();
        continue;
      }
      return "NO";
    }
  }

  if (!st.empty())
    return "NO";

  return result;
}

int day_5::pairs(int k, vector<int> arr) {
  // BRUTE Force
  auto counts{0};
  // for (auto i{0}; i < arr.size(); i++) { // O(n*n) = O(n^2)
  //   for (auto j{i}; j < arr.size(); j++) {
  //     if (abs(arr[i] - arr[j]) == k)
  //       counts++;
  //   }
  // }

  // improved Algo
  // BM_Pairs_case1               2748 ns         2748 ns       254900
  std::set<int> st(arr.begin(), arr.end()); // O(n)
  for (auto const &el : arr) {              // O(n)
    if (el - k < 0)
      continue;
    if (!st.insert(el - k).second)
      counts++;
  }

  return counts;
}

int day_5::ex1() {

  std::vector<int> v1{1,   5,   3,   4,   2,   7,   10,  15,  19,  18,
                      25,  26,  24,  22,  23,  20,  114, 17,  9,   788,
                      765, 732, 741, 147, 198, 187, 154, 165, 132, 312,
                      345, 378, 396, 569, 568, 567, 564, 565, 555, 666,
                      333, 999, 888, 444, 111, 222};
  auto k{2};
  auto counts{0};
  std::set<int> st(v1.begin(), v1.end()); // O(n)
  for (auto const &el : v1) {             // O(n)
    if (el - k < 0)
      continue;
    if (!st.insert(el - k).second)
      counts++;
  }

  return counts;
}

int day_5::ex2() {

  std::vector<int> v1{1,   5,   3,   4,   2,   7,   10,  15,  19,  18,
                      25,  26,  24,  22,  23,  20,  114, 17,  9,   788,
                      765, 732, 741, 147, 198, 187, 154, 165, 132, 312,
                      345, 378, 396, 569, 568, 567, 564, 565, 555, 666,
                      333, 999, 888, 444, 111, 222};
  auto k{2};
  auto counts{0};
  for (auto i{0}; i < v1.size(); i++) { // O(n*n) = O(n^2)
    for (auto j{i}; j < v1.size(); j++) {
      if (abs(v1[i] - v1[j]) == k)
        counts++;
    }
  }

  return counts;
}
