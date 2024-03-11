#include"header.h"

namespace jija {
    std::vector<int> map(const std::vector<int>& numbers, std::function<int(int)> func) {
        if (numbers.empty()) {
            throw std::invalid_argument("Empty vector");
        }

        std::vector<int> result;
        for (int num : numbers) {
            result.push_back(func(num));
        }
        return result;
    }

    std::vector<int> filter(const std::vector<int>& numbers, std::function<bool(int)> func) {
        if (numbers.empty()) {
            throw std::invalid_argument("Empty vector");
        }

        std::vector<int> result;
        for (int num : numbers) {
            if (func(num)) {
                result.push_back(num);
            }
        }
        return result;
    }

    bool is_prime(int num) {
        if (num <= 2)
            return false;
        for (int i = 2; i < num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    void tests() {
        std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        std::vector<int> squared = { 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 };
        std::vector<int> primes = { 3, 5, 7 };
        assert(map(numbers, [](int x) { return x * x; }) == squared);
        assert(filter(numbers, is_prime) == primes);
    }
}
   
    int main() {
        jija::tests();
        std::cout << "tests rabotaet";
        return 0;
    }
