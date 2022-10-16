#ifndef DAY_5_H
#define DAY_5_H

#include <string>
#include <vector>

class SinglyLinkedListNode {
public:
  int data;
  SinglyLinkedListNode *next;

  SinglyLinkedListNode(int node_data) {
    this->data = node_data;
    this->next = nullptr;
  }
};

class SinglyLinkedList {
public:
  SinglyLinkedListNode *head;
  SinglyLinkedListNode *tail;

  SinglyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
  }

  void insert_node(int node_data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

    if (!this->head) {
      this->head = node;
    } else {
      this->tail->next = node;
    }

    this->tail = node;
  }
};

class day_5 {
public:
  // Complete the mergeLists function below.

  /*
   * For your reference:
   *
   * SinglyLinkedListNode {
   *     int data;
   *     SinglyLinkedListNode* next;
   * };
   *
   */
  SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1,
                                   SinglyLinkedListNode *head2);

  /*
   * A bracket is considered to be any one of the following characters: (, ), {,
   * }, [, or ]. Two brackets are considered to be a matched pair if the an
   * opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket
   * (i.e., ), ], or }) of the exact same type. There are *three types of
   * matched pairs of brackets: [], {}, and ().
   *
   * A matching pair of brackets is not balanced if the set of brackets it
   * encloses are not matched. For example, {[(])} is not balanced because the
   * contents in between { and } are not balanced. The pair of square brackets
   * encloses a single, unbalanced opening bracket, (, and the pair of
   * parentheses encloses a single, unbalanced closing square bracket, ]. By
   * this logic, we say a sequence of brackets is balanced if the following
   * conditions are met:
   *
   *      It contains no unmatched brackets.
   *      The subset of brackets enclosed within the confines of a matched pair
   * of brackets is also a matched pair of brackets. Given strings of brackets,
   * determine whether each sequence of brackets is balanced. If a string is
   * balanced, return YES. Otherwise, return NO.
   *
   * Complete the 'isBalanced' function below.
   *
   * The function is expected to return a STRING.
   * The function accepts STRING s as parameter.
   */

  std::string isBalanced(std::string s);

  /*
   * Complete the 'pairs' function below.
   *
   * The function is expected to return an INTEGER.
   * The function accepts following parameters:
   *  1. INTEGER k
   *  2. INTEGER_ARRAY arr
   */

  int pairs(int k, std::vector<int> arr);
  int ex1();
  int ex2();
};

#endif // DAY_5_H
