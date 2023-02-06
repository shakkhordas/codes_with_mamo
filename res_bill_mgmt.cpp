#include<bits/stdc++.h>

using namespace std;


class Restaurent{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
};

void entry()
{
    Restaurent *chillox = new Restaurent();
    cout << "Enter number of food items: ";
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << "Enter item code: ";
        cin >> chillox->food_item_codes[i];
        cout << "Enter item name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, chillox->food_item_names[i]);
        cout << "Enter item price: ";
        cin >> chillox->food_item_prices[i];
    }
}

int main() {

    entry();

    cout << "\n\t\t\t\t\t-----Chillox-----\t\t\t\t\t";
    cout << "----------------------------------------";

    return 0;
}
