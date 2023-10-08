#include <iostream>
using namespace std;

int main()
{
	cout << "Enter operation: " << endl;
	char op;
	cin >> op;
    cout << "Now enter both numbers space-separated: ";
    double x, y;
    cin >> x >> y;
    switch (op) {
    case '*':
        cout << "Answer is: " << x * y;
        break;
    case '+':
        cout << "Answer is: " << x + y;
        break;
    case '/':
        cout << "Answer is: " << x / y;
        break;
    case'-':
        cout << "Answer is: "<< x - y;
        break;
    default:
        cout << "Operation Undefined, Try again";
    }
    return 0;
}
