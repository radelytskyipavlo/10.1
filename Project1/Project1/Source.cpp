#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int CountThirdDots(char* str);

int main()
{
    char str[101];
    ifstream f("101ap.txt");

    int lineNumber = 1;
    while (f.getline(str, 101)) {
        int dotsCount = CountThirdDots(str);
        cout << "Number of dots: " << dotsCount << endl;
        lineNumber++;
    }


    f.close();

    return 0;
}

int CountThirdDots(char* str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' && str[i - 2] != '\0' && str[i - 1] != '\0') {
            if (str[i - 2] != '.' && str[i - 1] != '.') {
                count++;
            }
        }
    }
    return count;
}
