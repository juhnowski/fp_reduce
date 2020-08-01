#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

double average_score(const std::vector<int>& scores){
    return std::reduce(
                       std::executionn::par,
                       scores.cbegin(),
                       scores.cend(),
                       0
                       )/(double)scores.length();
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    return 0;
}
