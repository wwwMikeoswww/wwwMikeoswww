

#include <iostream>

class Drob
{
    double chis1;
    double znamen1;
    double chis2;
    double znamen2;
public:
    Drob(double chis1p,double znamen1p,double chis2p,double znamen2p) : chis1{ chis1p }, znamen1{ znamen1p }, chis2{ chis2p }, znamen2{ znamen2p } {}
    double Plus()
    {
        return (chis1 / znamen1) + (chis2 / znamen2);
    };
    double Minus()
    {
        return (chis1 / znamen1) - (chis2 / znamen2);
    };
    double Pomn()
    {
        return (chis1 / znamen1) * (chis2 / znamen2);
    };
    double Podil()
    {
        return (chis1 / znamen1) / (chis2 / znamen2);
    };
};
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "1c ";
    cin >> a;
    do {
        cout << "1z ";
        cin >> b;
    } while (b == 0);
    cout << "2c ";
    cin >> c;
    do {
        cout << "2z ";
        cin >> d;
    } while (d == 0);
    Drob Drop(a, b, c, d);
    cout << Drop.Plus() << "\n" << Drop.Minus() << "\n" << Drop.Pomn() << "\n" << Drop.Podil();
}