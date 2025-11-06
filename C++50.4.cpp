//输入两个数，看哪个最小
import std;

int main()
{
    int num1, num2;

    std::println("Enter first number: ");
    std::cin >> num1;

    std::println("Enter second number: ");
    std::cin >> num2;

    // 使用条件运算符找到较小的数字
    int smaller = (num1 < num2) ? num1 : num2;

    // 输出结果
    std::println("The smaller number is:{} ", smaller);

    return 0;
}
