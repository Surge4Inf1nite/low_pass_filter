#ifndef LOW_PASS_FILTER_H
#define LOW_PASS_FILTER_H

// 低通滤波器类定义
class LowPassFilter {
public:
    // 构造函数，传入滤波器系数 alpha
    LowPassFilter(double alpha);

    // 滤波函数，输入原始数据，返回滤波后的数据
    double filter(double input);

private:
    double alpha_;    // 滤波器系数
    double prev_;     // 上一次的滤波结果
};

#endif // LOW_PASS_FILTER_H
