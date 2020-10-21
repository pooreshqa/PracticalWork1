#include <iostream>
using namespace std;

int main()
{  
    int answer;
    answer = 0;


    while (answer != 5) {
        cout << "\nWhat tasks do you wanna check? (Write task's number)\n";
        cout << "1. Print how much memory(in bytes) on your computer is allocated for various data types withand without specifiers;\n";
        cout << "2. Display the binary representation in memory (all digits) of an integer;\n";
        cout << "3. Display a binary representation in memory (all bits) of the float type;\n";
        cout << "4. Display a binary representation in memory (all digits) of the double type.\n";
        cout << "To exit, enter 5 \n";
        cin >> answer;
        system("CLS");

        switch (answer)
        {
        case (1):
            int a;
            short int b;
            long int c;
            float d;
            double e;
            long double f;
            char g;
            bool h;
            
            cout << "int: " << sizeof(a) << "; short int: " << sizeof(b) << "; long int: " << sizeof(c) << "; float: " << sizeof(d) << "; double: " << sizeof(e) << "; long double: " << sizeof(f) << "; char: " << sizeof(g) << "; bool: " << sizeof(h) << "\n";
            break;

        case (2):
            int toBin;
            int mask;
            mask = 1;
            int num[32];
            bool answer2;

            while (true) {
                cout << "\nEnter integer: \n";
                cin >> toBin;

                for (int i = 0; i < 32; i++) {
                    num[i] = toBin & mask ? 1 : 0;
                    toBin = toBin >> 1;
                }

                for (int i = 31; i >= 0; i--) {
                    if (i == 30)
                        cout << " ";
                    cout << num[i];
                }
                cout << "\nExit? 1/0";
                cin >> answer2;
                if (answer2) {
                    system("CLS");
                    break;
                }
            }
            break;


        case (3):
            int mask3;
            mask3 = 1;
            int num3[32];
            bool answer3;

            union {
                int tool;
                float toBin2;
            };
            while (true) {
                cout << "\nEnter float: \n";
                cin >> toBin2;


                for (int i = 0; i < 32; i++) {
                    num3[i] = tool & mask3 ? 1 : 0;
                    tool = tool >> 1;
                }

                for (int i = 31; i >= 0; i--) {

                    cout << num3[i];
                    if (i == 31 || i == 23) {
                        cout << " ";
                    }
                }
                cout << "\nExit? 1/0";
                cin >> answer3;
                if (answer3) {
                    system("CLS");
                    break;
                }
            }
            break;

        case (4):
            bool num4[64];
            bool answer4;
            int index;

            union {
                double toBin3;
                int tool2[2];
            };
            while (true) {
                cout << "\nEnter double: \n";
                cin >> toBin3;
                index = 0;

                for (int k = 0; k < 2; k++) {
                    for (int i = 0; i < 32; i++) {
                        num4[index] = 1 & tool2[k];
                        tool2[k] >>= 1;
                        index++;
                    }
                }
                for (int i = 63; i >= 0; i--) {

                    cout << num4[i];
                    if (i == 63 || i == 52) {
                        cout << " ";
                    }
                }
                cout << "\nExit? 1/0";
                cin >> answer4;
                if (answer4) {
                    system("CLS");
                    break;
                }
            }
            break;

        case (5):
            cout << "Have a nice day!\n";
            break;

        default:
            cout << "Oh, no! This task doesn't exist. Let's try again.\n";
            break;


        };
    }
    return 0;
}