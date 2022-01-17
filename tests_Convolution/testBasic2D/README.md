# 2D Convolution Basic Test 

This test checks the basic convolution algorithm for 2D dataset [4x4] by using a Filter matrix [2x2]

Filter matrix [2x2] cuts off the edges of the input matrix [4x4], convolving it into an output matrix of [3x3]

The test prints the input and filter matrix values. After convolving, it prints the output values as well


In this test, each output element has been calculated in the algorithm, instead of having an entire nested loop

This is a basic unit test just to see how 2D convolution functions


The test can be run by

		make clean all run

For each output element, the test checks if the element is correct or not. After verifying, it prints a pass or fail for each element
