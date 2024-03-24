#include <iostream> 
#include <Math.h> 
using namespace std;

bool equal(int N, int S, int sum1 = 0, int sum2 = 0);


int main()
{
    setlocale(LC_ALL, "");
    int S, N;

    while (true)
    {
        try {
            cout << "¬ведите число N: ";
            cin >> N;
            if (cin.fail())
                throw "";
            cout << "¬ведите число S: ";
            cin >> S;
            if (cin.fail())
                throw "";

            if (equal(N, S, 0, 0))
                cout << "—уммы цифр равны" << endl;
            else
                cout << "—уммы цифр не равны" << endl;

            break;
        }
        catch (...)
        {
            cout << "¬ведены некорректные значени€: \n";
            cin.clear();
            while (cin.get() != '\n');
        }
    }
}




bool equal(int N, int S, int sum1, int sum2)
{
    if (N == 0 && S == 0 && sum1 == sum2)
        return true;
    else if (N == 0 && S == 0 && sum1 != sum2)
        return false;
    return equal(N / 10, S / 10, sum1 += N % 10, sum2 += S % 10);
}