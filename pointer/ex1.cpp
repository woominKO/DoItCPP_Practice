// int x = 42;가 있을 때,
// x의 값을 출력하고,
// x의 메모리 주소를 출력하는 코드를 작성해봐.

#include <iostream>
using namespace std;

int main(){
    int x = 42;
    int *intPtr = &x;
    cout << x << endl;
    cout << intPtr << endl;
}