module cad;   // <- declare the module name
import std;
import <cmath>;

// namespace to not confuse functions with others

// word

namespace cad {
	namespace arr {
		void square_array() {
			int arr[5];
			for (int i = 0; i < 5; i++) {
				std::cout << "insert element no." << i + 1 << ": ";
				std::cin >> arr[i];
				arr[i] = arr[i] * arr[i];
			}

			for (int i = 0; i < 5; i++) {
				std::cout << arr[i] << " ";
			}

		}
		void find_element() {
			int arr[5];
			for (int i = 0; i < 5; i++) {
				std::cout << "insert element no." << i + 1 << ": ";
				std::cin >> arr[i];
			}

			int find = 0;
			std::cout << "insert the element you want to find: ";
			std::cin >> find;

			for (int i = 0; i < 5; i++) {
				if (find == arr[i]) {
					std::cout << "FOUND" << std::endl;
					return;
				}
			}
			std::cout << "NOT FOUND" << std::endl;
		}
		void num_to_array() {
			const int size = 5;
			int		  num;
			int       arr[size];
			int		  remainder;
			std::cout << "insert a number: ";
			std::cin >> num;



			for (int i = size - 1; i >= 0; i--) {
				remainder = num % 10;
				arr[i] = remainder;
				num /= 10;
			}

			for (int i = 0; i < size; i++) {
				std::cout << arr[i] << " ";
			}
		}
	}
	namespace functions {
		// empty lol
	}
	namespace structs {
		struct distance {
			int cm;
			int m;
		};
	}
	namespace math {
		bool is_prime(int n) {
			if (n <= 1) return false;
			for (int i = 2; i <= sqrt(n); i++)
				if (!(n % i))
					return false;
			return true;
		}
	}

}