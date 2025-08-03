cmake_minimum_required(VERSION 3.12)
project(URLEncoderDecoder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(urlencoderdecoder src/url_encoder_decoder.cpp)
install(TARGETS urlencoderdecoder DESTINATION bin)