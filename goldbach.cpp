#include <bits/stdc++.h>
#include <math.h>
bool isPrime(int num){
    if (num == 2){
        return true;
    }
    for (int i = 2; i <= std::sqrt(num) + 1; ++i){
        std::cout << i << " " << num%i << std::endl;
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
void goldbach(int a){
    if (a%2 == 1){
        std::cout << "Odd numbers are not applicable for Goldbach's conjecture\n";
        return;
    }
    for (int i = 2; i <= a/2; ++i){
        if (isPrime(i) == true && isPrime(a-i) == true){
            std::cout << i << " + " << a - i << " = " << a << std::endl;
            std::cout << "There exists two primes whose sum is " << a << " You have not disproved Goldbach's conjecture" << std::endl;
            return;
        }
    }
    std::cout << "No known primes exist which add up to " << a << std::endl << "Congratulations! You have disproved Goldbach's conjecture!" << std::endl;
}
int main(){
    int n;
    std::cin >> n;
    goldbach(n);
    return 0;
}
