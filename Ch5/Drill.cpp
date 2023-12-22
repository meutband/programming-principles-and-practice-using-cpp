#include "../std_lib_facilities.h"

int main()
    
    try {
        
        // Cout << "Success!\n";
        cout << "Success1!\n"; // lower-case 'c' on 'cout'
        
        // cout << "Success!\n;
        cout << "Success2!\n"; // end closing quotes '"'

        // cout << "Success" << !\n"
        cout << "Success3" << "!\n"; // beginning quote on '!\n'

        // cout << success << '\n';
        cout << "Success4!" << '\n'; // missing quotes around 'success'

        // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        int res = 7; vector<int> a(10); a[5] = res; cout << "Success5!\n"; // string -> int
        
        // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> b(10); b[5] = 7; if (b[5]==7) cout << "Success6!\n"; // index parentheses to brackets. != -> ==

        // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        bool cond = true; if (cond) cout << "Success7!\n"; else cout << "Fail!\n"; // init cond value to true

        // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = false; if (!c) cout << "Success8!\n"; else cout << "Fail!\n"; // if true -> if false

        // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape"; bool d = "fool">s; if (d) cout << "Success9!\n"; // fix speeling of boo(l), < --> >

        // string s = "ape"; if (s=="fool") cout << "Success!\n";
        string e = "ape"; if (e!="fool") cout << "Success10!\n"; // == -> !=

        // string s = "ape"; if (s=="fool") cout < "Success!\n";
        string f = "ape"; if (f!="fool") cout << "Success11!\n"; // == -> != and < to << for cout
        
        // string s = "ape"; if (s+"fool") cout < "Success!\n";
        string g = "ape"; if (g!="fool") cout << "Success12!\n"; // + -> != and < to << for cout

        // vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        vector<char> h(5); for (int i=0; i<h.size(); ++i) ; cout << "Success13!\n"; // 0 -> i
        
        // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<char> j(5); for (int i=0; i<=j.size(); ++i) ; cout << "Success14!\n"; // no error
        
        // string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        string k = "Success15!\n"; for (int i=0; i<k.size(); ++i) cout << k[i]; // string.size() instead of hardcoded '6'
        
        // if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        if (true) cout << "Success16!\n"; else cout << "Fail!\n"; // remove then
        
        // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x = 2000; char l = x; if (l!=2000) cout << "Success17!\n"; // == -> !=
        
        // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        string m = "Success18!\n"; for (int i=0; i<m.size(); ++i) cout << m[i]; // string.size() instead of hardcoded '10'
        
        // vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<char> n(5); for (int i=0; i<=n.size(); ++i) ; cout << "Success19!\n"; // missing type of vector 
        
        // int i=0; int j=9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int i=0; int o=9; while (i<10) ++i; if (o<i) cout << "Success20!\n"; // ++j -> ++i
        
        // int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";
        int p = 2; double q = 5/(p-1); if (q==2*(p+0.5)) cout << "Success21!\n"; // x-1 (x-2 = divide by 0) and (x+.5)
        
        // string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        vector<string> r = {"Success22!\n"}; for (int i=0; i<r.size(); ++i) cout << r[i]; // string<char> to vector<string>, .size() instead of '10'. <= --> <
        
        // int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int u=0; int t=0; while (u<10) ++u; if (t<u) cout << "Success23!\n";
        
        // int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
        int v=4; double w = 5/(v-2); if (w=2*v+0.5) cout << "Success24!\n";
        
        // cin << "Success!\n";
        cout << "Success25!\n"; // cin -> cout

        keep_window_open();
        return 0;
    }
    
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
}