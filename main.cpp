#include <iostream>
#include <string>
using namespace std;
extern string getGreeting(string);
int main() {
    string s = getGreeting("Karthik");
    cout << s;
    return 0;
}