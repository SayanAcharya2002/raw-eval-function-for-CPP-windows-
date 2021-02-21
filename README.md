# raw-eval-function-for-CPP-windows-
it gives raw evaluation of an expression in cpp using file handling

Namespace: sayan

dependencies: iostream, fstream, string

return type: template

function overview: T eval(const string& s)

work: evaluates expressions

usage: sayan::eval<datatype>(string);
  
Note: works for windows because it deletes the intermediates. To convert to Linux or mac just change the "del" portion to equivalent deleting command (e.g. rm in Linux).
