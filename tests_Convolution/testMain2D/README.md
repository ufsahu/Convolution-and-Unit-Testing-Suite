# 2D Convolution Main Test 

This test checks the basic convolution algorithm for 2D pixel dataset [8x8] by using a Filter matrix [3x3]

Filter matrix [3x3] cuts off the edges of the pixel matrix [8x8], convolving it into an output matrix of [6x6]


This test has nested loop algorithm for 2D convolution

The test initially prints the input [8x8], further convolving and printing the output [6x6]

The algorithm follows the 2D convolution process where the [3x3] filter slides across the elements in the pixel matrix [8x8]


The test can be run by

		make clean all run

This test does not verify the output, but is more focused on the basic nested loop logic of the algorithm
