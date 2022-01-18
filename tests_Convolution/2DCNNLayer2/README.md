# Test 2D Convolutional Neural Network (CNN) Layer2

This test follows the CNN layer algorithm in the test 2DCNNLayer1 and same dataset, followed by the addition of a 2nd layer

Input pixel data is of [16x16] size and 32-bit datatype in dataset.h

The test is initiated with the First Layer, where the Filter matrix [3x3] slides through [16x16] data, cutting off the edges and convolving it into [14x14]


The test further checks the calculated output data [14x14] to the stored data [14x14] in dataset.h and verify using the basic if-else logic

The output data [14x14] from the First Layer becomes input for the Second Layer and a second Filter matrix [3x3] slides through the [14x14], cutting off the edges and convolving it into [12x12]

In both layers, The test checks each matrix element based on its numbered position row and column comparing the calculated output and the stored data in dataset.h

This 2D convolution calculation and comparison makes a 2-Layered neural network in the test


The process of using input 2Ddata for 2D convolution, convolving, verifying and providing it as input data to another layer, further giving and validating the output makes the test behave as of a double layer in CNN
