file(GLOB_RECURSE ALL_SOURCES_FILES *.cpp *.hpp)
# ищем глобально рекурсивно все файлы 
#с необходимым разрешением и сохраняем их пути в переменную ALL_SOURCES_FILES

add_library(calc_lib STATIC ${ALL_SOURCES_FILES})
# создаем статическую библиотеку с именем calc_lib из всех файлов в переменной ALL_SOURCES_FILES