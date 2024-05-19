cmake_minimum_required(VERSION 3.10)
project(bitcoin_test)

set(CMAKE_CXX_STANDARD 20)

# Inclua os diretórios de cabeçalhos das bibliotecas
include_directories(D:/repo/libbitcoin/libbitcoin-system/include)
include_directories(D:/repo/nuget_packages/.nuget/packages/boost.1.78.0/lib/native/include)
include_directories(D:/repo/nuget_packages/.nuget/packages/secp256k1_vc143.0.1.0.20/build/native/include)

# Diretório das bibliotecas
link_directories(D:/repo/libbitcoin/libbitcoin-system/bin/x64/Release/v143/static)

# Debugging
message(STATUS "Libbitcoin lib dir: D:/repo/libbitcoin/libbitcoin-system/bin/x64/Release/v143/static")

# Criação do executável
add_executable(bitcoin_test main.cpp)

# Linkagem das bibliotecas ao executável
target_link_libraries(bitcoin_test bitcoin-system)
