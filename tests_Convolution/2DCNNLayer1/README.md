# Test 2D Convolutional Neural Network (CNN) Layer1

This test follows the convolution algorithm tested in testMain2D on a larger dataset


Input pixel data is of [16x16] size and 32-bit datatype in dataset.h


\
Filter matrix [3x3] slides through [16x16] data, cutting off the edges and convolving it into [14x14]


The test further checks the calculated output data [14x14] to the stored data [14x14] in dataset.h and verify using the basic if-else logic


\
The test checks each matrix element based on its numbered position row and column comparing the calculated output [14x14] and the stored data [14x14]
            
This 2D convolution calculation and comparison makes an entire neural network in the test
                   
                      
The process of using input 2Ddata for 2D convolution, further giving and validating the output makes the test behave as of a single layer in CNN


\
The test can be run by

		make clean all run


After verifying, it prints a pass or fail for each element
 
