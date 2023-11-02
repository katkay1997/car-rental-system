
Target = csv_viewer.out

all: 
	g++ -I./rapidcsv/src csv_viewer.cpp -Wall -o $(Target)
