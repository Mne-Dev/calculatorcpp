#include <iostream>

void clean()
{
	printf("\e[1;1H\e[2J");
}

using namespace std;

int main()
{

    float num1;
    float num2;
    float sonuc;
    char opr;

    clean();
    std::cout << "Lutfen bir islem seciniz\n1-Toplama '+'\n2-Cikarma '-'\n3-Carpma '*'\n4-Bölme '/'\n";
    cin >> opr;
    clean();

    std::cout << "Lutfen ilk sayiyi giriniz: " << endl;
    cin >> num1;
    clean();

    std::cout << "Lutfen ikinci sayiyi giriniz: " << endl;
    cin >> num2;
    clean();

    switch (opr)
    {
    case '+':
        sonuc = num1 + num2;
        std::cout << "Iki sayinin toplami: " << sonuc << endl;
        break;
    case '-':
        sonuc = num1 - num2;
        std::cout << "Iki sayinin farki: " << sonuc << endl;
        break;
    case '*':
        std::cout << "Iki sayinin carpimi: " << sonuc << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            sonuc = num1 / num2;
            std::cout << "Iki sayinin bolumu: " << sonuc << endl;
        }
        else
        {
            std::cout << "Bolen sifir olamaz!" << endl;
            return 0;
        }
        break;
    default:
        clean();
        std::cout << "Lutfen uygun operator kullanin!" << endl;
        break;
    }

    return 0;
}
