using System;

class ��������
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("������ �����:");
        string ����� = Console.ReadLine();

        int ����� = 0, ����� = 0, ���� = 0;

        foreach(char ������ in �����)
        {
            if (char.IsLetter(������)) �����++;
            else if (char.IsDigit(������)) �����++;
            else ����++;
        }

        Console.WriteLine($"˳���: {�����}, ����: {�����}, ����� �������: {����}");
    }
}
