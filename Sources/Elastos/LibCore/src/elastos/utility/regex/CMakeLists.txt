
set(SOURCES
    CMatcher.cpp
    CMatcherHelper.cpp
    CPatternHelper.cpp
    CSplitter.cpp
    MatchResultImpl.cpp
    Pattern.cpp
)

add_definitions(-DELASTOS_CORELIBRARY)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/../../../corelibrary)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../inc/elastos)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../inc/elastos/core)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../inc/elastos/utility)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../inc/elastos/utility/regex)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../inc/libcore/utility)

add_library(elastos_utility_regex STATIC ${SOURCES})
add_dependencies(elastos_utility_regex elastos_core_library_car)
