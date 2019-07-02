using Lib1;
using System;

class Program
{

    public static void Main(string[] args)
    {
        char choose;
        do
        {
            Console.Write("Добро пожаловать в меню! Выберите функцию:\n" +
                    "1)Ввод значений переменных\n" +
                    "2)Вычилсение значения и вывод на экран\n" +
                    "3)Выход\n" +
                    "Введите значение: ");
            choose = Console.ReadKey().KeyChar;

            switch (choose)
            {
                case '1':
                    Calculations.inputVariables();
                    break;
                case '2':
                    Calculations.calculateAndShowResult();
                    break;
            }
        } while (choose != '3');
    }
}
