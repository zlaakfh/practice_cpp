#include <iostream>
#include <string>
using namespace std;

class Weather {
public:
    string date;
    string day;
    string condition;

};


int main() {
    int n;
    cin >> n;

    Weather w[n];
    for (int i = 0; i < n; i++) {
        cin >> w[i].date >> w[i].day >> w[i].condition;
    }

    int minidx = -1;
    for (int i = 0; i < n; i++) {
        if (w[i].condition == "Rain") {
            if (minidx == -1 || w[i].date < w[minidx].date) {
                minidx = i;
            }
        }
    }

    cout << w[minidx].date << " " << w[minidx].day << " " << w[minidx].condition;
    
    return 0;
}