#include <iostream>
#include <queue>
using namespace std;



int main() {
    deque<int> dq;
    dq.push_front(12);
    dq.push_back(14);
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    dq.pop_front();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    return 0;
}