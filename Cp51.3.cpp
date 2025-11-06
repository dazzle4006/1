//输入长方体的长、宽、高，计算并输出长方体的体积
import std;
int main()
{
    double length, width, height;
    std::println("请输入长方体的长");
    std::cin >> length;
    std::println("请输入长方体的宽");
    std::cin >> width;
    std::println("请输入长方体的高");
    std::cin >> height;
    double volume = length * width * height;
    std::println("长方体的体积为:{}", volume);
}
