#include "day_5.h"
#include "gtest/gtest.h"

class TestingDay5 : public ::testing::Test {
public:
  void SetUp() {}

  void TearDown() {}

  day_5 d5;
};

TEST_F(TestingDay5, mergeLinkedList) {
  SinglyLinkedList *list_1 = new SinglyLinkedList();

  std::vector<int> v1{8, 11, 17, 20, 20, 42, 83, 94, 95};
  for (const auto &el : v1)
    list_1->insert_node(el);

  SinglyLinkedList *list_2 = new SinglyLinkedList();
  std::vector<int> v2{1};
  for (const auto &el : v2)
    list_2->insert_node(el);

  SinglyLinkedListNode *list_3 = d5.mergeLists(list_1->head, list_2->head);

  while (list_3 != nullptr) {
    // std::cout << list_3->data << ",";
    list_3 = list_3->next;
  }

  std::cout << '\n';
}

TEST_F(TestingDay5, isbalance_case0) {
  std::string s{"{[()]}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}

TEST_F(TestingDay5, isbalance_case0_1) {
  std::string s{"{[(])}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "NO");
}
TEST_F(TestingDay5, isbalance_case0_2) {
  std::string s{"{{[[(())]]}}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}

TEST_F(TestingDay5, isbalance_case1) {
  std::string s{"{{([])}}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}

TEST_F(TestingDay5, isbalance_case1_1) {
  std::string s{"{{)[](}}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "NO");
}
TEST_F(TestingDay5, isbalance_case2_0) {
  std::string s{"{(([])[])[]}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}
TEST_F(TestingDay5, isbalance_case2_1) {
  std::string s{"{(([])[])[]]}"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "NO");
}

TEST_F(TestingDay5, isbalance_case2_2) {
  std::string s{"{(([])[])[]}[]"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}

TEST_F(TestingDay5, isbalance_case4_0) {
  std::string s{"[()][{}()][](){}([{}(())([[{}]])][])[]([][])(){}{{}{[](){}}}()"
                "[]({})[{}{{}([{}][])}]"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "YES");
}

TEST_F(TestingDay5, isbalance_case4_5) {
  std::string s{"}(]}){"};
  std::string result{d5.isBalanced(s)};

  EXPECT_EQ(result, "NO");
}

TEST_F(TestingDay5, isbalance_case4_16) {
  std::string s{"{{}("};
  std::string result{d5.isBalanced(s)};
  EXPECT_EQ(result, "NO");
}

TEST_F(TestingDay5, pairs_0_0) {
  std::vector<int> v1{1, 5, 3, 4, 2};
  auto k{2};
  auto result{d5.pairs(k, v1)};
  EXPECT_EQ(result, 3);
}

TEST_F(TestingDay5, pairs_17) {
  std::vector<int> v1{1, 3, 5, 8, 6, 4, 2};
  auto k{2};
  auto result{d5.pairs(k, v1)};
  EXPECT_EQ(result, 5);
}

TEST_F(TestingDay5, pairs_15) {
  std::vector<int> v1{1, 5, 3, 4, 2};
  auto k{2};
  auto result{d5.pairs(k, v1)};
  EXPECT_EQ(result, 3);
}