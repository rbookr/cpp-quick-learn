#!/bin/env node

const ejs = require("ejs")
const fs = require("fs")
const {execSync} = require("child_process")

if(fs.existsSync("tmp.md"))
  fs.unlinkSync("tmp.md")

log = console.log


const LoadMD = (file_path)=>{
  return new Promise( (res,rej )=>{
    ejs.renderFile(file_path,{},{},(err,str)=>{ if( err ){
        log("err:")
        rej(err)
        return;
      }
      res(str)
    })

  })
}

String.prototype.endWith=function(str){
  if(str==null||str==""||this.length==0||str.length>this.length)
    return false;
  if(this.substring(this.length-str.length)==str)
    return true;
  else
    return false;
  return true;
}

function make_pdf(){
  //shell_path=$(cd `dirname $0`; pwd)
  execSync(`pandoc \
--pdf-engine=xelatex \
-V CJKmainfont="WenQuanYi Zen Hei Sharp" \
--from markdown \
--template ./template/eisvogel \
--listings \
--no-highlight \
--markdown-headings=atx \
--markdown-headings=setext \
  tmp.md -o out.pdf`)
}


async function main(){
  //let mds = []
  log("Start----")
  /*
   *let files = fs.readdirSync("./").filter( name => name.endWith(".md") && name[0] !='_' )
   *  .filter(name => name[0] >='0' && name[0] <='9')
   *  .sort((a,b) => {
   *  let an = parseInt(a.split("-")[0]);
   *  let bn = parseInt(b.split("-")[0]);
   *  return an - bn;
   *})
   */

  let files = [
  '0-head.md',
  '1-第一个程序.md',
  '1-第一个程序-cstyle.md',
  '2-注释.md',
  '3-数据类型.md',
  '4-输入输出-cppStyle.md',
  '4-输入输出.md',
  '5-变量.md',
  '6-运算符.md',
  '7-控制结构.md',
  '8-循环结构.md',
  '9-数组.md',
  '10-字符串.md',
  '11-函数.md',
  '12-递归.md'
  ]

  log(files)
  let mds = (await Promise.all( files.map( LoadMD ))).join("\n")
  //outtmp = artile_head() + mds
  fs.writeFileSync("tmp.md", mds)
  log("写入 tmp.md 完毕")
  //make_pdf()
  //fs.unlinkSync("tmp.md")
}

main()
