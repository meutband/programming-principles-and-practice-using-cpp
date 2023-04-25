/*
This app is only function for a number < 25. Sorry.
*/

#include "../std_lib_facilities.h"

int main() {

    cout << "Pick a number between 1 and 100."
         << " This program will guess it in no more than 7 questions.\n"
         << "Please enter 'y' or 'n' for the following:\n\n";
    
    char ans1;
    cout << "Question 1: Is your number less than 50? ";
    cin >> ans1;

    if (ans1 == 'y') { // < 50

        char ans2;
        cout << "Question 2: Is your number less than 25? ";
        cin >> ans2;

        if (ans2 == 'y') { // < 25

            char ans3;
            cout << "Question 3: Is your number less than 12? ";
            cin >> ans3;

            if (ans3 == 'y') { // < 12

                char ans4;
                cout << "Question 4: Is your number less than 6? ";
                cin >> ans4;

                if (ans4 == 'y') { // < 6

                    char ans5;
                    cout << "Question 5: Is your number less than 3? ";
                    cin >> ans5;

                    if (ans5 == 'y') { // < 3

                        char ans6;
                        cout << "Question 6: Is your number 1? ";
                        cin >> ans6;

                        if (ans6 == 'y') { 
                            cout << "Your number is 1, I guessed it in 6 questions!\n";
                        } else {
                            cout << "Your number is 2, I guessed it in 6 questions!\n";
                        };

                    } else { // 3 <= x <  6

                        char ans6;
                        cout << "Question 6: Is your number less 5? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 3 <= 5
                            
                            char ans7;
                            cout << "Question 7: Is your number 4? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 4, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 3, I needed all 7 questions!\n";
                            };
                        
                        } else { // 5 ( < 6)
                                cout << "Your number is 5, I guessed it in 6 questions!\n";
                        };


                    };

                } else { // 6 <= x < 12

                    char ans5;
                    cout << "Question 5: Is your number less than 9? ";
                    cin >> ans5;

                    if (ans5 == 'y') { // 6 <= x < 9

                        char ans6;
                        cout << "Question 6: Is your number less than 8? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 6 <= x < 8
                            
                            char ans7;
                            cout << "Question 7: Is your number 7? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 7, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 6, I needed all 7 questions!\n";
                            }

                        } else {
                            cout << "Your number is 8, I guessed it in 6 questions!\n";
                        };

                    } else { // 9 <= x < 12

                        char ans6;
                        cout << "Question 6: Is you number less than 11? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 9 <= x < 11

                            char ans7;
                            cout << "Question 7: Is your number 10? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 10, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 9, I needed all 7 questions!\n";
                            };

                        } else {
                            cout << "Your number is 11, I guessed it in 6 questions!\n";
                        };

                    };

                };

            } else { // 12 <= x < 25
                    
                char ans4;
                cout << "Question 4: Is your number less than 18? ";
                cin >> ans4;

                if (ans4 == 'y') { // 12 <= x < 18

                    char ans5;
                    cout << "Question 5: Is your number less than 15? ";
                    cin >> ans5;

                    if (ans5 == 'y') { // 12 <= x < 15 

                        char ans6;
                        cout << "Question 6: Is your number less 14? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 12 <= x < 14
                            
                            char ans7;
                            cout << "Question 7: Is your number 13? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 13, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 12, I needed all 7 questions!\n";
                            };
                        
                        } else { // 14 (< 15)
                                cout << "Your number is 14, I guessed it in 6 questions!\n";
                        };

                    } else { // 15 <= x < 18
                            
                        char ans6;
                        cout << "Question 6: Is your number less 17? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 15 <= x < 17
                            
                            char ans7;
                            cout << "Question 7: Is your number 16? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 16, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 15, I needed all 7 questions!\n";
                            };
                        
                        } else { // 17 (< 18)
                                cout << "Your number is 17, I guessed it in 6 questions!\n";
                        };

                    };

                } else { // 18 <= x < 25

                    char ans5;
                    cout << "Question 5: Is your number less than 21? ";
                    cin >> ans5;

                    if (ans5 == 'y') { // 18 <= x < 21

                        char ans6;
                        cout << "Question 6: Is your number less than 20? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 18 <= x < 20
                            
                            char ans7;
                            cout << "Question 7: Is your number 19? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 19, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 18, I needed all 7 questions!\n";
                            }

                        } else {
                            cout << "Your number is 20, I guessed it in 6 questions!\n";
                        };

                    } else { // 21 <= x < 25

                        char ans6;
                        cout << "Question 6: Is you number less than 23? ";
                        cin >> ans6;

                        if (ans6 == 'y') { // 21 <= x < 23

                            char ans7;
                            cout << "Question 7: Is your number 22? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 22, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 21, I needed all 7 questions!\n";
                            };

                        } else { // 23 <= x < 25
                            
                            char ans7;
                            cout << "Question 7: Is your number 24? ";
                            cin >> ans7;

                            if (ans7 == 'y') {
                                cout << "Your number is 24, I needed all 7 questions!\n";
                            } else {
                                cout << "Your number is 23, I needed all 7 questions!\n";
                            };

                        };

                    };

                };

 
            };

        } else { // 25 <= x < 50
            cout << "This app is currently not functional for numbers between 25 and 50! Try less than 25!" << endl;
        };

    } else { // 50 <= x <= 100
        cout << "This app is currently not functional for numbers 50 or greater! Try less than 25!" << endl;
    };

};