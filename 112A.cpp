d#include <iostream>
using namespace std;
int main() {
	string first, second;
    cin >> first >> second;
    int lf, ls;
    lf = first.length();
    ls = second.length();
    
    //convert to smal
    for (int i = 0; i < lf; i++) {
        if (first[i] < 92) {
            first[i] += 32;
        }
        if (second[i] < 92) {
            second[i] += 32;
        }
    }
    
    if (first < second) {
        cout << -1;
    } 
	else if (first > second) {
        cout << 1;
    } 
	else if (first == second) {
        cout << 0;
    }
  return 0;
}
