
 <!--
 *** To avoid retyping too much info. Do a search and replace for the following:
 *** donnerhanson, String_Automata_C-Plus-Plus
, donnerhanson, hanso127@mail.chapman.edu
 -->





 <!-- PROJECT SHIELDS -->
 <!--
 *** I'm using markdown "reference style" links for readability.
 *** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
 *** See the bottom of this document for the declaration of the reference variables
 *** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
 *** https://www.markdownguide.org/basic-syntax/#reference-style-links
 -->

 [![LinkedIn][linkedin-shield]][linkedin-url]



 <!-- PROJECT LOGO -->
 <br />

   <h3 align="center">String Automata C++</h3>
 

   <p align="center"> Solving string comparisons using states in linear time</p>
 </p>



 <!-- TABLE OF CONTENTS -->
 ## Table of Contents

 * [About the Programs](#about-the-programs)
 * [Getting Started](#getting-started)
   * [Prerequisites](#prerequisites)
   * [Installation](#installation)
 * [Usage](#usage)
 * [Example](#example)
 * [Contact](#contact)



 <!-- ABOUT THE PROGRAM -->
 ## About The Programs

These sets of programs simulate comparison of symbols and counts the amount of times a set of symbols occurs within a certain string.    
  
The first program, found [here](https://github.com/donnerhanson/String_Automata_C-Plus-Plus/tree/main/string_automata_Compiler_construction/string_automata_Compiler_construction), utilizes a state machine to find occurrences of a string within a string and outputs the number of times string occured, as well as the ending index of each occurence. This includes overlapping occurrences of the pattern. This program uses C++ goto's to avoid unreadable nested if-else statements and to clarify states.  
  
The second program, found [here](https://github.com/donnerhanson/String_Automata_C-Plus-Plus/tree/main/string_automata_Compiler_construction/abc_wildcard_cba), utilizes a state machine to find occurrences of a string with a beginning pattern and an ending pattern and outputs the number of times the string occured, as well as the ending index of each occurence. This includes overlapping occurrences of the pattern. This program also uses C++ goto's to avoid unreadable nested if-else statements and to clarify states.  


 <!-- GETTING STARTED -->
 ## Getting Started

 To get a local copy up and running follow these simple steps.  

 ### Prerequisites  
 * Machine Requirements:   
 ```sh  
 GCC, the GNU compiler  
 GNU Make  
 C++ language  
 **Tested on Mac OS Catalina** 
 ```  

 ### Installation  

 1. Clone the repo  
Open Terminal.  
Change the current working directory to the location where you want the cloned directory.  
Then enter the command: 
 ```sh  
 git clone https://github.com/donnerhanson/String_Automata_C-Plus-Plus.git    
 ```  
 2. Compilation  
 Using a terminal or windows command prompt:  
 Navigate to the location of the src file within any of the various programs.  
 Compile using the makefile by using the command   
 ```sh   
make  
 ```

 <!-- USAGE EXAMPLES -->
 ## Usage

 1. After completing the installation and compilation instructions, start the program within the src directory by running the command.   

 ```sh  
   ./run.exe  
 ```  
 ## Example  

 <!--1. Example: [text to display](pdf or filename here)  -->
Program one:  
    pre-determined pattern = "abab" - this is the pattern that the program is designed to detect  
    String to find pattern = "abababababab" - this is the string that is searched through  
```sh  
Amount of times "abab" in string: 5  
End indices at: [ 4, 6, 8, 10, 12 ]  

```

Program two:  
    pre-determined pattern = "abc\*cab" - this is the pattern that the program is designed to detect where '\*' is a wildcard  
    String to find pattern = "abccbabcbacba" - this is the string that is searched through  
```sh  
Amount of times "abccba" in string: 3  
End indices at: [ 6, 10, 13 ]  
```



 <!-- CONTACT -->
 ## Contact

 Donner Hanson - [@hansondonner](https://twitter.com/hansondonner) - hanso127@mail.chapman.edu

 Project Link: [https://github.com/donnerhanson/String_Automata_C-Plus-Plus](https://github.com/donnerhanson/String_Automata_C-Plus-Plus)  

 <!-- MARKDOWN LINKS & IMAGES -->
 <!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

 [linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555  
 [linkedin-url]: https://linkedin.com/in/donner-hanson  
