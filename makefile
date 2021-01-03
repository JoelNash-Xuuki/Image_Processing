test: Drawable_Test.cpp
	g++ -o test Drawable_Test.cpp `Magick++-config --cppflags --cxxflags --ldflags --libs`
