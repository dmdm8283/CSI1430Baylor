//struct
#include<string>
#include <iostream>
using namespace std;

/*struct test{
    int num;
    double val;
    string name;
    char ch;
}v1;*/

struct Book{
    string title;
    double location;
    string category;
}b1;

int main(){
    Book b2;
    Book b3;

    b1 = {"title1", 12.23, "classic"};
    b2.title = "book2";
    b2.location = 34.56;
    b2.category = "fiction";

    cout << " enter title";
    cin >> b3.title;

    cout << " enter location";
    cin >> b3.location;

    cout << " enter category";
    cin >> b3.category;

    cout << b1.title << " " << b1.location << " " << b1.category << endl;
    return 0;
}