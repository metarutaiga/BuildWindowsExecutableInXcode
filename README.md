### Build and Run Windows Executable on macOS
1. Install wine and llvm (llvm-12 or above for ARM 32bit)
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
brew tap gcenx/wine
brew install gcenx-wine-staging
brew install llvm
```
2. Compile and install lld-link-wrapper and llvm-lib-wrapper
```
clang++ -Ofast lld-link-wrapper.cpp -o lld-link-wrapper
clang++ -Ofast llvm-lib-wrapper.cpp -o llvm-lib-wrapper
cp lld-link-wrapper /usr/local/opt/llvm/bin
cp llvm-lib-wrapper /usr/local/opt/llvm/bin
```
3. Edit Sample.xcodeproj/xcshareddata/xcschemes/Sample.xcscheme
```
   <LaunchAction
      buildConfiguration = "Release"
      ...
      allowLocationSimulation = "YES">
      <PathRunnable
         runnableDebuggingMode = "0"
         FilePath = "/usr/local/bin/wine64">
      </PathRunnable>
      <CommandLineArguments>
         <CommandLineArgument
            argument = "Sample.exe"
            isEnabled = "YES">
         </CommandLineArgument>
      </CommandLineArguments>
   </LaunchAction>
```
4. Set custom working directory
