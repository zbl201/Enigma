"Enigma" style encoder

How to use:
1) cd Encryptor
2) compile and run c++ code with
    g++ -Iincludes source/main.cc source/stream.cc -o bin/exec
    ./bin/exec
3) Follow prompts: Enter the date, whether you would like encryption or decryption, then your digital string

Note: 
    - same string on same day will give same results, on different day will give a different results
    - same string concatenated with itself (don't include space for the time being) will generally lend different encryption for each additional concatenation.
