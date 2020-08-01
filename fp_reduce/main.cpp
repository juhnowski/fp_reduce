#include <iostream>
#include <vector>
#include <numeric>
#include <pstl/execution>


double average_score(const std::vector<int>& scores){
    return std::reduce(
                       std::executionn::par,
                       scores.cbegin(),
                       scores.cend(),
                       0
                       )/(double)scores.length();
}

int main(int argc, const char * argv[]) {
    std::vector<int> v = {7, 1, 4, 0, -1};
    std::cout << "Hello, World!\n";
    return 0;
}
