#include "Text.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Ahoj Tome" << endl;

     char const *string = "nazdar";
    char const* app = "ebak";
    Text st(50, string);
    st.display();
    char* sub = st.substring(3, 6);
    Text *sb=new Text(10, sub);
    sb->display();
    sb->append(app);
    sb->display();
    sb->obliterate();
    sb->display();
    delete sb;
    cout << "Ahoj Tome 2" << endl;

    return 0;
}