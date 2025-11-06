//时间转换
import std;

int main()
{
    // 输入小时数
    int total_hours;
    std::println("Enter the number of hours:");
    std::cin >> total_hours;

    // 计算周、天、小时
    int weeks = total_hours / (7 * 24);      // 每周7天，每天24小时
    int remaining_hours = total_hours % (7 * 24);
    int days = remaining_hours / 24;         // 剩余小时转换为天
    int hours = remaining_hours % 24;        // 最后剩余的小时数

    std::println("weeks:{}:", weeks);
    std::println("days:{}", days);
    std::println("hours:{}", hours);
    return 0;
}
