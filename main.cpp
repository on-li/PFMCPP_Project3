/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};



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

struct Gym 
{
    //number of squat racks
    int numSquatRacks = 3;
    //number of free weights
    int numFreeWeights = 30;
    //number of exercise machines
    int numExerciseMachines = 20;
    //number of people inside currently
    int numPeopleInside = 25;
    //price of membership
    double priceOfMembership = 20.00;
    
    //charge customers for monthly memberships
    double chargeMonthlyFee (double priceOfMembership, int numMonths = 12); 
    //sanitize the gym equipment
    void sanitizeExerciseMachines (int numExerciseMachines);
    //put free weights back into place
    void returnFreeWeights (int numFreeWeights);
};

/*
Thing 2) Mechanical Keyboard
5 properties:
    1) keyboard layout (int)
    2) keycap material (std::string)
    3) plate material (std::string)
    4) typing angle (float)
    5) location of rgb lighting (std::string)
3 things it can do:
    1) display RGB underglow lighting
    2) connect to device 
    3) produce typing sounds 
 */

struct MechanicalKeyboard
{

    //keyboard layout
    int keyboardLayout = 65;
    //keycap material
    std::string keycapMaterial = "ABS";
    //plate material
    std::string plateMaterial = "FR4";
    //typing angle
    float typingAngle = 6.5f;
    //location of rgb lighting
    std::string rgbLocation = "bottom";
    
    //display RGB underglow lighting
    void displayRGB (std::string rgbLocation, int brightnessLevel = 50);
    //connect to device
    bool connectToDevice (std::string deviceName);
    //produce typing sounds
    void produceTypingSounds (float volume, float pitch);
 };

/*
Thing 3) Piano
5 properties:
    1) number of keys (int)
    2) brand (std::string)
    3) type of piano (std::string)
    4) number of pedals (int)
    5) weight (float)
3 things it can do:
    1) play notes
    2) sustain notes
    3) change note volume
 */

struct Piano
{
    //number of keys
    int numKeys = 88;
    //brand
    std::string brand = "Casio";
    //type of piano
    std::string pianoType = "Digital";
    //number of pedals
    int numPedals = 1;
    //weight
    float weight = 20.5f;
    
    //play notes
    void playNotes(int keyToPlay, float timeToHoldKey, int keyVolume);
    //sustain notes
    void sustainNotes(bool hasPedal, int lengthOfTime, int keyToSustain);
    //change note volume
    int changeNoteVolume(int newVolume);
};

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

struct DesktopComputer
{

    //number of cores
    int numCores = 4;
    //GPU
    std::string GPU = "R9 390";
    //amount of RAM
    int ramAmount = 16; 
    //hard drive space
    int hardDriveSpace = 1000;
    //total price
    double totalPrice = 749.99;
    
    //turn on
    bool turnOnComputer();
    //open programs
    bool openProgram(std::string programName);
    //connect to peripheral devices
    bool connectToPeripheralDevice(std::string deviceName, int USBPort);
};

/*
Thing 5) Video Controls
5 properties: 
    1) fullscreen (bool)
    2) video encoder (std::string)
    3) window size in pixels(unsigned int)
    4) brightness (float)
    5) contrast (float)
3 things it can do:
    1) change window size
    2) change brightness
    3) enter/exit fullscreen
 */

struct VideoControls
{
    //fullscreen
    bool isFullscreen = false;
    //video encoder
    std::string videoEncoder = "H264";
    //window size in pixels
    float windowSizeInPixels = 1769472000; 
    //brightness
    float brightness = 50.0f;
    //contrast
    float contrast = 50.0f;

    //change window size
    float changeWindowSize(float newWindowSize);
    //change brightness
    float changeBrightness(float newBrightness);
    //enter/exit fullscreen
    void toggleFullScreen(bool isFullscreen);
};

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

struct AudioControls 
{
    //volume
    int volume = 50;
    //equalizer preset
    int equalizerPreset = 1;
    //pitch
    float pitch = 7.0f;
    //audio encoder
    std::string audioEncoder = "AAC";
    //output device
    std::string outputDevice = "Speakers";
    
    //change volume
    int changeVolume(int newVolume);
    //mute audio 
    void muteAudio();
    //change output device
    void changeOutputDevice(std::string newOutputDeviceName, int volume = 50);
};

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

struct PlaybackControls
{
    //current timestamp
    int currentTimestamp = 0;
    //length of media
    int lengthOfMedia = 1440;
    //speed
    float speed = 1.00f;
    //title
    std::string title = "Movie 1";
    //chapter
    int chapter = 1;
    
    //skip to next chapter
    int skipToNextChapter(int currentChapter);
    //display current timestamp
    int displayCurrentTimeStamp(int currentTimeStamp);
    //change speed
    float changeSpeed(float newSpeed);
};

/*
Thing 8) Display Options
5 properties:
    1) language (std::string)
    2) font size (float)
    3) dark mode (bool)
    4) button size (int)
    5) advanced display (bool)
3 things it can do: 
    1) change to dark mode
    2) change font size
    3) change language
 */

struct DisplayOptions
{
    //language
    std::string language = "English";
    //font size
    float fontSize = 14.0f;
    //dark mode
    bool darkMode = true;
    //button size
    int buttonSize = 3;
    //advanced display
    bool advancedDisplay = false;
    
    //change to dark mode
    void toggleDarkMode(bool isDarkMode);
    //change font size
    float changeFontSize(float newFontSize);
    //change language
    void changeLanguage(std::string newLanguage, int fontSize = 14.0f);
};

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

struct FileBrowser
{
    //file type
    std::string fileType = "mp4";
    //file location
    std::string fileLocation = "Desktop";
    //file size
    int fileSize = 200;
    //date created
    std::string dateCreated = "1/17/2022";
    //date opened
    std::string dateOpened = "1/17/2022";
    
    //open file
    std::string openFile(std::string fileLocation);
    //add file to playlist
    std::string addFileToPlaylist(std::string fileName, std::string playListName);
    //open url path
    std::string openURL(std::string url);
};

 /*
Thing 10) Media Player
5 properties: 
    1) Video Controls
    2) Audio Controls
    3) Playback Controls
    4) Display Options
    5) File Browser
3 things it can do:
    1) play a video
    2) play music
    3) create a media playlist
 */

struct MediaPlayer
{
    //Video Controls
    VideoControls videoControls;
    //Audio Controls
    AudioControls audioControls;
    //Playback Controls
    PlaybackControls playbackControls;
    //Display Options
    DisplayOptions displayOptions;
    //File Browser
    FileBrowser fileBrowser;
    
    //play a video
    void playVideo(VideoControls videoControls, AudioControls audioControls, PlaybackControls playbackControls, DisplayOptions displayOptions, FileBrowser fileBrowser);
    //play music
    void playAudio(AudioControls audioControls, PlaybackControls playbackControls, DisplayOptions displayOptions, FileBrowser fileBrowser);
    //create a media playlist
    void mediaPlaylist(FileBrowser fileBrowser, std::string playListName = "Playlist 1"); 
};





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
