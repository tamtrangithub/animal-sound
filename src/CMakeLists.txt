set (ProjectName animal-sound)
set (Release release)
set (SrcDir src)

project(${ProjectName} VERSION 1.0)

INCLUDE_DIRECTORIES(../include include)

ADD_LIBRARY(${ProjectName}
    animal-factory.cpp
    cat.cpp
    dog.cpp
)

ADD_CUSTOM_COMMAND(TARGET ${ProjectName} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory ${Release}
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:animal-sound> ${Release}
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/include ${Release}/include
)
