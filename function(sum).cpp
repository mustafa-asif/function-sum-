#include <iostream>
using namespace std;
int cal(int num)
{
	int result = 0;
	for (int i = 1; i <=num; i++)
	{
		result += i;
	}
	return (result);
}
int main()
{
	int a;
	cout << "enter number " << endl;
	cin >> a;
	int sum = cal(a);
	cout << "the sum upto natural numbers " << a << " is " << sum << endl;
}