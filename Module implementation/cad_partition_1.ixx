module cad;   // <- declare the module name
import std;
import <cmath>;

// namespace to not confuse functions with others

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
	namespace pointer_testing {
		// empty lol
	}
	namespace structs {
		struct distance {
			int cm;
			int m;
		};
	}
	namespace math {
		bool		is_prime				(int n) {
			if (n <= 1) return false;
			for (int i = 2; i <= sqrt(n); i++)
				if (!(n % i))
					return false;
			return true;
		}
		inline bool check_bounds			(int n, int left, int right) {
			if (right <= left) std::cerr << "ERROR but ima return shizz anyways" << std::endl;
			return n >= left && n <= right;
		}
		inline int	digit_count				(int n) {
			if (n == 0) return 1;
			int count = 0;

			// HOW IT WORKS:
			// divides n and increments count for every iteration
			while (n != 0) {
				n /= 10;
				count++;
			}
			return count;
		}
		int			pow10					(int count) {
			if (int count = 0) return 1;
			if (count < 0) {
				std::cerr << "THIS FUNCTION ONLY WORKS WITH POSITIVES." << std::endl;
				return -1;
			}
			int result = 1;
			for (int i = 0; i < count; i++)	result *= 10;

			return result;
		}
		int			flip_num				(int n) {
			if (check_bounds(n, -9, 9)) return n;

			int remainder = 0;
			int m = 0;
			int count = digit_count(n);
			int place = pow10(count - 1);

			// lets say we have 100, it would be 001
			// lets say 230, it will be 032
			// so the way this works is we n % 10;
			// after doing so, we put it in the ith place where i is = count 

			for (int i = 0; i < count; i++) {
				// get n % 10
				// put it RIGHT in the last digit place
				remainder = n % 10;
				m += remainder * place;
				place /= 10;
				n /= 10;

			}


			return m;
		}
		void		check_prime_emirp		(int n) {
			int flipped = flip_num(n);
			if (is_prime(n) && is_prime(flipped))
				std::cout << n << " is an emirp!" << std::endl;
			else if (is_prime(n))
				std::cout << n << " is a prime!" << std::endl;
			else
				std::cout << n << " is NOT a prime!" << std::endl;


		}
	}
}