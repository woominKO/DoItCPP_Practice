// 어떤 변수 int a = 10;이 있을 때,
// 포인터 p를 선언해서 a를 가리키게 하고,
// 포인터를 이용해서 a의 값을 20으로 변경하는 코드를 작성해봐.

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *intPtr = &a;
    *intPtr = 20;
    cout << a << endl;
}