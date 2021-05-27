#include <Magick++.h>
#include <iostream>
using namespace std;
using namespace Magick;

int main(int argc, char **argv){
	InitializeMagick(*argv);

	Image image;
	try {
		image.read("test.jpeg");

		image.crop(Geometry(1080,1920,0,0));
		
		image.write("testout.jpeg");
	}
	catch( Exception &error_)
	{
		cout <<"Caught exception: "<<error_.what() << endl;
		return 1;
	}
	return 0;
}



