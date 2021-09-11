using System;
namespace primera_Aplicacion
{
    class Program
    {
        static void Main(string[] args)
        {
            int baseNum = 5;
            int potenciaNum = 3;
            int res = 1;

            for (int i = 0; i < potenciaNum; i++)

            {
                res = res * baseNum;
            }
            Console.WriteLine($"el resultado es {res}");
        }
    }
}
