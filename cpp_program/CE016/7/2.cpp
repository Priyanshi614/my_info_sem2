#include <iostream>
#include<iomanip>
using namespace std;

class Rectangle{
    double x , y , l , w;
    public :
 
    Rectangle(double x, double y, double l , double w){
        this->x = x;
            this->y=y;
            this->l=l;
            this->w=w;
    }
    
    Rectangle operator-(double num){  // move left side
        x = x-num;
        return *this;
      }
    
    Rectangle operator+(double num){     //  move right side
        x = x+num;
        return *this;
      }
    
    Rectangle operator>>(double num){ // increase length
        l = l+num;
        return *this;
      }
    
    Rectangle operator<<(double num){     //decrease length
        l = l-num;
        return *this;
      }
    
    void print(){
    cout << fixed << setprecision(2);
        cout << x << " " << y << " " << l << " " << w ; 
     }
};

int main() {
    double x , y, l ,w ;
    cin >> x >> y >> l >> w;
    Rectangle r(x,y,l,w);
    int n;
    cin >> n;
    char operation;
    for(int i=0;i<n;i++){
        cin >> operation;
        if(operation=='L'){
            double num ;
            cin >> num ;
            r = r - num ;     
        }
       else if(operation=='R'){
             double num ;
            cin >> num ;
           r = r + num ;
        }
       else if(operation=='I'){
             double num ;
            cin >> num ;
          r = r >> num ;
           
        }
      else if(operation=='D'){
             double num ;
            cin >> num ;
          r = r << num ;
        }
    }
    
    r.print();
    
    return 0;
}

    

