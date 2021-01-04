#include <list> 
#include <Magick++.h> 
#include <iostream>
using namespace std; 
using namespace Magick;

int main() 
{ 
   list<Image> imageList; 
   readImages( &imageList, "test.gif" );

   Image appended; 
   appendImages( &appended, imageList.begin(), imageList.end() ); 
   appended.write("appended_image.gif"); 
   return 0; 
}
