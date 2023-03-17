
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> n;
     cout << "capacity-> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(1);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(2);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(2);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(3);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(4);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     n.push_back(5);
     cout << "capacity -> " << n.capacity() << endl;
     cout << "size-> " << n.size() << endl;
     cout<<"3rd index value -> "<<n.at(3)<<endl;
}