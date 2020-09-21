//pomenyat' mestami dva elementa massiva, vvedennie s klaviatury
#include <iostream>
using namespace std;
 
int main()
{
   int mas[6] = {1,2,4,5,7,8};
 
   cout << "Input:\n";
   for (int i = 0; i < 6; i++) cout << "  " << mas[i];
 
   for (int i = 1; i < 6; i += 2)
    { int t = mas[i-1];
      mas[i-1] = mas[i];
      mas[i] = t;
    }
 
   cout << "\n\nOutput:\n";
   for (int i = 0; i < 6; i++) cout << "  " << mas[i];
   cout << endl;
 
   system("pause");
   return 0;
}
