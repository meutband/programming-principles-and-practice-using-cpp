#include "../std_lib_facilities.h"

int main() {

    string first_name;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;

    int age;
    cout << "Enter the age of the this person you are writing to: ";
    cin >> age;

    string friend_name;
    cout << "Enter a name of another friend: ";
    cin >> friend_name;

    char friend_sex = 0;
    cout << "Enter the sex of the friend (m for male, f for female); ";
    cin >> friend_sex;

    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine.\n";
    cout << "tHave you seen " << friend_name << " lately?\n";
    
    if(friend_sex == 'm') {
        cout << "If you see " << friend_name << " please as him to call me.\n";
    } else {
        cout << "If you see " << friend_name << " please as her to call me.\n";
    };
    
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if(age < 0 || age > 110) {
        simple_error("you're kidding!");
    };

    if(age < 12) {
        cout << "Next year you will be " << age+1 << ".\n";
    } else if(age == 17) {
        cout << "Next year you will be able to vote.\n";
    } else if(age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    };

    cout << "Yours sincerely,\n\nMark";

    return 0;
};