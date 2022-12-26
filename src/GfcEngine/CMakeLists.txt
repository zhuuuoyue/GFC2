cmake_minimum_required(VERSION 2.9)

set(PROJECT_NAME GfcEngine31)

include_directories(
	${PROJECT_SOURCE_DIR}/../include/Classes
	${PROJECT_SOURCE_DIR}/../include 
	${PROJECT_SOURCE_DIR}/GfcCommon
	${PROJECT_SOURCE_DIR}/GfcSchema
	${PROJECT_SOURCE_DIR}/../thirdparty/rapidjson 
	${PROJECT_SOURCE_DIR}/GfcEngine
)
link_directories(${PROJECT_SOURCE_DIR}/../lib)

file(GLOB HEAD_FILES "${PROJECT_SOURCE_DIR}/../include/GfcEngine/*.h") 
file(GLOB_RECURSE SRC_FILES  ${PROJECT_SOURCE_DIR}/GfcEngine *.cpp *.h)
source_group(TREE ${PROJECT_SOURCE_DIR}/GfcEngine PREFIX "Source Files" FILES ${SRC_FILES})

#编译选项
add_compile_definitions(_CRT_SECURE_NO_WARNINGS GFCENGINE_EXPORTS UNICODE)
add_library(${PROJECT_NAME} SHARED ${SRC_FILES} ${HEAD_FILES})

target_link_libraries(${PROJECT_NAME} debug GfcSchema31d optimized GfcSchema31)
target_link_libraries(${PROJECT_NAME} debug GfcCommon31d optimized GfcCommon31)