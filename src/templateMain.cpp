#include<iostream>
#include<vector>

//template<typename T> struct is_vector : public std::false_type {};

//template<typename T, typename A>
//struct is_vector<std::vector<T, A>> : public std::true_type {};

template<class T>
void exceptAndPrint(T _val){
    std::cout << _val << std::endl;

//    if(is_vector(T)){
//        for(auto &x: _val){
//            std::cout << _val << std::endl;
//        }
//    }
}



int main(){
    int i = 10;
    char c = 'k';
    std::string s = "hmm";
    double d = 10.2;
    exceptAndPrint(i);
    exceptAndPrint(c);
    exceptAndPrint(s);
    exceptAndPrint(d);

}
