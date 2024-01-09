#include <iostream>​
#include <string>​
#include <locale.h>

int main() {
    using namespace std;
    int k[1000], m[1000], i, viagens = 0, r0, r1;
    for (i = 0; i < 1000; i++)
    {
        do {
            cin >> k[i];
            cin >> m[i];
        } while ((k[i] > 100 || k[i] < 0) || (m[i] > 999 || m[i] < 0));


        if (k[i] == 0 && m[i] == 0 && viagens > 1) {
            break;
        }
        else if (k[i] == 0 && m[i] == 0 && viagens <= 1)
        {
            cout << "Número insuficiente de passeios, você meteu água";
            break;
        }
        else
        {
            viagens = viagens + 1;
        }
    }
  for (i = 1; i < viagens; i++)
    {
        r0 = (k[i - 1] * 1000 + m[i - 1]);
        r1 = (k[i] * 1000 + m[i]);
        if (r0 > r1)
        {
            cout << "BAIXO " << ((r0 - r1) / 1000) << "km " << ((r0 - r1) % 1000) << "m \n";
        }
        else if (r0 < r1)
        {
            cout << "ALTO " << ((r1 - r0) / 1000) << "km " << ((r1 - r0) % 1000) << "m \n";
        }
        else
        {
            cout << "PATAMAR \n";
        }
    }
 return 0;
}