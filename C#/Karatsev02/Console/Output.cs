using System;
//using System.Linq;
/*using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;*/

namespace ConsoleOutput
{
    class Output
    {
        private DateTime _now = DateTime.Now;
        private string _result;
        int _height;
        int _width;
        ConsoleKeyInfo key;
        private string _str = "";
        public void getAndShowTime() {
            if (_now.TimeOfDay.Subtract(DateTime.Now.TimeOfDay).TotalMilliseconds <= 50)
            {
                _now = DateTime.Now;
                if (_width >= 8 && _height >= 1)
                {
                    Console.SetCursorPosition(Console.WindowWidth - 8, Console.WindowTop);
                }
                Console.WriteLine(DateTime.Now.ToString("hh:mm:ss"));
            }
        }

        public void isKey() {
            if (Console.KeyAvailable)
            {
                Console.SetCursorPosition(_str.Length / _width, (1 + (_height) / 2) + (_str.Length / _width));
                key = Console.ReadKey(true);
                //_ = key.Modifiers == ConsoleModifiers.Control;
                switch (key.Key)
                {
                    case ConsoleKey.Backspace:
                        if (_str.Length > 0)
                        {
                            _str = _str.Remove(_str.Length - 1, 1);
                        }
                        Console.Clear();
                        writeText(_str);
                        writeInOut();
                        //System.Threading.Thread.Sleep(5);
                        break;

                    case ConsoleKey.Escape:
                        Environment.Exit(0);
                        break;

                    default:
                            _str += key.KeyChar;
 
                            if (_str.Length >= _width * ((_height / 2) - 2))
                            {
                                _str = _str.Substring(1);
                            }
                            writeText(_str);
                        break;
                }
            }
        }

        public void getAndShowSize() {
            if (_height != Console.WindowHeight || _width != Console.WindowWidth)
            {
                Console.CursorVisible = false;
                _height = Console.WindowHeight;
                _width = Console.WindowWidth;
                if (Console.WindowWidth >= 13 && Console.WindowHeight >= 6)
                {
                    Console.Clear();
                    while (_str.Length >= Console.WindowWidth * ((Console.WindowHeight / 2) - 2))
                    {
                        _str = _str.Substring(1);
                    }
                    writeInOut();
                    writeText(_str);
                }
            }
        }
        public void writeText(string str)
        {
            Console.SetCursorPosition(0, (2 + (Console.WindowHeight / 2)));
            Console.Write(str);
            Console.SetCursorPosition(0, 3);
            _result = "";
            for (int i = 0; i < str.Length; i++)
            {
                if (str[i] % 2 == 0)
                {
                    _result += str[i];
                }
            }
            Console.Write(_result);
        }

        public static void writeInOut()
        {
            Console.SetCursorPosition(Console.WindowLeft, Console.WindowTop);
            Console.WriteLine(Console.WindowWidth + " " + Console.WindowHeight + "\n" + Console.WindowWidth + " " + ((Console.WindowHeight / 2) - 2));
            Console.SetCursorPosition(0, 2);
            Console.Write("Вывод: ");
            Console.SetCursorPosition(0, (1 + (Console.WindowHeight / 2)));
            Console.Write("Ввод: ");
        }

        /*public string getOutputString(string s) {
            for (int i = 0; i < s.Length; i++)
            {
                if ((int)s[i] %2 == 0) {
                    _result += s[i];
                }
            }
            return _result;
        }

        public void showTimeAndSize() {
            Console.CursorVisible = false;
            Console.SetCursorPosition(0, 0);
            Console.Write("{0}x{1}", _width, _height);
            Console.SetCursorPosition(Console.BufferWidth - 8, 0);
            Console.Write("{0:00}:{1:00}:{2:00}", _h, _m, _s);
            Console.SetCursorPosition(0, 1);
            Console.CursorVisible = true;
        }

        public void showOutputString() {
            //Console.Write(string.Concat(str.OrderBy(x => x)));
            Console.WriteLine();
        }*/
    }
}
