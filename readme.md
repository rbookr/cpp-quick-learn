安装 latex 和pandoc
```
sudo pacman -S pandoc
sudo pacman -S texlive-core texlive-langchinese texlive-latexextra

```
如果没有安装latexextra,这个时候还会出一个神奇的错误,缺少environ.sty,也就是environ.sty not found.

不过事实上,我们即使安装了,也有可能会出现缺少别的一些东西.

安装texlive-localmanager-git
这个是archlinux的一个脚本,在aur上,需要使用yay进行安装:

```
yay -S tllocalmgr-git
```

使用localmanager安装缺少的部分
接下来就是缺什么装什么的时候了,使用tllocalmgr进入命令行,之后缺什么install什么就行了
大概方法:

```
tllocalmgr
```
之后在manager中,根据缺少的文件名:

```
install packagename
texhash
```
注意,一定要使用texhash,否则安装没有效果.
