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

namespace py = pybind11;

// a simple example
int add2numbers(int i, int j) {
    return i + j;
}

// binding C++ code to Python
PYBIND11_MODULE(functions, m) {
    m.doc() = "Module: example C++ functions";
    m.def("add2numbers", &add2numbers, "A function which adds two numbers",
      py::arg("x"), py::arg("y"));
}
