using System;
using System.Collections.Generic;
using System.Linq;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
    public class Class1 : TypeLibrary.ILab4
    {
        private int _variant = 15;
        Dictionary<string, object> hash = new Dictionary<string, object>() {
            {"A", 0},
            {"B", 0},
            {"C", 0},
            {"D", 0},
            {"E", 0},
            {"X", 0},
            {"X2", 0},
            {"Y", 0}
        };
        public string[] GetAvailableVariables()
        {
            string[] variables = hash.Keys.ToArray();
            /*string[] VariableString = new string[8];
            for (int i =0; i < 9; i++) {
                Console.WriteLine("Введите {0} переменную: ", i);
                VariableString[i] = Console.ReadLine();
            }
            return VariableString;*/
            return variables;
        }

        public double GetResult()
        {
            /*double result1 = Convert.ToInt32(hash["A"]) * Convert.ToDouble(hash["X2"]);
            double result2 = result1+ Convert.ToInt32(hash["B"]) * Convert.ToDouble(hash["X"]);
            double result3 = result2 * Convert.ToDouble(hash["Y"]);
            double result4 = Convert.ToInt32(hash["D"]) * Convert.ToDouble(hash["X"]) + Convert.ToInt32(hash["E"]);
            double result5 = Convert.ToInt32(hash["C"]) / result4;*/
            double result = (((Convert.ToInt32(hash["A"]) * Convert.ToDouble(hash["X2"])) + (Convert.ToInt32(hash["B"]) * Convert.ToDouble(hash["X"]))) * Convert.ToDouble(hash["Y"])) + Convert.ToInt32(hash["C"]) / (Convert.ToInt32(hash["D"]) * Convert.ToDouble(hash["X"]) + Convert.ToInt32(hash["E"]));
            //double result = result3 + result5;
            //double result = ((hash["A"]*hash["X"]*hash["X"] + hash["B"]*hash["X"])*hash["Y"]) + (hash["C"] / (hash["D"]*hash["X"] + hash["E"]));
            return result;
        }

        public int GetVariant()
        {
            return _variant;
        }

        public void SetVariable(string variable, object val)
        {
            hash[variable] = Convert.ToDouble(val);
        }
    }