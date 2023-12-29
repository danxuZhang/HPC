cmake_minimum_required(VERSION 3.10)

project (HW_01 LANGUAGES CUDA C CXX)

include (CheckLanguage)
check_language(CUDA)

add_executable(hello hello.cu)
add_executable(vector_add vector_add.cu)
add_executable(matrix_mul matrix_mul.cu)