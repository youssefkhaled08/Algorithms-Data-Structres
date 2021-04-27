#include <iostream>
#include "stackArr.cpp"

using namespace std;

int main(){
    stackArr<int> s(5);
    s.push(10);    
    s.push(20);
    s.push(30);
    cout << "Stack's content:\n";
    while (!s.isEmpty()){
        cout << s.top()<< endl;
        s.pop();
    }
    return 0;
}
