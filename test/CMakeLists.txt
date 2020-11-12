set(ProjectName test-animal)

project(${ProjectName})

INCLUDE_DIRECTORIES(../include)

LINK_DIRECTORIES(../build/animal)

ADD_EXECUTABLE(${ProjectName} main.cpp)

TARGET_LINK_LIBRARIES(${ProjectName} libanimal-sound.a)

