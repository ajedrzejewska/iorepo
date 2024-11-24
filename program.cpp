#include <iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int main() {
    int liczba;
    cin >> liczba;
    if(liczba<0)
    {
	    cout<<"Podano ujemna liczbe!"<<endl;
	    return 0;
    }
    cout << "Podana liczba: " << liczba << endl;
    cout << "Wartosc (Fibonacci): "<<fib(liczba)<<endl;
    return 0;
}

