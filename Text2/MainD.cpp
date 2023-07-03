#include "Text.cpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Ahoj Tome" << endl;

    char *string="nazdarek";
    Text st(10, string);
    st.display();
    char*sub=st.substring(3,6);
    Text sb(10,sub);
    sb.display();
    sb.append("ebak");
    sb.display();
    sb.obliterate();
    sb.display();
    cout << "Ahoj Tome 2" << endl;
    return 0;
}