// int num = 5;가 있을 때,
// p는 num을 가리키는 포인터,
// pp는 p를 가리키는 포인터(포인터의 포인터)로 선언하고,
// **pp를 이용해서 num을 50으로 바꾸는 코드를 작성해봐.

#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;
    int **pp= &p;
    **pp = 50;
    cout << num <<endl;
    cout << *pp << endl;
    cout << p <<endl;

}