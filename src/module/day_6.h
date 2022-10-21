#ifndef DAY_6_H
#define DAY_6_H

#pragma once

#include <stack>
#include <string>

namespace day_6 {

class TextEditor {
private:
  std::string m_str;
  std::string m_previous_str;
  std::stack<std::string> m_history;

public:
  TextEditor(const std::string &str) : m_str(std::move(str)) {
    m_history.push(m_str);
  };

  std::string_view get_top_history() const { return m_history.top(); };
  std::string_view get_str() const { return m_str; };
  void append(const std::string &str1);
  void erase(const int n);
  const char get_ch(int pos) const { return m_str[pos - 1]; };
  void undo();
};

int cookies(int k, std::vector<int> A);

} // namespace day_6

#endif