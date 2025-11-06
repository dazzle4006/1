//计算 1.0 到 2.0 浮点数平均值
import std;
int main()
{
    // 使用C++23的类模板参数推导创建vector
    std::vector numbers = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};

    // 计算总和
    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);

    // 计算平均值
    double average = sum / numbers.size();

    std::println("The average of numbers from 1.0 to 2.0 is:{}", average );

    return 0;
}
