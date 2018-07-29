#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  cout << "请输入姓名" << endl; 
  cin >> name;
  cout << "hello, " << name << endl;
  cout << "长度为" << name.size() << endl;
  name = name + name;
//  cout << name << endl;
//    int a, b;
//    cin >> a >> b;
//    cout << "a+b=" << a + b;

    return 0;
}


