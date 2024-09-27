using System;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть рядок:");
        string рядок = Console.ReadLine();

        int літери = 0, цифри = 0, інші = 0;

        foreach(char символ in рядок)
        {
            if (char.IsLetter(символ)) літери++;
            else if (char.IsDigit(символ)) цифри++;
            else інші++;
        }

        Console.WriteLine($"Літер: {літери}, Цифр: {цифри}, Інших символів: {інші}");
    }
}
