# Download

Clone first
then pull

### GCC Command
To compile the cpp by using gcc you need
```
-lstdc++
```
After gcc filename.


### sharing friend function

`class HeroStatus` and `class EnemeyStatus` share same friend function `void battleAnimation(HeroStatus*, EnemeyStatus*);` two classes are in different file.

because two `class` do not define varible they just take para for function

all have to do is to give prototype at begining of each file 

### save load

friend ostream& operator <<(ostream& output, const class& );

friend istream& operator >>(istream& input, class& );

### for member function

if you dont have member function instead of general function 

you have to type the prototype on each file



# Failure list
Unable to workout reading without `enter` in c++


# TO DO
 - change the battle algorithm(srand())
 - change the phy and mag defence calculation
 - add more guan ka
 - add story and hidden story(when you kill guidence) guidence is actually one of boss
 - update item
 - add different heros + skills
 - change color!
 - change the overloaging operation


# Version:
### Alpha 1.8
Basic movement

Map

add status bar

generate enemy and battle animation battle algorithm

add mainlist and new folder `bagInfo` to contain the bag item

finish basic bag structure

add battle reward

add save option and load

change gcc compiler to CMake

---

### Beta 1.2.1

add tutourial update guiden character

add MP feature

update skill feature

add skill detail
