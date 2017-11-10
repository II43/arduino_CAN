# arduino_CAN
MATLAB-Simulink code generation library for Arduino SparkFun CAN-BUS Shield

The library had been saved in MATLAB R2014b but toolchain validation was performed only in R2017.

For simple demo application please refer to Simulink model in "examples/simple" folder.

Pre-requisities:
  1. MATLAB, Simulink and Simulink Coder
  2. Simulink Support Package for Arduino Hardware
  2. SparkFun CAN-BUS Shield for Arduino (https://www.sparkfun.com/products/13262)
  
Please note that this repository relies has some externals coming from to SparkFun CAN-Bus_Shield library (https://github.com/sparkfun/CAN-Bus_Shield.git)

To run it with different version of MATLAB (e.g. older R2014b), you might need to recompile the MEX functions by running "build_sfunctions\compile_arduino_CAN_to_mex.m". This recompiles the MEX-files for given version of MATLAB and copies them to the root directory.
