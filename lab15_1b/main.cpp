#include <iostream>

using namespace std;
struct diak{
int azonosito;
string nev;
string osztaly;
double media;
} diakok[1000];

int main()
{
    int min, idx;
    int n;
    ifstream in("input.txt");
    input>>n;
    for (int i=0;i<n;i++) {
        in >> diakok[i].azonosito;
        in >> diakok[i].nev;
        in >> diakok[i].osztaly;
        in >> diakok[i].media;

    if (i==0) {
        min=diakok[i].media;
    }
    if (diakok[i].media<min) {
        min=diakok[i].media;
        idx=diakok[i].azonosito;
    }
    }
    cout << idx << endl;
    return 0;
}

