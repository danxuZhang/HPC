cmake_minimum_required(VERSION 3.10)

project(CUDA_TRAINING LANGUAGES CUDA C CXX)

include(CheckLanguage)
check_language(CUDA)

add_subdirectory(hw01)
add_subdirectory(hw02)
add_subdirectory(hw03)
add_subdirectory(hw04)
add_subdirectory(hw05)
