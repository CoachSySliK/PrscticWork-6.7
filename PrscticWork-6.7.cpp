#include <iostream>

using namespace std;

int main()
{
    int x, y;
    start:
    cout << "Введите числитель: ";
    cin >> x;
    cout << "Введите знаменатель: ";
    cin >> y;

    if (y == 0) {
        cout << "На 0 делить нельзя!\n";
        goto start;
    }

    cout << "------Cчитаем------\n";

    bool answer = false;
    int divisor = 1;    

    if (x % y == 0) {
        x /= y;
        answer = true;
    }
    else {
        while (divisor < y) {
            //cout << "error";
            if (x % divisor == 0 && y % divisor == 0) {
                x /= divisor;
                y /= divisor;
            }            
            divisor++;            
        }
    }

    if (x < 0 && y < 0) {
        x = -x;
        y = -y;
    }

    if (answer) {
        cout << "Ответ: " << x << endl;
    }
    else if (x > y) {
        int answer = x / y;
        x %= y;
        string whole[2] = { " целая", " целых" };
        int ending = 1;
        if (answer % 10 == 1) ending = 0;
        cout << "Ответ: " << answer << whole[ending] << " и " << x << "/" << y << endl;
    }
    else {
        cout << "Ответ: " << x << "/" << y << endl;
    }







    return 0;
}
