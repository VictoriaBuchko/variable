
#include <iostream>
#include <cmath>// для использования метода floor() в 2 и 3 task
#include <iomanip>  // для использования setprecision() в 4 task
using namespace std;

int main()
{   /*Марафонец прошёл s км со скоростью v метрах за секунду. 
    расстояние и скорость вводится с клавиатуры. определить, 
    сколько времени он был в пути (часов, минут, секунд)
    */
    cout << "task 1\n";
    double speed, distance;
    int hours, minutes, seconds;
    const int secondsInHour = 3600; 
    const int secondInMinute = 60;

    cout << "Enter the distance the marathon runner has run(kilometers): ";
    cin >> distance;
    cout << "Enter the speed at which the marathon runner ran(m/sec): ";
    cin >> speed;

    distance *= 1000;//переводим километры в метры
    seconds = distance / speed;// вычесляем общее время в секундах
    hours = seconds / secondsInHour;//вычесляем количество сек
    seconds %= secondsInHour;//вычисляет остаток от деления на количество секунд в часе
    minutes = seconds / secondInMinute;//вычисляет количество минут
    seconds %= secondInMinute;//вычисляет остаток от деления на 60, чтобы определить количество секунд,
    //которые остались после вычисления часов и минут

    cout << "The marathon runner was on his way:\nhours:" << hours << "\nminets:" << minutes << "\nseconds:" << seconds << "\n\n";
    //================================================================================================================
    /*Пользователь вводит с клавиатуры два дробных числа. 
    вывести на экран сумму целых частей и сумму дробных
    */
    cout << "2 task\n";// для этого задания воспользуемся библиотекой <cmath> и методом 
    //floor() который вычисляет целую часть числа 
    double a, b;
    cout << "Enter two decimal numbers: ";
    cin >> a >> b;

    int intSum = floor(a) + floor(b);
    double floatSum = (a - floor(a)) + (b - floor(b));

    cout << "Sum of integer parts of a number: " << intSum << endl;
    cout << "The sum of the fractional parts of a number: " << floatSum << "\n\n";

    //================================================================================================================
    /*Пользователь вводит с клавиатуры сумма в гривнах дробное число.
    вывести на отдельное количество гривен и количество копеек например
    (ввести 45,67 гривен-получить. и вывести 45 гривен 67 копеек) 
    */
    cout << "3 task\n";
    double amount;
    cout << "Enter the amount of hryvnia: ";
    cin >> amount;

    int hryvnia = floor(amount);
    int kopiyky = floor((amount - hryvnia) * 100 + 0.5);//что бы убрать округление  в меньшую сторону в копейках добавляем 0.5

    cout << hryvnia << " hryvnia " << kopiyky << " kopecks" << "\n\n";
    //===============================================================================================================
    /*Пользователь вводит с клавиатуры время в секундах. 
    перевести это значение в дни часы минуты и секунды 
    например 43512 секунд - это 12 часов 5 минут и 12 секунд
    */
    cout << "4 task\n";
    double secondsf, hoursf, minutesf, days;
    const int secondsInMinutrsf = 60;
    const int secondsInHourf = 3600;
    const int secondsInDay = 86400;

    cout << "Enter number of seconds:";
    cin >> secondsf;

    hoursf = secondsf / secondsInHourf;
    minutesf = secondsf / secondsInMinutrsf;
    days = days = secondsf / secondsInDay;

    cout << fixed << setprecision(1);// фиксируем что после запятой у дробных числе будет только 1 число
    cout << days << " days \n";
    cout << hoursf << " hours \n";
    cout << minutesf << " minutes \n";
    cout << secondsf << " seconds\n\n";
    //================================================================================================================
    /*Пользователь вводит с клавиатуры расстояние до аэропорта 
    (в километрах может быть вещественное значение) и время за которое нужно доехать( в минутах). 
    вычислить скорость (километров в час), с которым нужно ехать
    */
    cout << "5 task\n";
    float distancef, time, speedf;

    cout << "Enter the distance to the airport (km): ";
    cin >> distancef;
    cout << "Enter travel time (minutes): ";
    cin >> time;

    time /= 60;
    speedf = distancef / time;

    cout << "The speed at which you need to go: " << speedf << " km/h" << "\n\n";
    //================================================================================================================
    /*Пользователь вводит с клавиатуры время начала и время завершения телефонного 
    разговора (часы минуты и секунды).посчитать стоимость разговора если стоимость 
    минуты составляет 15 коп с учётом посекундной тарификации
    */
    cout << "6 task\n";
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;
    int startTime, endTime, difference;
    const int secondsInMinutrsd = 60;
    const int secondsInHourd = 3600;
    float cost;

    cout << "Enter the start time of the call (h min sec): ";
    cin >> startHour >> startMinute >> startSecond;
    cout << "Enter the end time of the call (h min sec): ";
    cin >> endHour >> endMinute >> endSecond;

    //переводим все время в секунды 
    startTime = startHour * secondsInHourd + startMinute * secondsInMinutrsd + startSecond;
    endTime = endHour * secondsInHourd + endMinute * secondsInMinutrsd + endSecond;

    //вычесление рвзницы междц нвачалом иконцом звонка
    difference = endTime - startTime;
    //высчитываем стоимость звонка
    cost = difference / 60.0 * 0.15;

    cout << "Cost=" << cost<<"\n\n";
    //================================================================================================================
    /*Пользователь вводит с клавиатуру время в секундах прошедшее с начала рабочего дня.
    Посчитать сколько целых часов ему осталось сидеть на работе, если рабочий день составляет 8 часов 
    */
    cout << "7 task\n";
    int workSeconds;
    const int workDay = 8 * 3600;
    int numberOfHours;

    cout << "Enter the time in seconds since the start of the working day: ";
    cin >> workSeconds;

    numberOfHours = workDay - workSeconds;
    numberOfHours /= 3600;

    cout << "Left " << numberOfHours << " whole hours before the end of the working day" << "\n\n";
    //================================================================================================================
    /*Пользователь вводит с клавиатуры стоимость одного ноутбука их
    количество и процент скидки. посчитать общую сумму заказа 
    */
    cout << "8 task\n";
    double price, discount, totalPrice;
    double totalDiscount;
    int quantity;

    cout << "Enter the cost of one laptop: ";
    cin >> price;
    cout << "Enter the number of laptops: ";
    cin >> quantity;
    cout << "Enter discount percentage: ";
    cin >> discount;

    totalDiscount = price * quantity * discount / 100;//скидка(количество денег которое вы сэкономили)
    totalPrice = price * quantity - totalDiscount;

    cout << "The total amount of the order:" << totalPrice;
}
