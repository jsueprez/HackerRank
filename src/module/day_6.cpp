#include "day_6.h"

using namespace day_6;
using std::string;

void TextEditor::append(const string &str1) {
  string result{m_str.append(str1)};
  m_history.push(result);
}

void TextEditor::erase(const int n) {
  if (n <= m_str.length()) {
    m_str.erase(m_str.end() - n, m_str.end());
    m_history.push(m_str);
  }
}

void TextEditor::undo() { m_history.pop(); }
