//华氏度温度转换为摄氏度
import std;

int main()
{
    // 显示提示信息
    std::println("Enter a temperature in degrees Fahrenheit: ");

    // 读取用户输入的华氏温度
    double fahrenheit{};
    std::cin >> fahrenheit;

    // 使用公式进行温度转换
    const double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    // 使用C++20/23的format库格式化输出结果
    std::println("{:.2f} degrees Fahrenheit is {:.2f} degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}
