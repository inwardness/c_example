# Prepairing compiler C/C++
* Install Visual Studio Code.
* Install the C/C++ extension for VS Code. You can install the C/C++ extension by searching for 'C++' in the Extensions view (Ctrl+Shift+X).
---
## Installing the MinGW-w64 toolchain

* Get the latest version of MinGW-w64 via MSYS2, which provides up-to-date native builds of GCC, MinGW-w64, and other helpful C++ tools and libraries. This will provide you with the necessary tools to compile your code, debug it, and configure it to work with IntelliSense.
* You can download the latest installer from the MSYS2 page or use this direct link to the installer.
* Run the installer and follow the steps of the installation wizard. Note that MSYS2 requires 64 bit Windows 8.1 or newer.
* In the wizard, choose your desired Installation Folder. Record this directory for later. In most cases, the recommended directory is acceptable. The same applies when you get to setting the start menu shortcuts step.
* When complete, ensure the Run MSYS2 now box is checked and select Finish. This will open a MSYS2 terminal window for you.
* In this terminal, install the MinGW-w64 toolchain by running the following command:
    * pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
* Accept the default number of packages in the toolchain group by pressing Enter. 
* Enter Y when prompted whether to proceed with the installation.
* Add the path to your MinGW-w64 bin folder to the Windows PATH environment variable by using the following steps:
    * In the Windows search bar, type Settings to open your Windows Settings.
    * Search for Edit environment variables for your account.
    * In your User variables, select the Path variable and then select Edit.
    * Select New and add the MinGW-w64 destination folder you recorded during the installation process to the list. If you used the default settings above, then this will be the path: C:\msys64\ucrt64\bin.
    * Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.
---

## Check your MinGW installation

To check that your MinGW-w64 tools are correctly installed and available, open a new Command Prompt and type:<br>
gcc --version<br>
g++ --version<br>
gdb --version<br>
You should see output that states which versions of GCC, g++ and GDB you have installed. If this is not the case:

* Make sure your PATH variable entry matches the MinGW-w64 binary location where the toolchain was installed. If the compilers do not exist at that PATH entry, make sure you followed the previous instructions.
* If gcc has the correct output but not gdb, then you need to install the packages you are missing from the MinGW-w64 toolset.
* If on compilation you are getting the "The value of miDebuggerPath is invalid." message, one cause can be you are missing the mingw-w64-gdb package

## Create a Hello World app
First, lets get a project set up.
* Launch a Windows command prompt (Enter Windows command prompt in the Windows search bar), then
* Run the following commands. These will create an empty folder called projects where you can place all your VS Code projects. There, the next commands will create and navigate to a sub-folder called helloworld. From there, you will open helloworld directly in VS Code.<br>
    - mkdir projects<br>
    - cd projects<br>
    - mkdir helloworld<br>
    - cd helloworld<br>
    - code .

The "code ." command opens VS Code in the current working folder, which becomes your "workspace". Accept the Workspace Trust dialog by selecting Yes, I trust the authors since this is a folder you created.

As you go through the tutorial, you will see three files created in a .vscode folder in the workspace:
- tasks.json (build instructions)
- launch.json (debugger settings)
- c_cpp_properties.json (compiler path and IntelliSense settings)
---
## *Add a source code file*

In the File Explorer title bar, select the New File button and name the file helloworld.cpp.

## *Add hello world source code*

Now paste in this source code:
#include <iostream>
#include <vector>
#include <string>

    using namespace std;

    int main()
    {
        vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

            for (const string& word : msg)
            {
                cout << word << " ";
            }
            cout << endl;
    }
 Now press Ctrl+S to save the file. Notice how the file you just added appears in the File Explorer view (Ctrl+Shift+E) in the side bar of VS Code:
 You can also enable Auto Save to automatically save your file changes, by selecting File > Auto Save. You can find out more about the other views in the VS Code User Interface documentation.

   <tt> Note: When you save or open a C++ file, you may see a notification from the C/C++ extension about the availability of an Insiders version, which lets you test new features and fixes. You can ignore this notification by selecting the X (Clear Notification).</tt>

## *Explore IntelliSense*

IntelliSense is a tool to help you code faster and more efficiently by adding code editing features such as code completion, parameter info, quick info, and member lists.

To see IntelliSense in action, hover over vector or string to see their type information. If you type msg. in line 10, you can see a completion list of recommended member functions to call, all generated by IntelliSense:
You can press the Tab key to insert a selected member. If you then add open parenthesis, IntelliSense will show information on which arguments are required.

If IntelliSense is not already configured, open the Command Palette (Ctrl+Shift+P) and enter Select IntelliSense Configuration. From the dropdown of compilers, select Use gcc.exe to configure.

## *Run helloworld.cpp*

Remember, the C++ extension uses the C++ compiler you have installed on your machine to build your program. Make sure you have completed the "Installing the MinGW-w64 toolchain" step before attempting to run and debug helloworld.cpp in VS Code.
* Open helloworld.cpp so that it is the active file.
* Press the play button in the top right corner of the editor.
* Choose C/C++: g++.exe build and debug active file from the list of detected compilers on your system.You'll only be asked to choose a compiler the first time you run helloworld.cpp. This compiler will be set as the "default" compiler in tasks.json file.
* After the build succeeds, your program's output will appear in the integrated Terminal.
* Congratulations! You've just run your first C++ program in VS Code!

## *Understanding tasks.json*

The first time you run your program, the C++ extension creates a tasks.json file, which you'll find in your project's  .vscode folder. tasks.json stores your build configurations.

Your new tasks.json file should look similar to the JSON below:

    {
     "tasks": [
     {
       "type": "cppbuild",
       "label": "C/C++: g++.exe build active file",
       "command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
       "args": [
         "-fdiagnostics-color=always",
         "-g",
         "${file}",
         "-o",
         "${fileDirname}\\${fileBasenameNoExtension}.exe"
       ],
        "options": {
         "cwd": "${fileDirname}"
       },
       "problemMatcher": ["$gcc"],
       "group": {
         "kind": "build",
         "isDefault": true
       },
       "detail": "Task generated by Debugger."
     }
    ],
     "version": "2.0.0"
    }
    
The command setting specifies the program to run; in this case that is g++. The args array specifies the command-line arguments that will be passed to g++. These arguments are listed in this file in the specific order expected by the compiler.

This task tells g++ to take the active file (\${file}\), compile it, and create an executable file in the current directory (${fileDirname}) with the same name as the active file but with the .exe extension (${fileBasenameNoExtension}.exe). For us, this results in helloworld.exe.

The label value is what you will see in the tasks list; you can name this whatever you like.

The detail value is what you will as the description of the task in the tasks list. It's highly recommended to rename this value to differentiate it from similar tasks.

From now on, the play button will read from tasks.json to figure out how to build and run your program. You can define multiple build tasks in tasks.json, and whichever task is marked as the default will be used by the play button. In case you need to change the default compiler, you can run Tasks: Configure Default Build Task in the Command Palette. Alternatively you can modify the tasks.json file and remove the default by replacing this segment:

    "group": {
        "kind": "build",
        "isDefault": true
    },

with this:

    "group": "build",
------------------
# Referense json
## _The following predefined variables are supported:_

    ${userHome} - the path of the user's home folder
    ${workspaceFolder} - the path of the folder opened in VS Code
    ${workspaceFolderBasename} - the name of the folder opened in VS Code without any slashes (/)
    ${file} - the current opened file
    ${fileWorkspaceFolder} - the current opened file's workspace folder
    ${relativeFile} - the current opened file relative to workspaceFolder
    ${relativeFileDirname} - the current opened file's dirname relative to workspaceFolder
    ${fileBasename} - the current opened file's basename
    ${fileBasenameNoExtension} - the current opened file's basename with no file extension
    ${fileExtname} - the current opened file's extension
    ${fileDirname} - the current opened file's folder path
    ${fileDirnameBasename} - the current opened file's folder name
    ${cwd} - the task runner's current working directory upon the startup of VS Code
    ${lineNumber} - the current selected line number in the active file
    ${selectedText} - the current selected text in the active file
    ${execPath} - the path to the running VS Code executable
    ${defaultBuildTask} - the name of the default build task
    ${pathSeparator} - the character used by the operating system to separate components in file paths
        Predefined variables examples

Supposing that you have the following requirements:

    A file located at /home/your-username/your-project/folder/file.ext opened in your editor;
    The directory /home/your-username/your-project opened as your root workspace.

## _So you will have the following values for each variable:_

    ${userHome} - /home/your-username
    ${workspaceFolder} - /home/your-username/your-project
    ${workspaceFolderBasename} - your-project
    ${file} - /home/your-username/your-project/folder/file.ext
    ${fileWorkspaceFolder} - /home/your-username/your-project
    ${relativeFile} - folder/file.ext
    ${relativeFileDirname} - folder
    ${fileBasename} - file.ext
    ${fileBasenameNoExtension} - file
    ${fileDirname} - /home/your-username/your-project/folder
    ${fileExtname} - .ext
    ${lineNumber} - line number of the cursor
    ${selectedText} - text selected in your code editor
    ${execPath} - location of Code.exe
    ${pathSeparator} - / on macOS or linux, \ on Windows
_______

