### Bug Clustering Using Bounded Model Checking

* The code is built upon the existing software CBMC (C-Based Bounded Model Checking) (See LICENSE). 

####USAGE

##### DirectFix

* Set the components to be added manually. It is self-explanatory in the cbe.cpp file, in the constructor for the test_caset class.

* Use the command-
   
  `<program/path>/cbmc --direct-fix --outfile directfix-out` - to generate the formula.
  
  Pass the directfix-out file to the solver -

  `<path/to/source>directfix-prototype/maxsat directfix-out > smt1_out`
  
  Please keep both the files in the same directory. Use the postprocessing.py script to make sense out of the solution - 
 
  `python <path/to/source>directfix-prototype/postprocessing.py` - it'll automatically detect the two files.
  
  
