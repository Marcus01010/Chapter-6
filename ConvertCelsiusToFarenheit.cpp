#include <iostream>
using namespace std;

struct temperature_record
{
    float celsius;
};

void convert_to_fahrenheit(temperature_record &temp_ref)
{
    temp_ref.celsius = (temp_ref.celsius * (9.0f / 5.0f)) + 32.0f;
    cout << "Inside function (reference): " << temp_ref.celsius << endl;
}

int main()
{
    temperature_record temp_main;

    cin >> temp_main.celsius;

    cout << "Before call (main): " << temp_main.celsius << endl;

    convert_to_fahrenheit(temp_main);

    cout << "After call (main): " << temp_main.celsius << endl;

    return 0;
}
