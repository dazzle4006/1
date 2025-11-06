//除法程序
import std;
int main()
{
    // 从键盘读取两个数字
    int dividend, divisor;
    std::println( "Enter the first number: ");
    std::cin >> dividend;
    std::println("Enter the second number: ");
    std::cin >> divisor;

    // 检查除数是否为0
    if (divisor == 0)
    {
        std::println("Error: Division by zero is not allowed!") ;
        return 1;
    }

    // 计算商和余数
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    std::println("{} divided by {} = {} Remainder = {}", dividend, divisor, quotient, remainder);
    return 0;
}
