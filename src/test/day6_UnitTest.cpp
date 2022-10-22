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

TEST_F(TestingDay6, cookies_test_0) {
  std::vector<int> v1{1, 2, 3, 9, 10, 12};
  auto k{7};
  EXPECT_EQ(cookies(k, v1), 2);
}
TEST_F(TestingDay6, cookies_test_0_1) {
  std::vector<int> v1{1, 1, 1};
  auto k{10};
  EXPECT_EQ(cookies(k, v1), -1);
}

TEST_F(TestingDay6, cookies_test_2) {
  std::vector<int> v1{52, 96, 13, 37};
  auto k{10};
  EXPECT_EQ(cookies(k, v1), 0);
}

TEST_F(TestingDay6, cookies_test_3) {
  std::vector<int> v1{13, 47, 74, 12, 89, 74, 18, 38};
  auto k{90};
  EXPECT_EQ(cookies(k, v1), 5);
}

TEST_F(TestingDay6, cookies_test_4) {
  std::vector<int> v1{1, 62, 14};
  auto k{9};
  EXPECT_EQ(cookies(k, v1), 1);
}

TEST_F(TestingDay6, cookies_test_5) {
  std::vector<int> v1{6214, 8543, 9266, 1150, 7498, 7209, 9398, 1529, 1032,
                      7384, 6784, 34,   1449, 7598, 8795, 756,  7803, 4112,
                      298,  4967, 1261, 1724, 4272, 1100, 9373};
  auto k{3581};
  EXPECT_EQ(cookies(k, v1), 7);
}