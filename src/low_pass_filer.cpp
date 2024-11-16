#include "low_pass_filter.h"

// 构造函数初始化滤波器系数和初始值
LowPassFilter::LowPassFilter(double alpha)
    : alpha_(alpha), prev_(0.0) {}

// 滤波函数实现
double LowPassFilter::filter(double input) {
    // 一阶低通滤波公式：y[n] = alpha * x[n] + (1 - alpha) * y[n-1]
    double output = alpha_ * input + (1.0 - alpha_) * prev_;
    prev_ = output;
    return output;
}
