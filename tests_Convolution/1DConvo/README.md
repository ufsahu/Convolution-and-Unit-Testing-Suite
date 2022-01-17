# 1D Convolution Test 

This test follows the algorithm tested in LinearShift and 1DBasic tests, by having larger dataset as x[n] impulse input elements.

h[n] impulse response consists of 3 elements and it linearly shifts or slides element by element in x[n] sequence


This performs 1D convoluton and provides output sequence as y[n]


Following is the main formula in the test:

		y[i] = y[i]+(x[j]*h[i-j]);

where, i and j represents as x and y coordinates, when considering this linear system graphically

The test can be run by

		make clean all run

For each output element, the test checks if the answer is correct or not. After verifying, it prints a pass or fail for each element
