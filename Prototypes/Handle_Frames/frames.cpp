#include <list> 
#include <Magick++.h> 
#include <iostream>
using namespace std; 
using namespace Magick;

int main() 
{ 
   list<Image> imageList; 
   readImages( &imageList, "test.jpeg" );

   Image appended; 
   appendImages( &appended, imageList.begin(), imageList.end() ); 
   appended.write("out.jpeg"); 
   return 0; 
}
