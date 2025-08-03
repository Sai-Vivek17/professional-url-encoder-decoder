# Professional URL Encoder/Decoder

![C++](https://img.shields.io/badge/C++-17-blue?logo=cplusplus)
![License](https://img.shields.io/badge/License-MIT-green)

A robust C++ implementation of RFC-3986 compliant URL encoding/decoding with:
- Percent-encoding/decoding
- Unreserved character preservation
- CMake build support

## Features
✔️ Full RFC-3986 compliance  
✔️ Safe handling of edge cases  
✔️ Cross-platform compatibility  

## Build & Run
```bash
mkdir build && cd build
cmake ..
make
./urlencoderdecoder
```

## Example Usage
```cpp
// Encode
Input:  "Hello World!"
Output: "Hello%20World%21"

// Decode
Input:  "price%3D%24100"
Output: "price=$100"
```

## License
MIT License - See [LICENSE](LICENSE) for details
