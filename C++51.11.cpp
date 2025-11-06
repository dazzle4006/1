//输入里氏强度，显示地震的后果
import std;
int main()
{
    double richter_scale{};

    std::println("Enter Richter scale value: ");
    std::cin >> richter_scale;

    std::string effect{};

    // 根据里氏震级确定地震效果
    if (richter_scale < 4.0)
    {
        effect = "Little. 很小";
    }
    else if (richter_scale >= 4.0 && richter_scale < 5.0)
    {
        effect = "Windows shake. 窗户晃动";
    }
    else if (richter_scale >= 5.0 && richter_scale < 6.0)
    {
        effect = "Walls crack; poorly built buildings are damaged. 墙倒塌；不结实的建筑物被破坏";
    }
    else if (richter_scale >= 6.0 && richter_scale < 7.0)
    {
        effect = "Chimneys tumble; ordinary buildings are damaged. 烟囱倒塌；普通建筑物被破坏";
    }
    else if (richter_scale >= 7.0 && richter_scale < 7.9)
    {
        effect = "Underground pipes break; well-built buildings are damaged. 地下管线破裂；结实的建筑物也被破坏";
    }
    else
    {
        effect = "Ground rises and falls in waves; most buildings are destroyed. 地面波浪状起伏；大多数建筑物损毁";
    }

    std::println("Effects: {}\n", effect);

    return 0;
}
