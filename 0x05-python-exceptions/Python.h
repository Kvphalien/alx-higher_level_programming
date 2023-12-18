#include <Python.h>

void safe_print_list(PyObject *my_list, int x);

void safe_print_integer(PyObject *value);

int safe_print_list_integers(PyObject *my_list, int x);

void safe_print_division(PyObject *a, PyObject *b);

PyObject *list_division(PyObject *my_list_1, PyObject *my_list_2, int list_length);

void raise_exception();

void raise_exception_msg(const char *message);

void safe_print_integer_err(PyObject *value);

void safe_function(PyObject *fct, PyObject *args);

int magic_calculation(int a, int b);

void print_python_list(PyObject *p);

void print_python_bytes(PyObject *p);

void print_python_float(PyObject *p);
