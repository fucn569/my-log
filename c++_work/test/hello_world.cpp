#include <iostream>
using namespace std;
template <typename T>
T Min(const T &a, const T &b) {
	if (a < b)
		return a;
	else
		return b;
}
//? 无法再自动识别
int Min(const int &a, const int &b) {
	if (a < b)
		return a;
	else
		return b;
}

int main() {
    float a = 1.0, b = 2.0;
    cout << Min(a, b) << endl;
    return 0;
}
