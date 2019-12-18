# The project
It is a mountain scenery generator, which three types of images will be randomly generated: day, twilight and night. The main focus of the code is associated with the algorithm that creates the contour line, called midpoint displacement, giving the mountain look.

## How compile?
Just run:
	$ make
	
## How to execute?
Just execute the main file and set the offset factor and the name of file generated.

$ ./main -d 70 -o montain.ppm

### Parameters:  
 - d - Defines the offset factor;   
 - o - Name the file that will be
   generated.


After execution, note that the .ppm file will be automatically generated.  

*We suggest that the factor value be chosen from 0 to 150 for a more appreciable view of the mountain.*


