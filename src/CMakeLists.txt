# add_subdirectory(core)
# add_subdirectory(vulkan)
# add_subdirectory(sdl)

add_executable(dreieck)
target_sources(dreieck PRIVATE
	main.cpp
	sdl/sdl_window.cpp
	sdl/sdl_platform.cpp
	vulkan/vulkan_instance.cpp
)
target_link_libraries(dreieck PRIVATE SDL3-static volk)
