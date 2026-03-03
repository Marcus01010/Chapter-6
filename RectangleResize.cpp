#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int width;
};

void resize_rectangle(rectangle rect_copy, int factor)
{
    rect_copy.length = rect_copy.length * factor;
    rect_copy.width = rect_copy.width * factor;

    int area_inside = rect_copy.length * rect_copy.width;
    cout << "Area inside function (copy): " << area_inside << endl;
}

int main()
{
    rectangle rect_main;
    int factor;

    cin >> rect_main.length;
    cin >> rect_main.width;
    cin >> factor;

    int area_before = rect_main.length * rect_main.width;
    cout << "Area before call (main): " << area_before << endl;

    resize_rectangle(rect_main, factor);

    int area_after = rect_main.length * rect_main.width;
    cout << "Area after call (main): " << area_after << endl;

    return 0;
}
