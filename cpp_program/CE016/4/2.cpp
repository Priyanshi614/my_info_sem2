#include <iostream>
using namespace std;

class rectangle {
    int x1 , x2, y1,y2,z1,z2,w1,w2;
    public :
    int k = 1;
    void initialize(int a1,int a2,int b1,int b2,int c1,int c2,int d1,int d2){
       
           if(k==1){
               x1 = a1 ;
               x2 = a2;
               y1 = b1 ;
               y2 = b2;
                z1 = c1 ;
               z2 = c2 ; 
               w1 = d1 ;
               w2 = d2;
               k=0;
           }
    }
    
    void m_left(int units){
        x1 -= units; y1 -= units ;
          z1 -= units ; w1 -= units ;}
    
    void m_right(int units){

        x1 += units; y1 += units ;

          z1 += units ; w1 += units ;}
    
    void m_up(int units){

        x2 += units; y2+=units ;

          z2 += units ; w2 += units ;}

    

    void m_down(int units){

        x2 -= units; y2 -= units ;

          z2 -= units ; w2 -= units ;}
    
  void m_i_top(int units){
      x2 += units ; y2 += units ;}
    
    void m_i_left(int units){
        x1 -= units ; z1 -= units ;}
    
    void m_i_right(int units){
        y1 += units ; w1 += units ;}
    
    void m_i_bottom(int units){
       y2 -= units ; w2 -= units ;}
    
    void m_d_left(int units){
       x1 += units ; z1 += units ;}
    
    void m_d_top(int units){
        x2 -= units ; y2 -= units ;}
    
    void m_d_right(int units ){
        y1 -= units ; w1 -= units ;}
    
    void m_d_bottom(int units){
        z2 += units ; w2 += units ;}
    
    void print_position(){
        cout << x1 <<" " << x2 << endl ;
        cout << y1 <<" " << y2 << endl ;
        cout << z1 <<" " <<z2 << endl ;
        
     cout << w1 <<" " << w2 << endl ;}
    
    
    }; 


int main()
{
    rectangle r ;
    int n , a1,a2,b1,b2,c1,c2,d1,d2,i,units;
    char direction , direction1 , direction2 ;
    
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2 ;
    r.initialize(a1, a2,b1,b2,c1,c2,d1,d2);
    
   cin >> n ;
    for ( i = 0 ; i < n ; i++)
    {
        cin >> direction ;
        if(direction == 'L'){ cin >> units ;
            r.m_left(units);}
        
     else if(direction == 'R'){ cin >> units ;

            r.m_right(units) ;}
        
        
        else if(direction == 'U'){ cin >> units ;
            r.m_up(units) ;}
        
        
        else if(direction == 'D'){ cin >> units ;
            r.m_down(units) ;}
        
        else if(direction == 'A'){
            cin >> direction1 ;
            if(direction1=='I'){              // increase
                cin >> direction2 >> units;
                if(direction2 == 'T')
                    r.m_i_top(units);
                else if(direction2 == 'L')
                    r.m_i_left(units);
                else if(direction2 == 'R')
                    r.m_i_right(units);
                else
                     r.m_i_bottom(units);
                 }
            else {                                 //decrease
                cin >> direction2 >> units ;
                if(direction2 == 'T')
                    r.m_d_top(units);
                else if(direction2 == 'L')
                    r.m_d_left(units);
                else if(direction2 == 'R')
                    r.m_d_right(units);
                else
                    r.m_d_bottom(units);
                }
            }
        
    }
    r.initialize(0,0,0,0,0,0,0,0);
   r.print_position();
    
    return 0;
}
