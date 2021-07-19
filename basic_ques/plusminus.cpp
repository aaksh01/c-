#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct( std::vector<long long> numbers) {
    std::sort(numbers.begin(), numbers.end());
    for(int i=0;i<numbers.size();i++)
std::cout<<numbers[i]<<"\n";
    long max_size = numbers.size();
   std::cout<<max_size<<"\n";
    long long max_product = numbers[max_size-1] * numbers[max_size-2];
    return max_product;
}

int main() {
    long long n;
    std::cin >> n;
    long long number;
    std::vector<long long> numbers;
    for (long long i = 0; i < n; ++i) {
        std::cin >> number;
        numbers.push_back(number);
    }
    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
