using System;
using System.Collections.Generic;
using System.Text;

namespace Karatsev03_test
{
    class Output
    {
        private readonly object locker = new object();
        public void writeSize() {
            lock (locker) {

            }
        }

        public void writeTime() {
            lock (locker)
            {

            }
        }

        public void writeInput() {
            lock (locker)
            {

            }
        }

        public void writeOutput() {
            lock (locker)
            {

            }
        }
    }
}
