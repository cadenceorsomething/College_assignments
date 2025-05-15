import std;
import cad; // THIS IS WHERE I PUT MY CODE

using std::cout, std::endl, std::cin;
#define DOUBLE(x) ((x) * 2)

int main() {
	using namespace KD;

	cout << endl;

	int num;

	for (int i = 0; i < 3; i++) {
		cout << "enter a number: ";
		cin >> num;
		cad::math::check_prime_emirp(num);
		cout << endl;
	}

	system("pause");
	return 0;
}
