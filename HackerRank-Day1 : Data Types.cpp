#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int num;
    double da;
    string sa;
    cin>>num>>da;
    getline(cin,sa);
    getline(cin,sa);
    cout << (int)i+num << endl;
    printf("%.1lf\n",da+d);
    cout << s + sa << endl;

    return 0;
}
