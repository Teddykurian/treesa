
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       i=1
while [ $i -eq 1 ]
do
echo "To find area of: \n1.circle \n2.square \n3.triangle\n"
read n
case $n in
1)read r
p=22/7
a=`expr 22/7\* $r \* $r\* |bc`
echo "area= $a";;
2)read s
a=`expr $s \* $s`
echo "area=$a";;
3)read b
read h
q=1/2
a=`expr 1/2\* $b\ *$h |bc`
echo "area = $a";;
esac
echo "continue 1\nexit 0"
read i
done
