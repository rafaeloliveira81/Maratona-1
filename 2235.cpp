#include <iostream>


using namespace std;


int main(void) {
	int X, Y, Z;

	cin >> X >> Y >> Z;

	if(X == Y || X == Z) {
		cout << "S"<<endl;
	}

	else if(Y == X || Y == Z) {
		cout << "S"<<endl;
	}

	else if(Z == X || Z == Y) {
		cout << "S"<<endl;
	}

	else if((X + Y) == Z) {
		cout << "S"<<endl;
	}

	else if((Y + Z) == X) {
		cout << "S"<<endl;
	}

	else if((X + Z) == Y) {
		cout << "S"<<endl;
	}

	else {
		cout << "N"<<endl;
	}
		
	

	return 0;
}