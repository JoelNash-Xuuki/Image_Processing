MAGICK		= `Magick++-config --cppflags --cxxflags --ldflags --libs`
DRAW		= Draw/Draw.cpp
FRAMES		= Handle_Frames/frames.cpp
IMAGE		= Image/image.cpp
CC			= g++

#test_draw: $(DRAW) 
#	g++ -o test_draw $(DRAW) $(MAGICK)

#test_frame: $(FRAMES) 
#	g++ -o test_frame $(FRAMES) $(MAGICK)

test_image: $(IMAGE)
	g++ -o test_image $(IMAGE) $(MAGICK)
