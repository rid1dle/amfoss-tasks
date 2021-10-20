This one was an easy one, because I already had an idea of simple bash terminal commands.
#
#
Commands Used:
# 
mkdir Coordinates-Location
#
cd Coordinates-Location
#
mkdir North
#
--skipped touch filename.ext everywhere coz nano creates the file by default if it does not exists and so does >/>> operator
#
nano NDegree.txt
#
--Typed the answer to the questions..i.e. 9° then Ctrl(^) + s to save and then ^ + x to exit nano
#
nano NMinutes.txt
--Typed the answer to the questions..i.e. 5' then ^ + s to save and then ^ + x to exit nano
#
nano NSeconds.txt
--Typed the answer to the questions..i.e. 2.1" then ^ + s to save and then ^ + x to exit nano
#
cat N*.txt >> NorthCoordinate.txt
#
mv NorthCoordinate.txt ../North.txt
#
rm -r North
#
#
mkdir East
#
--skipped touch filename.ext everywhere coz nano creates the file by default if it does not exists and so does >/>> operator
#
nano EDegree.txt
--Typed the answer to the questions..i.e. 76° then Ctrl(^) + s to save and then ^ + x to exit nano
#
nano EMinutes.txt
--Typed the answer to the questions..i.e. 29' then ^ + s to save and then ^ + x to exit nano
#
nano ESeconds.txt
--Typed the answer to the questions..i.e. 30.8" then ^ + s to save and then ^ + x to exit nano
#
cat E*.txt >> EastCoordinate.txt
#
mv EastCoordinate.txt ../East.txt
#
rm -r East
#
cat North.txt > Location-Coordinate.txt
#
cat East.txt >> Location-Coordinate.txt
#
#
--Now the git commands
#
cd ..
#
cd ..
#
git add Task-2
#
git commit -m "Task-2 Commited"
#
--Just to see the status, the next command
#
git status
#
git push -u amfoss-tasks
