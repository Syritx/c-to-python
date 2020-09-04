#include "Python/Python.h" // or "Python.h"

int main(int argc, char *argv[]) {

    Py_SetProgramName(argv[0]);
    Py_Initialize();
    PyRun_SimpleString("print('this was run by C')");
    Py_Finalize();
}
