#include "../std_lib_facilities.h"

int area(int length, int width)
{
    return length*width;
};

int main()
{

    // try_this-type_errors.cpp:16:14: error: ‘arena’ was not declared in this scope; did you mean ‘area’?
    //    16 |     int s1 = arena(7, 7);
    //       |              ^~~~~
    //       |              area

    // int s1 = arena(7, 7);

    // try_this-type_errors.cpp:25:18: error: too few arguments to function ‘int area(int, int)’
    //    25 |     int s2 = area(7);
    //       |              ~~~~^~~
    // try_this-type_errors.cpp:3:5: note: declared here
    //     3 | int area(int length, int width) {
    //       |     ^~~~

    // int s2 = area(7);

    // try_this-type_errors.cpp:36:19: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    //    36 |     int s3 = area("seven", 2);
    //       |                   ^~~~~~~
    //       |                   |
    //       |                   const char*
    // try_this-type_errors.cpp:3:14: note:   initializing argument 1 of ‘int area(int, int)’
    //     3 | int area(int length, int width) {
    //       |     

    // int s3 = area("seven", 2);

};