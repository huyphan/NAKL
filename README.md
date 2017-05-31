NAKL - Yet another Vietnamese input keyboard for Mac OS
=======

* Please visit [homepage](http://huyphan.github.com/NAKL) of this project.

Contributing
=======

* Please report issues on the [GitHub issue tracker](https://github.com/huyphan/NAKL/issues). Personal emails are not appropriate for bug reports. 
* Patches are preferred as GitHub pull requests. Contributors are welcome to request free beer from author of this project.

Credits
=======
* chuoi (a.k.a Dao Hai Lam): author of [xvnkb](http://xvnkb.sourceforge.net). 
* Thanks to mybb (a.k.a hieuln) and pmquan (a.k.a co`i) for helping me testing out this software.


License
=======
* Distributed under the GNU GPLv3. See the file [LICENSE](https://github.com/huyphan/NAKL/blob/master/LICENSE).
* Key handling algorithm and keymap of this project are based on [xvnkb](http://xvnkb.sourceforge.net/) written by Dao Hai Lam.
* HotKey setting is based on [ShortcutRecorder](http://wafflesoftware.net/shortcut/) library.
* /Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuhgi
vowjjbhyjpab/Build/Products/Debug/NAKL.app/Contents/MacOS/NAKL normal
x86_64
cd "/Users/nmstech/Desktop/XUAN CUONG/huyphan-NAKL-e2c5b08"
export MACOSX_DEPLOYMENT_TARGET=10.8

/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoo
lchain/usr/bin/clang -arch x86_64 -isysroot
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Dev
eloper/SDKs/MacOSX10.9.sdk
-L/Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuh
givowjjbhyjpab/Build/Products/Debug
-F/Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuh
givowjjbhyjpab/Build/Products/Debug -filelist
/Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuhgi
vowjjbhyjpab/Build/Intermediates/NAKL.build/Debug/NAKL.build/Objects-nor
mal/x86_64/NAKL.LinkFileList -mmacosx-version-min=10.8
-fobjc-link-runtime -framework Carbon -framework Cocoa -Xlinker
-dependency_info -Xlinker
/Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuhgi
vowjjbhyjpab/Build/Intermediates/NAKL.build/Debug/NAKL.build/Objects-nor
mal/x86_64/NAKL_dependency_info.dat -o
/Users/nmstech/Library/Developer/Xcode/DerivedData/NAKL-dpardqrwpmjiuhgi
vowjjbhyjpab/Build/Products/Debug/NAKL.app/Contents/MacOS/NAKL

Undefined symbols for architecture x86_64:
"_OBJC_CLASS_$_KeyboardHandler", referenced from:
objc-class-ref in AppDelegate.o
objc-class-ref in KeyboardHandler.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see
invocation)
