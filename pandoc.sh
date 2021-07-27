shell_path=$(cd `dirname $0`; pwd)
pandoc \
--pdf-engine=xelatex \
-V CJKmainfont="WenQuanYi Zen Hei Sharp" \
--from markdown \
--template $shell_path/template/eisvogel \
--listings \
--no-highlight \
--number-sections \
--markdown-headings=atx \
--markdown-headings=setext \
--toc \
--toc-depth=1 \
tmp.md -o c++快速入门.pdf
