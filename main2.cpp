#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

bool isPrime(int x) {
    if(x < 2) return false;
    if(x >= 2) {
        for(int i = 2; i <= sqrt(x); i++) {
            if(x % i == 0) return false;
        }
    }
    return true;
}

void quadruplet(int x) {
    std::vector <std::vector <int>> T;
    int n = 0;

    T.push_back({5, 7, 11, 13});
    while(30*n+19 <= x) {
        if(isPrime(30*n+11) == true && isPrime(30*n+13) == true && isPrime(30*n+17) == true && isPrime(30*n+19) == true) {
            T.push_back({30*n+11, 30*n+13, 30*n+17, 30*n+19});
        }
        n++;
    }

    for(int i = 0; i < T.size(); i++) {
        std::cout << "[ ";
        for(int j = 0; j < 4; j++) {
            std::cout << T[i][j] << ", ";
        }
        std::cout << "]" << std::endl;
    }
}

int main() {
    int n = 0;
    std::cout << "Podaj liczbe: "; std::cin >> n;

    clock_t start = clock();

    quadruplet(n);

    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;

    std::cout << "------- " << elapsed << " seconds -------" << std::endl;

    return 0;
}