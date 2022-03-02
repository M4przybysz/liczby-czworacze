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
    int y = 2;

    while(y + 8 <= x) {
        if(isPrime(y) == true && isPrime(y + 2) == true && isPrime(y + 6) == true && isPrime(y + 8) == true) {
            T.push_back({y, y + 2, y + 6, y + 8});
        }
        y++;
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