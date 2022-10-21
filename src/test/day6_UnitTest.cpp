#include "day_6.h"
#include "gtest/gtest.h"

using namespace day_6;

class TestingDay6 : public ::testing::Test {
public:
  void SetUp() {}

  void TearDown() {}
};

TEST_F(TestingDay6, append__0) {
  TextEditor editor("Hello ");
  std::string str1{"world"};
  editor.append(str1);
  EXPECT_EQ(editor.get_str(), "Hello world");
  EXPECT_EQ(editor.get_top_history(), "Hello world");
}

TEST_F(TestingDay6, erase_n_shorter_than_str) {
  TextEditor editor("Hello world");
  editor.erase(6);
  EXPECT_EQ(editor.get_str(), "Hello");
  EXPECT_EQ(editor.get_top_history(), "Hello");
}

TEST_F(TestingDay6, erase_n_longer_than_str) {
  TextEditor editor("Hello world");
  editor.erase(20);
  EXPECT_EQ(editor.get_str(), "Hello world");
  EXPECT_EQ(editor.get_top_history(), "Hello world");
}

TEST_F(TestingDay6, get_character) {
  TextEditor editor("Hello world");
  auto result = editor.get_ch(7);
  EXPECT_EQ(result, 'w');
}

TEST_F(TestingDay6, undo_operation) {
  TextEditor editor("Hello world");
  std::string str1{" I'm"};
  std::string str2{" Antonio"};
  editor.append(str1);
  editor.append(str2);
  editor.undo();
  editor.undo();
  EXPECT_EQ(editor.get_top_history(), "Hello world");
}

TEST_F(TestingDay6, cookies) {
  std::vector<int> v1{2, 7, 3, 6, 4, 6};
  auto k{9};
  EXPECT_EQ(cookies(k, v1), 4);
}