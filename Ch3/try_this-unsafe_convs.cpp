#include "../std_lib_facilities.h"

/*
2
d==2,i==2,i2==2,char()
3
d==3,i==3,i2==3,char()
150
d==150,i==150,i2==-106,char(�)
1500
d==1500,i==1500,i2==-36,char(�)
-10
d==-10,i==-10,i2==-10,char(�)
56
d==56,i==56,i2==56,char(8)
89
d==89,i==89,i2==89,char(Y)
128
d==128,i==128,i2==-128,char(�)
56.9
d==56.9,i==56,i2==56,char(8)
56.2
d==56.2,i==56,i2==56,char(8)
*/

int main() {
    double d = 0;
    while(cin>>d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
            << ",i==" << i
            << ",i2==" << i2
            << ",char(" << c << ")\n";
    };
};