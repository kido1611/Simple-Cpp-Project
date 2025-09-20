# download cpm
if (NOT EXISTS "${CMAKE_SOURCE_DIR}/cmake/CPM.cmake")
  file(
    DOWNLOAD
    https://github.com/cpm-cmake/CPM.cmake/releases/latest/download/get_cpm.cmake
    ${CMAKE_SOURCE_DIR}/cmake/CPM.cmake
  )
endif()

# configure CPM
set(CPM_SOURCE_CACHE ./cmake/caches)
include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/dependencies.cmake)
