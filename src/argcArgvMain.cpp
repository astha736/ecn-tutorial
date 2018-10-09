#include<iostream>


/*
 * argc: counts the number of inputs given during
 * file execution "./argcArgvMain hello" will be 2
 *
 * astha@astha-PC:~/EMARO/APRO/tutorial/build$ ./argcArgvMain
 * argc: 1
 * ./argcArgvMain
 *
 * astha@astha-PC:~/EMARO/APRO/tutorial/build$ ./argcArgvMain hello
 * argc: 2
 * ./argcArgvMain
 * hello
 */
int main(int argc, char** argv){

    std::cout << "argc: " << argc << std::endl;
    for(int i=0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }

    char* arg1 = *argv;
    std::cout << arg1 << std::endl;
    std::cout << sizeof(*arg1) << std::endl;

//    char c;
//    while(c != '\0'){
//        c = *arg1 ;
//        std::cout << c << std::endl;
//        arg1 = arg1+1;
//    }
//    char k[] = *arg1;

//    char m[100];
//    m = k;

//    std::cout << sizeof(m) << std::endl;
}
