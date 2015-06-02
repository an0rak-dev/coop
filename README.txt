                          _____                  
                         / ____|                 
                        | |     ___   ___  _ __  
                        | |    / _ \ / _ \| '_ \ 
                        | |___| (_) | (_) | |_) |
                         \_____\___/ \___/| .__/ 
                                          | |    
                                          |_|

                      C object oriented programming
                                                            

SUMARRY
--------

This project was created for testing an Object-oriented implementation in C.
It's start by the answer of unwind on the Stackoverflow topic : 
http://stackoverflow.com/questions/1403890/how-do-you-implement-a-class-in-c

This project provides a simple example of C OO programming. Elements used are
encapsulation, polymorphism, inheritance.

The encapsulation is materialized here by the fact that the radius, width or 
height of each classes can't be access directly.

The inheritance is materialized with Rectangle and Circle, which both inherits
of Shape.

The polymorphism is materialized in the main.c where the function 
Shape_calculateSurface was used on a Rectangle object and on a Circle object.



HOW TO USE IT
----------------

For compiling this program gcc is needed. It's compiles in POSIX environment.

Step 1 : clone this project (or fork it, as you want) with the command :
         > git clone https://github.com/s-nieuwlandt-dev/coop.git

Step 2 : Open a terminal and put yourself on the script dir.
         > cd scripts
       
Step 3 : Run the build.sh script. 
         > ./debug.sh
         (You need to have execution access permission to the script)
         
Step 4 : Run the compiled software in the <PROJECT_ROOT>/delivery directory.
         > cd ../delivery && ./Coop
         
         
BUILD INFORMATION
--------------------
The current version build on the following platforms :

> Windows 7 (64 bits) -- Compiler : MinGW gcc 4.8.1


CHANGELOG 
------------
 Version 0.1 :
  - Create the project. See the inheritance, polymorphism and encapsulation 
    with the Shape, Rectangle, Circle problem.

    
AUTHORS
---------
 Before all I want to thanks the user of stackoverflow called unwind.
 Nothing of this can't be made without is fabulous post.

 Development : Sylvain Nieuwlandt - s.nieuwlandt.dev@gmail.com
 
LICENCE                                                            
---------
 This project is release under the Apache Licence v2.0
 See the LICENCE.txt file for more informations.