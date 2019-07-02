using System;
using System.Collections.Generic;
using System.Text;

namespace Karatsev03_test
{
    class Input
    {
        private DateTime _now;
        private string _result;
        int _height;
        int _width;
        ConsoleKeyInfo _key;
        private string _str = "";
        private readonly object locker = new object();

        private DateTime getHour() {
            _now = DateTime.Now;
            return _now;
        }

        private ConsoleKey getKey() {
            if (Console.KeyAvailable)
            {
                _key = Console.ReadKey(true);
            }
            return _key.Key;
        }

        private int getHeight() {
            _height = Console.WindowHeight;
            return _height;
        }

        private int getWidth() {
            _width = Console.WindowWidth;
            return _width;
        }
    }
}
