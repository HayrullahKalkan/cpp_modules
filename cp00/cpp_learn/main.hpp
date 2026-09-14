#ifndef MAIN_HPP
#define MAIN_HPP

# include <iostream>


class Student
{
    private:
        std::string name;
        int age;
    
    public:
        Student();
        
        void setAge(int age);
        int getAge(int age)const;

        void setName(const std::string);
        std::string getName(const std::string)const;

        void print();
};


#endif