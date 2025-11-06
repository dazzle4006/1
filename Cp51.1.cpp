//输入两个整数，计算并输出它们的和、差、积和商。
import std;
int main()
{
    double a, b;
    std::println("请输入两个整数");
    std::cin >> a;
    std::cin >> b;
    std::println("{} + {} = {}", a, b, a + b);
    std::println("{} - {} = {}", a, b, a - b);
    std::println("{} * {} = {}", a, b, a * b);
    std::println("{} / {} = {}", a, b, a / b);
}
