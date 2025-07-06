cmake_minimum_required(VERSION 3.14)
project(spring-in-cpp)

# GoogleTest 1.17 requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB SOURCES "*.cpp")
add_executable(
  stats_test
  ${SOURCES}
)
target_link_libraries(
  stats_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(stats_test)
