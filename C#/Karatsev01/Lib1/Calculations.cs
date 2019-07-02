using System;
/*using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;*/

namespace Lib1
{
    public static class Calculations
    {
        private static int A;
        private static int B;
        private static int C;
        private static int D;
        private static int E;
        private static double X;
        private static double RESULT;
        public static void inputVariables()
        {
            /*            Console.Write("\nВведите A: ");
                        bool parse = Int32.TryParse(Console.ReadLine(), out A);
                        while (parse == false)
                        {
                            Console.Write("\nНеверно введено значение переменной A. " +
                                "Введите A: ");
                            parse = Int32.TryParse(Console.ReadLine(), out A);
                        }*/
            A = tryConvertInt(A, "A");
            B = tryConvertInt(B, "B");
            C = tryConvertInt(C, "C");
            D = tryConvertInt(D, "D");
            E = tryConvertInt(E, "E");
            X = tryConvertDouble(X, "X");
            /*Console.Write("\nВведите B: ");
            parse = Int32.TryParse(Console.ReadLine(), out B);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной B. " +
                    "Введите B: ");
                parse = Int32.TryParse(Console.ReadLine(), out B);
            }
            Console.Write("\nВведите C: ");
            parse = Int32.TryParse(Console.ReadLine(), out C);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной C. " +
                    "Введите C: ");
                parse = Int32.TryParse(Console.ReadLine(), out C);
            }
            Console.Write("\nВведите D: ");
            parse = Int32.TryParse(Console.ReadLine(), out D);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной D. " +
                    "Введите D:");
                parse = Int32.TryParse(Console.ReadLine(), out D);
            }
            Console.Write("\nВведите E: ");
            parse = Int32.TryParse(Console.ReadLine(), out E);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной E. " +
                    "Введите E:");
                parse = Int32.TryParse(Console.ReadLine(), out E);
            }
            Console.Write("\nВведите X: ");
            parse = Double.TryParse(Console.ReadLine(), out X);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной X." +
                    "Введите X:");
                parse = Double.TryParse(Console.ReadLine(), out X);
            }*/
        }

        public static int tryConvertInt(int a, string s) {
            Console.Write("\nВведите {0}: ", s);
            bool parse = Int32.TryParse(Console.ReadLine(), out a);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной {0}. " +
                    "Введите {0}: ", s);
                parse = Int32.TryParse(Console.ReadLine(), out a);
            }
            return a;
        }

        private static double tryConvertDouble(double b, string s) {
            Console.Write("\nВведите {0}: ", s);
            bool parse = Double.TryParse(Console.ReadLine(), out b);
            while (parse == false)
            {
                Console.Write("\nНеверно введено значение переменной {0}. " +
                    "Введите {0}: ", s);
                parse = Double.TryParse(Console.ReadLine(), out b);
            }
            return b;
        }

        public static void calculateAndShowResult()
        {
            RESULT = Convert.ToDouble((A * X + B) % ((C * X + D) % E));
            Console.WriteLine("\nРезультат: {0,0:f4}",
                              RESULT);
            //Convert.ToString(RESULT).Replace('.', ','));
        }
    }
}