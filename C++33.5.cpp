//摄氏度温度转换为华氏度
import std;

int main()
{
    // 显示提示信息
    std::println("Enter a temperature in degrees celsius: ");

    // 读取用户输入的摄氏温度
    double celsius{};
    std::cin >> celsius;

    // 使用公式进行温度转换
    const double fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    // 使用C++20/23的format库格式化输出结果
    std::println("{:.2f} degrees Celsius is {:.2f} degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
