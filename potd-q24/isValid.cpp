#include <string>
#include <stack>

using namespace std;

bool isValid(string input) {
    stack<char> st;
    for (string::iterator it = input.begin(); it != input.end(); it++){
      if (*it == '(' || *it == '[' || *it == '{')
        st.push(*it);
      else if(*it == ')' || *it == ']' || *it == '}'){
        if (st.empty())
          return false;
        if (*it == ')' && st.top() == '(')
          st.pop();
        else if (*it == ']' && st.top() == '[')
          st.pop();
        else if (*it == '}' && st.top() == '{')
          st.pop();
        else
          return false;
      }
    }
    if (st.empty())
      return true;
    else
      return false;
}
