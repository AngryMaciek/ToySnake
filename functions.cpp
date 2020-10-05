/*
###############################################################################
#
#   Test: interfacing from Python to C++
#   Based on:
#   https://github.com/pybind/pybind11
#
#   AUTHOR: Maciej_Bak
#   AFFILIATION: Swiss_Institute_of_Bioinformatics
#   CONTACT: very.angry.maciek@gmail.com
#   CREATED: 05-10-2020
#   LICENSE: MIT
#
###############################################################################
*/

#include <pybind11/pybind11.h>

// simple example
int add(int i, int j) {
    return i + j;
}

// binding C++ code to Python
PYBIND11_MODULE(functions, m) {
    m.doc() = "Module: example functions";
    m.def("add", &add, "A function which adds two numbers");
}
