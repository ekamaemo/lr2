Вариант 3.
Задание 1. Вычислить сумму сходящегося ряда с заданной точностью (ряд представляет собой последовательность чисел вида 1/N!, где N от 1 до бесконечности.
    Способ вычисления: подсчёт суммы через вычисления факториала (чтобы ускорить процесс факториал считается как произведение факториала предыдущего числа и текущего числа).
Задание 2. Вычислить интеграл функции натурального логарифма по заданным пределам интегрирования и точности с помощью метода средних прямоугольников
    Способ вычисления: с помощью библиотеки math выисляется натуральный логарифм от x, находящегося посередине между a + h * i и a + h * (i + 1), т. е. точки a + h * (i + 0.5), значение логарифма умножается на основание h, найденное как (a - b) / n, где n - количество участков разбиений. Из этого получается площадь i-го участка логарифма. Это все суммируется проходя фором и получается интеграл, который потом сравнивается с предыдущим значением на заданную точность.
