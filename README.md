# Ratakor Arch repository

Last updated: Sun, 11 Jun 2023 18:14:08 +0200

## Setup
    curl -s https://git.ratakor.com/ratakor-repo.git/plain/setup | sudo sh

or add this to your pacman.conf
```
[ratakor-repo]
SigLevel = Optional
Server = https://raw.githubusercontent.com/ratakor/$repo/master/$arch
Server = https://git.ratakor.com/$repo.git/plain/$arch
```

## Compiler and flags
C compiler: clang

C++ compiler: clang++
```
CFLAGS="-march=x86-64 -mtune=generic -O2 -pipe -fno-plt -fexceptions -Wp,-D_FORTIFY_SOURCE=2 -Wformat -Werror=format-security -fstack-clash-protection -fcf-protection -flto"
CXXFLAGS="-march=x86-64 -mtune=generic -O2 -pipe -fno-plt -fexceptions -Wp,-D_FORTIFY_SOURCE=2 -Wformat -Werror=format-security -fstack-clash-protection -fcf-protection -Wp,-D_GLIBCXX_ASSERTIONS -flto"
LDFLAGS="-Wl,-O1,--sort-common,--as-needed,-z,relro,-z,now -flto"
```

## See all package available
```
$ pacman -Sl ratakor-repo
```
