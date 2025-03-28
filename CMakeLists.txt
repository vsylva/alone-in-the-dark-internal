cmake_minimum_required(VERSION 3.20)
project(internal)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RULE_MESSAGES OFF)
set(CMAKE_VERBOSE_MAKEFILE OFF)

if(MSVC)
    add_compile_options(/W0 /nologo)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-w)
endif()

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src")
    message(FATAL_ERROR "The 'src' directory does not exist.")
endif()

include_directories(
    src
    vendor/detours
    vendor/imgui
    vendor/imgui/backends
    vendor/gdk
    vendor/gdk/SDK
)

set(SOURCE_FILES
    src/dllmain.cpp
    src/d3d11hook.cpp
    src/gdk.cpp

    vendor/imgui/imgui.cpp
    vendor/imgui/imgui_draw.cpp
    vendor/imgui/imgui_tables.cpp
    vendor/imgui/imgui_widgets.cpp
    vendor/imgui/backends/imgui_impl_dx11.cpp
    vendor/imgui/backends/imgui_impl_win32.cpp

    vendor/gdk/SDK/Basic.cpp
    vendor/gdk/SDK/CoreUObject_functions.cpp
    vendor/gdk/SDK/Engine_functions.cpp
)

foreach(SOURCE_FILE ${SOURCE_FILES})
    if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}")
        message(FATAL_ERROR "Source file '${SOURCE_FILE}' does not exist.")
    endif()
endforeach()

find_library(DETOURS_LIBRARY
    detours
    PATHS ${CMAKE_CURRENT_SOURCE_DIR}/vendor/detours
    NO_DEFAULT_PATH
)

if(NOT DETOURS_LIBRARY)
    message(FATAL_ERROR "Detours library not found.")
endif()

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE
    d3d11
    d3d12
    dxgi
    ${DETOURS_LIBRARY}
)

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /std:c++20)
endif()
