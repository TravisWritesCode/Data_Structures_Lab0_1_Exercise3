#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	for (int i = 4; i >= 0; i--){
		for (int j = i; j >= 0; j--){
			cout << 2*j << " ";
		}
		cout << endl;
	}
	return 0;
}
