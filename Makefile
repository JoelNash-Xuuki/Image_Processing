MAGICK		= `Magick++-config --cppflags --cxxflags --ldflags --libs`
DRAW		= Draw/Draw.cpp
FRAMES		= Handle_Frames/frames.cpp
CC			= g++

#test_draw: $(DRAW) 
#	g++ -o test_draw $(DRAW) $(MAGICK)

test_frame: $(FRAMES) 
	g++ -o test_frame $(FRAMES) $(MAGICK)
