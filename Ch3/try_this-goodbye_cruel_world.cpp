#include "../std_lib_facilities.h"

/*

int Main() {
    STRING s = "Goodbye, cruel world!";
    cOut << S << '\n';
}

// 1-1-goodbye_cruel_world.cpp: In function ‘int Main()’:
// 1-1-goodbye_cruel_world.cpp:6:5: error: ‘STRING’ was not declared in this scope
//      STRING s = "Goodbye, cruel world! ";
//      ^~~~~~
// 1-1-goodbye_cruel_world.cpp:6:5: note: suggested alternative: ‘STA_INS’
//      STRING s = "Goodbye, cruel world! ";
//      ^~~~~~
//      STA_INS
// 1-1-goodbye_cruel_world.cpp:7:5: error: ‘cOut’ was not declared in this scope
//      cOut << S << '\n';
//      ^~~~
// 1-1-goodbye_cruel_world.cpp:7:5: note: suggested alternative: ‘cbrt’
//      cOut << S << '\n';
//      ^~~~
//      cbrt
// 1-1-goodbye_cruel_world.cpp:7:13: error: ‘S’ was not declared in this scope
//      cOut << S << '\n';
//              ^
// 1-1-goodbye_cruel_world.cpp:8:1: warning: no return statement in function returning non-void [-Wreturn-type]
//  }

// */


int main() {
    string s = "Goodbye, cruel world!";
    cout << s << '\n';
};