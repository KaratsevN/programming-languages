using System;
/*using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
*/

namespace ConsoleOutput
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.TreatControlCAsInput = true;
            Output output = new Output();
            Console.CursorVisible = false;
            do
            {
                System.Threading.Thread.Sleep(20);
                output.getAndShowSize();
                output.isKey();
                output.getAndShowTime();
            } while (true);
        }
    }
}
