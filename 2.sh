echo "List files and directory"
ls

echo "List current directory"
pwd

echo "Top 10 processes in descending order are:"
ps -eopid,ppid,cmd,%mem,%cpu --sort=-%mem |head

echo "Prcoesses with highest memory usage are:"
ps aux|sort -nk+4|tail

echo "Current logged in users and logname are:"
logname

echo "current shell is :"
echo $SHELL

echo "home directory is :"
$HOME

echo "Current path is"
echo $PATH

echo "Current OS version, reloease number,kernel version are:"
uname -a
