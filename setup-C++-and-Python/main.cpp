#include <Python.h>
#include <iostream>
#include <string>

int main()
{
    /* I am considering usiing this instead of literals. */
    //string script_name = "myfirstprogram";
    //string subroutine_name = "printsomething";

    std::cout << "Start 1 \n";

    /* Start the interpreter. */
    Py_Initialize();
    std::cout << "2\n";

    /* You must set the path for this to work */
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append(\".\")");

    /* Load the python script. */
    PyObject* my_module = PyImport_ImportModule("myfirstprogram"); 
    std::cerr << my_module << "\n";
    PyErr_Print();
    std::cerr << "3\n";
    
    /* Call the subroutine within the python script. */
    PyObject* my_function = PyObject_GetAttrString(my_module,"printsomething");
    std::cout << "4\n";

    /* Print the output of the python script. */
    PyObject* my_result = PyObject_CallObject(my_function, NULL);
    Py_Finalize();
    return 0;
}

