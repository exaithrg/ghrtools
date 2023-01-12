#include <iostream>
using namespace std;

int main()
{
    int range;
    int randnum;
    int result;
    int golden;
    cout << "Input Range\n>>";
    cin >> range;
    while (1) {
        srand(time(0)+rand());
        randnum = rand() % range;
        golden = pow(2, randnum);
        cout << "2^" << randnum << " = ";
        cin >> result;
        if (result != golden) {
            cout << "   SB! THE ANSWER IS " << golden << "." << endl;
        }
    }
    return 0;
}
