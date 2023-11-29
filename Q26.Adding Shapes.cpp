
#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <ios>
#include <set>
#include <map>
 
class circle{
    public:
        int radius;
};
 
class square{
    public:
        int side;
};
 
class shape{
    public:
        std::set<int> circle_radius;
        std::set<int> square_side;
 
        void operator+(circle cir){
            std::set<int> circle_radius_f = circle_radius;
            std::set<int> square_side_f = square_side;
            
            circle_radius_f.insert(cir.radius);
 
            for(int i : circle_radius_f)
                std::cout << i << " ";
            std::cout << std::endl;
 
            for(int i : square_side_f)
                std::cout << i << " ";
            std::cout << std::endl;
 
        }
 
        void operator+(square sq){
            std::set<int> circle_radius_f = circle_radius;
            std::set<int> square_side_f = square_side;
            
            square_side_f.insert(sq.side);
 
            for(int i : circle_radius_f)
                std::cout << i << " ";
            std::cout << std::endl;
 
            for(int i : square_side_f)
                std::cout << i << " ";
            std::cout << std::endl;
        }
        
        void operator+(shape shp){
            shape sh_ret;
            
            sh_ret.circle_radius = circle_radius;
            
            for(auto i : shp.circle_radius)
                sh_ret.circle_radius.insert(i);
            
            sh_ret.square_side = square_side;
            
            for(auto i : shp.square_side)
                sh_ret.square_side.insert(i);
 
            for(int i : sh_ret.circle_radius)
                std::cout << i << " ";
            std::cout << std::endl;
 
            for(int i : sh_ret.square_side)
                std::cout << i << " ";
            std::cout << std::endl;
        }
};
 
 
std::ostream& operator<<(std::ostream& os, std::set<int> obj){
    for(auto i : obj)
        os << i << " ";
    return os;
}
 
 
int main(){
 
    int n_circle, n_square, n_shape;
 
    std::cin >> n_circle;
    circle* cir = new circle[n_circle];
 
    for(int i = 0; i < n_circle; i++){
        std::cin >> cir[i].radius;
    }
 
    /* for(int i = 0; i < n_circle; i++){
        std::cout << cir[i].radius << " ";
    } */
 
 
    //std::cout << std::endl << "Circle" << std::endl;
 
    std::cin >> n_square;
    square* sqr = new square[n_square];
 
    for(int i = 0; i < n_square; i++){
        std::cin >> sqr[i].side;
    }
 
    /* for(int i = 0; i < n_square; i++){
        std::cout << sqr[i].side << " ";
    } */
 
    //std::cout << std::endl << "Square" << std::endl;
    
    std::cin >> n_shape;
    std::cin.ignore(1000, '\n');
 
    shape* shp = new shape[n_shape];
    
    //std::cout << std::endl << n_shape << std::endl;
 
    for(int i = 0; i < n_shape; i+=1){
        
        std::string input, token;
        int temp;
 
        std::stringstream ss;
 
        
        std::getline(std::cin, input, '\n');
        //std::cout << "\n " << i + 1 << " Input: " << input << std::endl;
        ss << input;
 
        while(std::getline(ss, token, ' ')){
            temp = stoi(token);
            shp[i].circle_radius.insert(temp);
        }
        
        input.clear();
        std::getline(std::cin, input, '\n');
        //std::cout << "\n " << i + 1 << " Input: " << input << std::endl;
        
        ss.clear();
        ss << input;
        
        while(std::getline(ss, token, ' ')){
            temp = stoi(token);
            shp[i].square_side.insert(temp);
        }      
 
    }
 
    //std::cout << std::endl << "Next Query" << std::endl;
 
    /* std::cout << std::endl << "Shape 1" << std::endl;
    for(auto i : shp[0].square_side){
        std::cout << " " << i;
    }
    std::cout << std::endl; */
 
    int query;
 
    std::cin >> query;
    std::cin.ignore(1000, '\n');
    
    //std::cout << "\nInput Done" << std::endl;
 
    std::string q1, q2;
    int nQ1, nQ2;
 
    for(int i = 0; i < query; i++){
        shape result;
        
        std::stringstream ss;
        std::string temp;
 
        
        std::getline(std::cin, temp, '\n');
 
        //std::cout << "\nQuery: " << i << "\t" << temp << std::endl;
        ss.clear();
        ss << temp;
        ss >> q1 >> nQ1 >> q2 >> nQ2;
        
        //std::cout << std::endl << q1 << " " << nQ1 << " " << q2 << " " << nQ2 << std::endl;
 
        if(q2 == "Circle"){
            //std::cout << std::endl << "Cir" << std::endl;
            shp[nQ1 - 1] + cir[nQ2 - 1];
            //std::cout << std::endl << "Done" << std::endl;
        }
        else if(q2 == "Square"){
            //std::cout << std::endl << "Sqr" << std::endl;
            shp[nQ1 - 1] + sqr[nQ2 - 1];
        }
        else if(q2 == "Shapes"){
            //std::cout << std::endl << "Shp" << std::endl;
            shp[nQ1 - 1] + shp[nQ2 - 1];
        }
    }
 
    return 0;
}