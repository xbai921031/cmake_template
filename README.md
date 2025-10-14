# 🚀 cmake_template Quick Start
## 🛠️ Tools
##### 1. VS Code and extension C/C++, CMake Tools
##### 2. CMake
##### 3. GCC

## 📁 File Structure
```bash
cmake_template/
├── .vscode/
│   ├── launch.json
│   ├── settings.json
│   └── tasks.json
├── build/
├── src/
│   ├── add/
│   │   ├── add.c
│   │   ├── add.h
│   │   └── CMakeLists.txt
│   ├── sub/
│   │   ├── sub.c
│   │   ├── sub.h
│   │   └── CMakeLists.txt
│   ├── CMakeLists.txt
│   ├── common.h
│   └── main.c
├── CMakeLists.txt
├── LICENSE
└── README.md
```
## 🔧 Configuration
```bash
cd build
cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER=D:/Software/mingw64/bin/gcc.exe -DCMAKE_CXX_COMPILER=D:/Software/mingw64/bin/g++.exe -DCMAKE_MAKE_PROGRAM=D:/Software/mingw64/bin/mingw32-make.exe ..
```
## 📦 Build
```bash
cd ..
cmake --build build
```

