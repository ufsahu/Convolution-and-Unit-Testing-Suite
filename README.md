# Convolution and Unit Testing Suite

The open source code for this suite was generated as software testing techniques for a RISC-V and PULPissimo based design. 
This was part of the FitOptiVis project and conducted in accordance with a research study at the University of Turku (UTU), Turku, Finland.

FitOptiVis, grant no: 2017-2-783162 (https://www.ecsel.eu/projects/fitoptivis)

The study and FitOptiVis project as a whole is part of the EU Joint Undertaking program ECSEL (http://www.ecsel-ju.eu/web/index.php) project.

The convolution testing suite consists of test cases based on certain deep learning techniques, such as convolutional neural networks (CNN), using C Language.

Overall in the study project, image processing accelerators were being developed and this convolution suite comprises of similar functions implemented in software, providing performance comparisons and a way to test the correctness of the results.

The unit testing suite was developed based on the limitations present in the system for the first chip design. Major limitations included the printf function not printing variable datatypes and the system being unable to handle larger input matrix data.

Unit test cases provided as a testing strategy that did not put stress on the system and contributed in verifying RISC-V based instructions.

The second chip design did not consist of the mentioned limitations and the convolution tests were well suited in that testing environment. 
