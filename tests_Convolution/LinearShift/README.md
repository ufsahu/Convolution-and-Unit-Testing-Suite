# Convolution Linear Shift Test 

This test checks the basic algorithm for linear shift convolution. It further helped in making 1D Convolution tests.

x[n] consists of impulse input element sequences 
h[n] is the impulse response in this case


h[n] linearly shifts or slides element by element in x[n] sequence, performing convolution and giving output sequence as y[n]



Following is the main formula in the test:
	
		y[i] = y[i]+(x[j]*h[i-j]);

where, i and j represents as x and y coordinates, when considering this linear system graphically


The test can be run by	
		
		make clean all run

For each output element, the test checks if the answer is correct or not. After verifying, it prints a pass or fail for each element
