#include <stack>
#include <iostream>

using namespace std;
int main()
{
	stack<int> s;

	s.push(20);
	s.push(54);
	s.push(10);
	cout << s.size() << " size of s" << endl;
	cout << "top of stack" << s.top() << endl;

	s.pop();

	cout << s.size() << "elements on stack\n";

	cout << "Top: " << s.top() << "\n";

	return 0;
}
