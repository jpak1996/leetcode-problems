#include <iostream>

using namespace std;

void staircase(int n) {
	for(int i=0; i<n; i++) {
		for(int k=0; k<n; k++) {
			if(k<=i) {
				cout << "#";
			}
		}
		cout << "\n";
	}
}

int main()
{
	cout << "Enter number of steps: ";
	int num;
	cin >> num;
	staircase(num);

}