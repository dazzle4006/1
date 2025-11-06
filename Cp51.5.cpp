//编写一个程序，将输入的整型数据各个数位分离，并依次输出
import std;

int main()
{
    int number;

    std::print("请输入一个整数: ");
    std::cin >> number;

    if (number == 0)
    {
        std::println("各个数位: {:5}", 0);
        return 0;
    }

    // 处理负数
    const bool is_negative{number < 0};
    if (is_negative)
    {
        number = -number;  // 转换为正数处理
    }

    // 使用std::vector存储数位
    std::vector<int> digits;

    // 分离各个数位
    while (number > 0)
    {
        digits.push_back(number % 10);  // 获取最后一位
        number /= 10;                   // 去掉最后一位
    }

    // 输出结果
    std::print("各个数位:");

    // 从高位到低位输出（使用C++23的ranges反向视图）
    for (const auto digit : digits | std::views::reverse)
    {
        std::print("{:5}", digit);  // 每个数位占5个位宽
    }

    // 如果是负数，添加提示
    if (is_negative)
    {
        std::println("\n注意：输入的是负数，已按绝对值处理");
    }
    else
    {
        std::println();  // 换行
    }

    return 0;
}
