/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  

2) write the name of the primitive type you'll be using after each property in UDTs 1-4:
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

3) Move the Thing 10 pseudo-code to after your Thing1-4 in the project.
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you can use 'std::string' to represent strings in this project.
 */

/*
Thing 1) Gym
5 properties:
    1) number of squat racks (int)
    2) number of free weights (int)
    3) number of exercise machines (int)
    4) number of people inside currently (int)
    5) price of membership (double)
3 things it can do:
    1) charge customers for monthly memberships
    2) sanitize the gym equipment
    3) put free weights back into place 
 */

/*
Thing 2) Mechanical Keyboard
5 properties:
    1) keyboard layout (int)
    2) keycap material (std::string)
    3) plate material (std::string)
    4) typing angle (double)
    5) location of rgb lighting (std::string)
3 things it can do:
    1) display RGB underglow lighting
    2) connect to device 
    3) produce typing sounds 
 */

/*
Thing 3) Piano
5 properties:
    1) number of keys (int)
    2) brand (std::string)
    3) type of piano (std::string)
    4) number of pedals (int)
    5) weight (int)
3 things it can do:
    1) play notes
    2) sustain notes
    3) change note volume
 */

/*
Thing 4) Desktop Computer
5 properties:
    1) number of cores (int)
    2) GPU (std::string)
    3) amount of RAM (int)
    4) hard drive space (int)
    5) total price (double)
3 things it can do:
    1) turn on
    2) open programs
    3) connect to peripheral devices
 */

 /*
Thing 5) Video Controls
5 properties: 
    1) fullscreen (bool)
    2) video encoder (std::string)
    3) window size (float)
    4) brightness (float)
    5) contrast (float)
3 things it can do:
    1) change window size
    2) change brightness
    3) enter/exit fullscreen
 */

/*
Thing 6) Audio Controls
5 properties:
    1) volume (int)
    2) equalizer preset (int)
    3) pitch (float)
    4) audio encoder (std::string)
    5) output device (std::string)
3 things it can do:
    1) change volume
    2) mute audio
    3) change output device
 */

/*
Thing 7) Playback Controls
5 properties:
    1) current timestamp (int)
    2) length of media (int)
    3) speed (float)
    4) title (std::string)
    5) chapter (int)
3 things it can do:
    1) skip to next chapter
    2) display current timestamp
    3) change speed 
 */

/*
Thing 8) Display Options
5 properties:
    1) language (std::string)
    2) font size (float)
    3) dark mode (bool)
    4) button size (float)
    5) advanced display (bool)
3 things it can do: 
    1) change to dark mode
    2) change font size
    3) change language
 */

/*
Thing 9) File Browser
5 properties:
    1) file type(std::string)
    2) file location(std::string)
    3) file size(unsigned int)
    4) date created(std::string)
    5) date opened (std::string)
3 things it can do:
    1) open file
    2) add file to playlist
    3) open url path
 */

 /*
Thing 10) Media Player
5 properties: 
    1) Video
    2) Audio
    3) Playback
    4) Menu
    5) File
3 things it can do:
    1) play a video
    2) play music
    3) create a media playlist
 */






/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
