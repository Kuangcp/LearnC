# 大一的C代码
- 眼瞅着都要毕业了，时间真快

`辅助脚本`
```sh
file=$1
if [ "$1" = "" ];then
        exit
fi

# 编译
g++ `pwd`/$file -o `pwd`/run.${file%.*}.run
# 执行
`pwd`/run.${file%.*}.run
```