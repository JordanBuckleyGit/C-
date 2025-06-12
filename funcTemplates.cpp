# include <iostream>

using namespace std;

int max(int x, int y) {
    return (x > y) ? x : y;
}
double max(double x, double y) {
    return (x > y) ? x : y;
}
char max(char x, char y) {
    return (x > y) ? x : y;
}

int main() {
    cout << max(1,2) << endl;
    cout << max(1.1,2.2) << endl;
    cout << max('1','2') << endl;
    return 0;
}