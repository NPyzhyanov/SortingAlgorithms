TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    print_array.cpp \
    generate_array.cpp \
    make_array_as_initial.cpp \
    sorting_algorithm_selector.cpp \
    sort/bubble_sort.cpp

HEADERS += \
    used_functions.h \
    sort/sort.h
