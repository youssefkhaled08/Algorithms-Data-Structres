#include <iostream>
#include "stackArr.cpp"

using namespace std;

int main(){
    stackArr s(5);
    s.push(10);    
    s.push(20);
    s.push(30);

    while (!s.isEmpty()){
        cout << s.top()<< endl;
        s.pop();
    }
    return 0;
}
