#include <iostream>

int main() {
    const int i = 10;
    int& r = const_cast<int&>(i); // 常量转换，将const int转换为int
    r = 20; // 修改r的值，实际上修改的是i的值
    std::cout << "i = " << i << "  " << r << std::endl; // 输出i的值，结果为20
    return 0;
}
