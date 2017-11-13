# arduino_CAN_simple_example

Please note that in your code generation settings of your Simulink model you must:

1) Include additional directories
![code_generation_setup_additional_include_directories](code_generation_setup_additional_include_directories.png)

2) Include additional source code
![code_generation_setup_additional_source_files](code_generation_setup_additional_source_files.png)

Otherwise the build will not succeed as these files are required.