using System;
using System.Threading;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Radkevich_03
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.TreatControlCAsInput = true;
            string str = "";
            string newStr = "";
            int width = Console.WindowWidth;
            int height = Console.WindowHeight;
            DateTime time = DateTime.Now;
            bool flag = false;
            object locker = new object();

            Thread threadRead = new Thread(() => readText(ref flag, ref locker, ref str));
            Thread threadSpecial = new Thread(() => specialMethod(ref flag, ref locker, ref str, ref newStr));
            Thread threadWrite = new Thread(() => writeAll(ref flag, ref locker, ref str, ref newStr, ref time, ref height, ref width));
            threadRead.Priority = ThreadPriority.Lowest;
            threadSpecial.Priority = ThreadPriority.Lowest;
            threadWrite.Priority = ThreadPriority.Lowest;
            threadRead.Start();
            threadSpecial.Start();
            threadWrite.Start();
            while (!flag)
            {
                Console.CursorVisible = false;
                Thread.Sleep(200);
            }
        }

        public static void readText(ref bool flag, ref object locker, ref string str)
        {
            ConsoleKeyInfo key;
            while (!flag)
            {
                lock (locker)
                {
                    while (Console.KeyAvailable)
                    {
                        Console.SetCursorPosition(str.Length / Console.WindowWidth, (1 + (Console.WindowHeight) / 2) + (str.Length / Console.WindowWidth));
                        key = Console.ReadKey(true);
                        switch (key.Key)
                        {
                            case ConsoleKey.Escape:
                                flag = true;
                                return;
                            default:
                                str += key.KeyChar;
                                catStr(ref str);
                                break;
                        }
                    }
                }
                Thread.Sleep(200);
            }
        }

        public static void specialMethod(ref bool flag, ref object locker, ref string str, ref string newStr)
        {
            while (!flag)
            {
                lock (locker)
                {
                    //Thread.Sleep(100);
                    newStr = "";
                    char[] helper = str.ToCharArray();
                    if (str.Length >= 10)
                    {
                        Array.Reverse(helper, str.Length - 10, 10);
                    }

                    newStr = new string(helper);
                    //newStr = new string(str.ToCharArray().Reverse(str, str.Length - 10, 10).ToArray());

                    /*for (int i = newStr.Length - 10; i <= newStr.Length; i++)
                    {
                        helper = newStr[i];
                        newStr[i] += newStr[newStr.Length - i];
                        newStr[newStr.Length] = helper;
                    }*/
                }
                Thread.Sleep(500);
            }
        }

        public static void writeAll(ref bool flag, ref object locker, ref string str, ref string newStr, ref DateTime time, ref int height, ref int width)
        {
            while (!flag)
            {
                lock (locker)
                {
                    //Thread.Sleep(50);
                    if (height != Console.WindowHeight || width != Console.WindowWidth)
                    {
                        height = Console.WindowHeight;
                        width = Console.WindowWidth;
                        if (height > 0 && width > 0)
                        {
                            Console.Clear();
                            catStr(ref str);
                        }
                    }
                    if (Console.WindowWidth >= 13 && Console.WindowHeight >= 6)
                    {
                        writeTime(ref time);
                        writeInOutAndSize();
                        writeText(str, newStr);
                    }
                }
                //Thread.Sleep(50);
            }
        }

        public static void writeText(string str, string newStr)
        {
            Console.SetCursorPosition(0, (2 + (Console.WindowHeight / 2)));
            Console.Write(str);
            Console.SetCursorPosition(0, 3);
            Console.Write(newStr);
        }

        public static void writeInOutAndSize()
        {
            Console.SetCursorPosition(Console.WindowLeft, Console.WindowTop);
            Console.WriteLine(Console.WindowWidth + " " + Console.WindowHeight + "\n" + Console.WindowWidth + " " + ((Console.WindowHeight / 2) - 2));
            Console.SetCursorPosition(0, 2);
            Console.Write("Вывод: ");
            Console.SetCursorPosition(0, (1 + (Console.WindowHeight / 2)));
            Console.Write("Ввод: ");
        }

        public static void writeTime(ref DateTime time)
        {
            if (time.TimeOfDay.Subtract(DateTime.Now.TimeOfDay).TotalMilliseconds <= 50)
            {
                time = DateTime.Now;
                if (Console.WindowWidth >= 8 && Console.WindowHeight >= 1)
                {
                    Console.SetCursorPosition(Console.WindowWidth - 8, Console.WindowTop);
                }
                Console.WriteLine(DateTime.Now.ToString("hh:mm:ss"));
            }
        }

        public static void catStr(ref string str)
        {
            while (str.Length + 1 >= Console.WindowWidth * ((Console.WindowHeight / 2) - 2) && Console.WindowHeight > 5)
            {
                str = str.Substring(1);
            }
        }
    }
}