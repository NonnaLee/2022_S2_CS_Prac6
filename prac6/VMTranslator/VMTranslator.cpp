#include <string>

#include "VMTranslator.h"
//#include "S.h"
//#include "S.cpp"
using namespace std;





/**
 * VMTranslator constructor
 */
VMTranslator::VMTranslator() {
    // Your code here
    
}

/**
 * VMTranslator destructor
 */
VMTranslator::~VMTranslator() {
    // Your code here
}

/** Generate Hack Assembly code for a VM push operation */
string VMTranslator::vm_push(string segment, int offset){
    //S s;
    string str;
    str += "// Push " + segment + " " + to_string(offset) + "\n";
    if (segment == "constant") {
        // Set Data to constant
        str += "// push constant " + to_string(offset) + "\n" +
        str += "@" + to_string(offset) + "\n";
        str += "D=A\n";
    }
    else if (segment == "temp") {
        str += "@(5+" + to_string(offset) + ")\n";
        str += "D=M\n";
    }
    else if (segment == "static") {  
        str += "@R" + to_string(offset) + "\n";
        str += "D=M\n";
    }

    // Push Constant On Stack
    str += "@SP\n";
    str += "A=M\n";
    str += "M=D\n";

    // Inc Stack Pointer
    str += "@SP\n";
    str += "M=M+1\n";
    return str;
}

/** Generate Hack Assembly code for a VM pop operation */
string VMTranslator::vm_pop(string segment, int offset){
    //S::PopGlobalStack();
    string str; 
    // Set Data to Stack Pointer
    str += "@SP // pop static " + to_string(offset) + "\n";
    str += "A=M\n";
    str += "D=M\n"; 
    // Set Static to Data
    str += "@"+to_string(offset)+"\n";
    str += "M=D\n";
    // Pop Stack Pointer
    str += "@SP\n";
    str += "M=M-1\n";
    return str;
}

/** Generate Hack Assembly code for a VM add operation */
string VMTranslator::vm_add(){
    //S::PopGlobalStack();
    //auto m = S::PopGlobalStack();
    return "";
    //return "D=M // ADD \n"
    //        "@="+ to_string(m) +"\n"
    //        "D=M+D\n";
}

/** Generate Hack Assembly code for a VM sub operation */
string VMTranslator::vm_sub(){
    return "";
}

/** Generate Hack Assembly code for a VM neg operation */
string VMTranslator::vm_neg(){
    return "";
}

/** Generate Hack Assembly code for a VM eq operation */
string VMTranslator::vm_eq(){
    return "";
}

/** Generate Hack Assembly code for a VM gt operation */
string VMTranslator::vm_gt(){
    return "";
}

/** Generate Hack Assembly code for a VM lt operation */
string VMTranslator::vm_lt(){
    return "";
}

/** Generate Hack Assembly code for a VM and operation */
string VMTranslator::vm_and(){
    return "";
}

/** Generate Hack Assembly code for a VM or operation */
string VMTranslator::vm_or(){
    return "";
}

/** Generate Hack Assembly code for a VM not operation */
string VMTranslator::vm_not(){
    return "";
}

/** Generate Hack Assembly code for a VM label operation */
string VMTranslator::vm_label(string label){
    return "";
}

/** Generate Hack Assembly code for a VM goto operation */
string VMTranslator::vm_goto(string label){
    return "";
}

/** Generate Hack Assembly code for a VM if-goto operation */
string VMTranslator::vm_if(string label){
    return "";
}

/** Generate Hack Assembly code for a VM function operation */
string VMTranslator::vm_function(string function_name, int n_vars){
    return "";
}

/** Generate Hack Assembly code for a VM call operation */
string VMTranslator::vm_call(string function_name, int n_args){
    return "";
}

/** Generate Hack Assembly code for a VM return operation */
string VMTranslator::vm_return(){
    return "";
}