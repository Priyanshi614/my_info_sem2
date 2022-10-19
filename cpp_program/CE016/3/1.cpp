#include <iostream>
using namespace std;

void heapify(int *ptr2, int n, int i) {               // binary search
   int temp;
   int largest = i;
   int l = 2 * i + 1;
   int r = 2 * i + 2;
   if (l < n && *(ptr2+l) > *(ptr2+largest))
      largest = l;
   if (r < n && *(ptr2+r) > *(ptr2+largest))
      largest = r;
   if (largest != i) {
      temp = *(ptr2+i);
      *(ptr2+i) = *(ptr2+largest);
      *(ptr2+largest) = temp;
      heapify(ptr2, n, largest);
   }
}
void heapSort(int *ptr, int n) {              //sort array 
   int temp;
   for (int i = n / 2 - 1; i >= 0; i--)
      heapify(ptr, n, i);
   for (int i = n - 1; i >= 0; i--) {
      temp = *ptr;
      *ptr = *(ptr+i);
      *(ptr+i) = temp;
      heapify(ptr, i, 0);
   }
}
int main() {
   int num;
   cin >> num;
   int i;
   int *p=new int[num];
   for (i = 0; i<num; i++)
       cin>>*(p+i);
   
   heapSort(p, num);

   for (i = 0; i < num;i++)
       cout<<*(p+i)<<" ";
    
   delete []p;
}

