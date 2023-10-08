#include <iostream>
using namespace std;

int main()
{
    int z = rand() % 100 + 1;
    cout << "Guess Number from (1 to 100): " << endl;
    int w;
    cin >> w;
    while (w != z) {
        if (w > z) {
            cout << "Wrong answer, the number is smaller than that, try another one: " << endl;
        }
        else {
            cout << "Wrong answer, the number is bigger than that, try another one: " << endl;
        }
        cin >> w;
    }
    cout << "Correct!" << endl;

    return 0;
}
