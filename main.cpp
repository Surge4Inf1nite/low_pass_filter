#include <iostream>
#include <vector>
#include "low_pass_filter.h"

int main() {
    // 示例数据
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    double alpha = 0.1;  // 滤波器系数

    // 创建低通滤波器实例
    LowPassFilter lpf(alpha);

    // 对数据进行滤波
    std::vector<double> filtered_data;
    for (double value : data) {
        double filtered_value = lpf.filter(value);
        filtered_data.push_back(filtered_value);
    }

    // 输出滤波后的数据
    std::cout << "Filtered Data: ";
    for (double value : filtered_data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
