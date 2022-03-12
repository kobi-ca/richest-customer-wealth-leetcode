# Link
https://codejudge.blogspot.com/2022/03/1672-richest-customer-wealth-leetcode.html

# Screenshot
![img.png](img.png)

# Conan
-DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake

python -m venv venv
source venv/bin/activate
pip install conan
conan install -pr:b=default  --profile default-abi11 -s build_type=Debug ../conanfile.txt
