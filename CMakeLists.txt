cmake_minimum_required(VERSION 3.10)
project(Calculator C)

# Add include directory for header files
# include_directories()

# Add the executable target
add_executable(calculator src/main.c src/calculator.c)
