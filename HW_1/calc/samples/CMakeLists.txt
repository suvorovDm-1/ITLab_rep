set(name_exe "calc_sample_exe") #создаем переменную, которая хранит имя экзешника
add_executable(${name_exe} main.cpp) # создаем экзешник с указанным именем из указанного файла  
target_link_libraries(${name_exe} calc_lib) # линкуем экзешник и библиотеку