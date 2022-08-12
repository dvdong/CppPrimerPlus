#include <iostream>
#include <ctime>   // 包含clock()函数 clock_t类型

int main() {
    std::cout << "Enter the delay time, in seconds: ";
    float secs;
    std::cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // 每秒包含的系统时间单位数
    std::cout << "starting...\n";
    clock_t start = clock();
    while (clock() - start < delay)
    {
       std::cout << ".";
    }
    std::cout << std::endl;
    std::cout << "done\n";
    return 0;
}