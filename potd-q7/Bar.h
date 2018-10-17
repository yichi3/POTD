// your code here
#ifndef BAR_H
#define BAR_H
#include <string>
#include "Foo.h"
using namespace std;

namespace potd{
  class Bar{
    private:
      Foo * f_;
    public:
      Bar(string);
      Bar(const Bar &);
      ~Bar();
      Bar & operator = (const Bar &);
      string get_name();
  };
}
/*
void helper_delete(Bar *bar);
Bar * helper_create(string name);
*/
#endif
