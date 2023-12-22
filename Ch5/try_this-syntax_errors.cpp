#include "../std_lib_facilities.h"

int area(int length, int width) 
{
    return length*width;
};

int main() 
{

    // try_this-syntax_errors.cpp:16:23: error: expected ‘)’ before ‘;’ token
    //   16 |     int s1 = area(7, 7;
    //      |                  ~ ^
    //      |                    )

    // int s1 = area(7, 7);

    // try_this-syntax_errors.cpp:44:1: error: expected ‘,’ or ‘;’ before ‘}’ token
    //   44 | };
    //      | ^

    // int s2 = area(7,7)

    // try_this-syntax_errors.cpp:29:5: error: ‘Int’ was not declared in this scope; did you mean ‘int’?
    //   29 |     Int s3 = area(7);
    //      |     ^~~
    //      |     int

    // Int s3 = area(7, 7);

    // try_this-syntax_errors.cpp:42:24: warning: missing terminating ' character
    //    42 |     int s4 = area('7', '7);
    //       |                        ^
    // try_this-syntax_errors.cpp:42:24: error: missing terminating ' character
    //    42 |     int s4 = area('7', '7);
    //       |                        ^~~~
    // try_this-syntax_errors.cpp: In function ‘int main()’:
    // try_this-syntax_errors.cpp:44:1: error: expected primary-expression before ‘}’ token
    //    42 | };
    //       | ^

    // int s4 = area('7', '7);

};