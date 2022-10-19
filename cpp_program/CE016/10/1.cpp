#include<iostream>
#include<string>
#include<exception>
#include<cstring>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class InvalidColor: public std::exception {
public:
    virtual const char* what() const throw()
    {
        return "InvalidColor";
    }
};

void fill_color(string color) {
    string valid_colors[3] = {"red", "green","blue"};
    bool is_valid_color = false;
    for(int i = 0; i < 3; i++)
        if(valid_colors[i] == color) {
            is_valid_color = true;
            break;
        }
    if(!is_valid_color) {
        throw *(new InvalidColor);
    }
    /* logically code to fill color should be here
       you dont need to write any code here   */
}

int main() {
   
    string color;
    cin >> color;
 try{
    fill_color(color);
}
    catch(InvalidColor &invalid_color){
        cout<<invalid_color.what();
    }
    return 0;
}
