# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wh/Daily/NetWork/wwc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wh/Daily/NetWork/wwc

# Include any dependencies generated for this target.
include CMakeFiles/Server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Server.dir/flags.make

CMakeFiles/Server.dir/Acceptor.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/Acceptor.cpp.o: Acceptor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Server.dir/Acceptor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/Acceptor.cpp.o -c /home/wh/Daily/NetWork/wwc/Acceptor.cpp

CMakeFiles/Server.dir/Acceptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/Acceptor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/Acceptor.cpp > CMakeFiles/Server.dir/Acceptor.cpp.i

CMakeFiles/Server.dir/Acceptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/Acceptor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/Acceptor.cpp -o CMakeFiles/Server.dir/Acceptor.cpp.s

CMakeFiles/Server.dir/Acceptor.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/Acceptor.cpp.o.requires

CMakeFiles/Server.dir/Acceptor.cpp.o.provides: CMakeFiles/Server.dir/Acceptor.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/Acceptor.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/Acceptor.cpp.o.provides

CMakeFiles/Server.dir/Acceptor.cpp.o.provides.build: CMakeFiles/Server.dir/Acceptor.cpp.o


CMakeFiles/Server.dir/Buffer.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/Buffer.cpp.o: Buffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Server.dir/Buffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/Buffer.cpp.o -c /home/wh/Daily/NetWork/wwc/Buffer.cpp

CMakeFiles/Server.dir/Buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/Buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/Buffer.cpp > CMakeFiles/Server.dir/Buffer.cpp.i

CMakeFiles/Server.dir/Buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/Buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/Buffer.cpp -o CMakeFiles/Server.dir/Buffer.cpp.s

CMakeFiles/Server.dir/Buffer.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/Buffer.cpp.o.requires

CMakeFiles/Server.dir/Buffer.cpp.o.provides: CMakeFiles/Server.dir/Buffer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/Buffer.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/Buffer.cpp.o.provides

CMakeFiles/Server.dir/Buffer.cpp.o.provides.build: CMakeFiles/Server.dir/Buffer.cpp.o


CMakeFiles/Server.dir/Channel.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/Channel.cpp.o: Channel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Server.dir/Channel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/Channel.cpp.o -c /home/wh/Daily/NetWork/wwc/Channel.cpp

CMakeFiles/Server.dir/Channel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/Channel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/Channel.cpp > CMakeFiles/Server.dir/Channel.cpp.i

CMakeFiles/Server.dir/Channel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/Channel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/Channel.cpp -o CMakeFiles/Server.dir/Channel.cpp.s

CMakeFiles/Server.dir/Channel.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/Channel.cpp.o.requires

CMakeFiles/Server.dir/Channel.cpp.o.provides: CMakeFiles/Server.dir/Channel.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/Channel.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/Channel.cpp.o.provides

CMakeFiles/Server.dir/Channel.cpp.o.provides.build: CMakeFiles/Server.dir/Channel.cpp.o


CMakeFiles/Server.dir/EventLoop.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/EventLoop.cpp.o: EventLoop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Server.dir/EventLoop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/EventLoop.cpp.o -c /home/wh/Daily/NetWork/wwc/EventLoop.cpp

CMakeFiles/Server.dir/EventLoop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/EventLoop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/EventLoop.cpp > CMakeFiles/Server.dir/EventLoop.cpp.i

CMakeFiles/Server.dir/EventLoop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/EventLoop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/EventLoop.cpp -o CMakeFiles/Server.dir/EventLoop.cpp.s

CMakeFiles/Server.dir/EventLoop.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/EventLoop.cpp.o.requires

CMakeFiles/Server.dir/EventLoop.cpp.o.provides: CMakeFiles/Server.dir/EventLoop.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/EventLoop.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/EventLoop.cpp.o.provides

CMakeFiles/Server.dir/EventLoop.cpp.o.provides.build: CMakeFiles/Server.dir/EventLoop.cpp.o


CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o: EventLoopThreadPool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o -c /home/wh/Daily/NetWork/wwc/EventLoopThreadPool.cpp

CMakeFiles/Server.dir/EventLoopThreadPool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/EventLoopThreadPool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/EventLoopThreadPool.cpp > CMakeFiles/Server.dir/EventLoopThreadPool.cpp.i

CMakeFiles/Server.dir/EventLoopThreadPool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/EventLoopThreadPool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/EventLoopThreadPool.cpp -o CMakeFiles/Server.dir/EventLoopThreadPool.cpp.s

CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.requires

CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.provides: CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.provides

CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.provides.build: CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o


CMakeFiles/Server.dir/HttpServer.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/HttpServer.cpp.o: HttpServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Server.dir/HttpServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/HttpServer.cpp.o -c /home/wh/Daily/NetWork/wwc/HttpServer.cpp

CMakeFiles/Server.dir/HttpServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/HttpServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/HttpServer.cpp > CMakeFiles/Server.dir/HttpServer.cpp.i

CMakeFiles/Server.dir/HttpServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/HttpServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/HttpServer.cpp -o CMakeFiles/Server.dir/HttpServer.cpp.s

CMakeFiles/Server.dir/HttpServer.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/HttpServer.cpp.o.requires

CMakeFiles/Server.dir/HttpServer.cpp.o.provides: CMakeFiles/Server.dir/HttpServer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/HttpServer.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/HttpServer.cpp.o.provides

CMakeFiles/Server.dir/HttpServer.cpp.o.provides.build: CMakeFiles/Server.dir/HttpServer.cpp.o


CMakeFiles/Server.dir/Socket.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/Socket.cpp.o: Socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Server.dir/Socket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/Socket.cpp.o -c /home/wh/Daily/NetWork/wwc/Socket.cpp

CMakeFiles/Server.dir/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/Socket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/Socket.cpp > CMakeFiles/Server.dir/Socket.cpp.i

CMakeFiles/Server.dir/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/Socket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/Socket.cpp -o CMakeFiles/Server.dir/Socket.cpp.s

CMakeFiles/Server.dir/Socket.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/Socket.cpp.o.requires

CMakeFiles/Server.dir/Socket.cpp.o.provides: CMakeFiles/Server.dir/Socket.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/Socket.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/Socket.cpp.o.provides

CMakeFiles/Server.dir/Socket.cpp.o.provides.build: CMakeFiles/Server.dir/Socket.cpp.o


CMakeFiles/Server.dir/TcpConnection.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/TcpConnection.cpp.o: TcpConnection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Server.dir/TcpConnection.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/TcpConnection.cpp.o -c /home/wh/Daily/NetWork/wwc/TcpConnection.cpp

CMakeFiles/Server.dir/TcpConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/TcpConnection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/TcpConnection.cpp > CMakeFiles/Server.dir/TcpConnection.cpp.i

CMakeFiles/Server.dir/TcpConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/TcpConnection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/TcpConnection.cpp -o CMakeFiles/Server.dir/TcpConnection.cpp.s

CMakeFiles/Server.dir/TcpConnection.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/TcpConnection.cpp.o.requires

CMakeFiles/Server.dir/TcpConnection.cpp.o.provides: CMakeFiles/Server.dir/TcpConnection.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/TcpConnection.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/TcpConnection.cpp.o.provides

CMakeFiles/Server.dir/TcpConnection.cpp.o.provides.build: CMakeFiles/Server.dir/TcpConnection.cpp.o


CMakeFiles/Server.dir/TcpServer.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/TcpServer.cpp.o: TcpServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Server.dir/TcpServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/TcpServer.cpp.o -c /home/wh/Daily/NetWork/wwc/TcpServer.cpp

CMakeFiles/Server.dir/TcpServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/TcpServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/TcpServer.cpp > CMakeFiles/Server.dir/TcpServer.cpp.i

CMakeFiles/Server.dir/TcpServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/TcpServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/TcpServer.cpp -o CMakeFiles/Server.dir/TcpServer.cpp.s

CMakeFiles/Server.dir/TcpServer.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/TcpServer.cpp.o.requires

CMakeFiles/Server.dir/TcpServer.cpp.o.provides: CMakeFiles/Server.dir/TcpServer.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/TcpServer.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/TcpServer.cpp.o.provides

CMakeFiles/Server.dir/TcpServer.cpp.o.provides.build: CMakeFiles/Server.dir/TcpServer.cpp.o


CMakeFiles/Server.dir/main.cpp.o: CMakeFiles/Server.dir/flags.make
CMakeFiles/Server.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Server.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Server.dir/main.cpp.o -c /home/wh/Daily/NetWork/wwc/main.cpp

CMakeFiles/Server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Server.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wh/Daily/NetWork/wwc/main.cpp > CMakeFiles/Server.dir/main.cpp.i

CMakeFiles/Server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Server.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wh/Daily/NetWork/wwc/main.cpp -o CMakeFiles/Server.dir/main.cpp.s

CMakeFiles/Server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Server.dir/main.cpp.o.requires

CMakeFiles/Server.dir/main.cpp.o.provides: CMakeFiles/Server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Server.dir/build.make CMakeFiles/Server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Server.dir/main.cpp.o.provides

CMakeFiles/Server.dir/main.cpp.o.provides.build: CMakeFiles/Server.dir/main.cpp.o


# Object files for target Server
Server_OBJECTS = \
"CMakeFiles/Server.dir/Acceptor.cpp.o" \
"CMakeFiles/Server.dir/Buffer.cpp.o" \
"CMakeFiles/Server.dir/Channel.cpp.o" \
"CMakeFiles/Server.dir/EventLoop.cpp.o" \
"CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o" \
"CMakeFiles/Server.dir/HttpServer.cpp.o" \
"CMakeFiles/Server.dir/Socket.cpp.o" \
"CMakeFiles/Server.dir/TcpConnection.cpp.o" \
"CMakeFiles/Server.dir/TcpServer.cpp.o" \
"CMakeFiles/Server.dir/main.cpp.o"

# External object files for target Server
Server_EXTERNAL_OBJECTS =

Server: CMakeFiles/Server.dir/Acceptor.cpp.o
Server: CMakeFiles/Server.dir/Buffer.cpp.o
Server: CMakeFiles/Server.dir/Channel.cpp.o
Server: CMakeFiles/Server.dir/EventLoop.cpp.o
Server: CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o
Server: CMakeFiles/Server.dir/HttpServer.cpp.o
Server: CMakeFiles/Server.dir/Socket.cpp.o
Server: CMakeFiles/Server.dir/TcpConnection.cpp.o
Server: CMakeFiles/Server.dir/TcpServer.cpp.o
Server: CMakeFiles/Server.dir/main.cpp.o
Server: CMakeFiles/Server.dir/build.make
Server: poll/libPollFunctions.a
Server: CMakeFiles/Server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wh/Daily/NetWork/wwc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Server.dir/build: Server

.PHONY : CMakeFiles/Server.dir/build

CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/Acceptor.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/Buffer.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/Channel.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/EventLoop.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/EventLoopThreadPool.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/HttpServer.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/Socket.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/TcpConnection.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/TcpServer.cpp.o.requires
CMakeFiles/Server.dir/requires: CMakeFiles/Server.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Server.dir/requires

CMakeFiles/Server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Server.dir/clean

CMakeFiles/Server.dir/depend:
	cd /home/wh/Daily/NetWork/wwc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wh/Daily/NetWork/wwc /home/wh/Daily/NetWork/wwc /home/wh/Daily/NetWork/wwc /home/wh/Daily/NetWork/wwc /home/wh/Daily/NetWork/wwc/CMakeFiles/Server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Server.dir/depend

