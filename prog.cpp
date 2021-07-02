#include <list> 
#include <Magick++.h> 
#include <iostream>
using namespace std; 
using namespace Magick;

int main(int argc,char **argv){ 

try {

   InitializeMagick(*argv);
   Image image;
   image.read("/home/joel/imagefiles/_MG_3929.JPG");
   image.chop("500x500");
   image.write("myImage.jpg");
   }
   catch( exception & error_ ) 
   { 
     cout << "Caught exception: " << error_.what() << endl; 
     return 1; 
   }


   return 0; 
}
