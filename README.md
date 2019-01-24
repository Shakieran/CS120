# CS120 Project 1 - What The H Is Going On
This project demonstrates the Actor class. The actor has three attributes, health, strength, and speed. Two actors fight it out in the main method, of which tests what attribute combinations are viable in certain scenarios. The user can set the health, strength (used to calculate damage at a 1:1 ratio), and speed (the higher speed dictates who may attack first) for both their ally and enemy (Murray). Once set, the actors will duke it out until one remains with health of more than 0. It's like Highlander -- there can only be one.
# CURRENT STYLE
 - Camel Case
 - RME Comments
 - No Prefixes
 - Hanging Braces
# My Thoughts
I prefer the hanging braces because I was raised on them. I slightly prefer no prefixes for that reason, but I can see the use of using prefixes. I prefer camel case just because it's what I'm used to (except with all caps constants) but it makes little difference to me. I think comments at the top of the file as well as above methods is best so prefer both comment styles together.
# ERRORS
 - Runtime error: infinite loop, I had no exit condition for the while loop in the main method
 - Runtime error: when I created the actors, I prompted for speed when I set strength and vice versa, so I had to use the debugger in order to
  see the variables get assigned whereas it just happens quickly in runtime.
 - Compile error: no main method, my bad
  c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../libmingw32.a(main.o):(.text.startup+0xa0): undefined reference to `WinMain@16'
  collect2.exe: error: ld returned 1 exit status
  mingw32-make.exe[3]: *** [CS120.exe] Error 1
  mingw32-make.exe[2]: *** [CMakeFiles/CS120.dir/all] Error 2
  CMakeFiles\CS120.dir\build.make:99: recipe for target 'CS120.exe' failed
  CMakeFiles\Makefile2:71: recipe for target 'CMakeFiles/CS120.dir/all' failed
  mingw32-make.exe[1]: *** [CMakeFiles/CS120.dir/rule] Error 2
  mingw32-make.exe: *** [CS120] Error 2
  CMakeFiles\Makefile2:83: recipe for target 'CMakeFiles/CS120.dir/rule' failed
  Makefile:117: recipe for target 'CS120' failed
