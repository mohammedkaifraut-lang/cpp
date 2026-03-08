#include <iostream>
using namespace std;
int add(int x, int y, int z) {
    return x + y + z;
}
int main() {
    int result = add(5, 10, 15); 
    cout << "The sum is: " << result << endl;
    return 0;
}
