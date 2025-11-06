//计算用户心脏至今的总跳动次数
import std;

int main()
{
    int age;
    int heartBeatsPerMinute{75};
    int minutesPerHour{60};
    int hoursPerDay{24};
    int daysPerYear{365};

    std::println("Please enter your age in years: ");
    std::cin >> age;


    const unsigned long long totalBeats = static_cast<unsigned long long>(age)
                                          * daysPerYear
                                          * hoursPerDay
                                          * minutesPerHour
                                          * heartBeatsPerMinute;

    std::println("Your heart has beaten approximately {} times so far in your life.\n", totalBeats);

    return 0;
}
