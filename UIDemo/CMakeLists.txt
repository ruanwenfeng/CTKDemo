include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/include
	)
file(GLOB HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# add resource
set(QRC_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Resource.qrc)
qt5_add_resources(QRC_FILES ${QRC_SOURCE_FILES})

# build lib
add_executable(UIDemo ${HEADER_FILES} ${SRC_FILES} ${QRC_FILES})
qt5_use_modules(UIDemo Core)
target_link_libraries(UIDemo CTKCore CTKPluginFramework)
