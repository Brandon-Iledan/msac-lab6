[1mdiff --git a/exercise08.md b/exercise08.md[m
[1mindex c624a89..8a9c5eb 100644[m
[1m--- a/exercise08.md[m
[1m+++ b/exercise08.md[m
[36m@@ -8,22 +8,95 @@[m
 [m
 4. Look at `git status`[m
 [m
[32m+[m[32m        Output:[m
[32m+[m
[32m+[m[32m        On branch main[m
[32m+[m[32m        Your branch is ahead of 'origin/main' by 7 commits.[m
[32m+[m[32m        (use "git push" to publish your local commits)[m
[32m+[m
[32m+[m[32m        Changes not staged for commit:[m
[32m+[m[32m        (use "git add <file>..." to update what will be committed)[m
[32m+[m[32m        (use "git restore <file>..." to discard changes in working directory)[m
[32m+[m[32m        modified:   equipment/appliances.txt[m
[32m+[m[32m        modified:   equipment/furniture.txt[m
[32m+[m
[32m+[m[32m        no changes added to commit (use "git add" and/or "git commit -a")[m
[32m+[m
[32m+[m
 5. View all the changes you've made[m
 [m
         git diff[m
 [m
[32m+[m[32m        Output:[m
[32m+[m
[32m+[m[32m        diff --git a/equipment/appliances.txt b/equipment/appliances.txt[m
[32m+[m[32m        index a803246..244aebc 100644[m
[32m+[m[32m        --- a/equipment/appliances.txt[m
[32m+[m[32m        +++ b/equipment/appliances.txt[m
[32m+[m[32m        @@ -2,5 +2,4 @@ boiler[m
[32m+[m[32m         chiller[m
[32m+[m[32m         transmedium toaster oven[m
[32m+[m[32m         dishwasher[m
[32m+[m[32m        -electric kettle[m
[32m+[m[32m        -coffee grinder[m
[32m+[m[32m        \ No newline at end of file[m
[32m+[m[32m        +electric kettle[m
[32m+[m[32m        \ No newline at end of file[m
[32m+[m[32m        diff --git a/equipment/furniture.txt b/equipment/furniture.txt[m
[32m+[m[32m        index c7b774b..f712368 100644[m
[32m+[m[32m        --- a/equipment/furniture.txt[m
[32m+[m[32m        +++ b/equipment/furniture.txt[m
[32m+[m[32m        @@ -1,3 +1,4 @@[m
[32m+[m[32m         futon[m
[32m+[m[32m         couch[m
[32m+[m[32m        -Herman Miller Aeron Chair[m
[32m+[m[32m        \ No newline at end of file[m
[32m+[m[32m        +Herman Miller Aeron Chair[m
[32m+[m[32m        +side table[m
[32m+[m[32m        \ No newline at end of file[m
[32m+[m
[32m+[m
 6. Does the following command return anything?[m
 [m
         git diff --staged[m
 [m
[32m+[m[32m        There was no output.[m
[32m+[m
 7. Add one of your changed files to the index[m
 [m
[31m-        git commit add <changed file>[m
[32m+[m[32m        git commit add equipment/furniture.txt[m
 [m
 8. What do these commands show?[m
 [m
         git diff[m
[32m+[m[32m                diff --git a/equipment/appliances.txt b/equipment/appliances.txt[m
[32m+[m[32m                index a803246..244aebc 100644[m
[32m+[m[32m                --- a/equipment/appliances.txt[m
[32m+[m[32m                +++ b/equipment/appliances.txt[m
[32m+[m[32m                @@ -2,5 +2,4 @@ boiler[m
[32m+[m[32m                 chiller[m
[32m+[m[32m                 transmedium toaster oven[m
[32m+[m[32m                 dishwasher[m
[32m+[m[32m                -electric kettle[m
[32m+[m[32m                -coffee grinder[m
[32m+[m[32m                \ No newline at end of file[m
[32m+[m[32m                +electric kettle[m
[32m+[m[32m                \ No newline at end of file[m
[32m+[m
         git diff --staged[m
[32m+[m[32m                diff --git a/equipment/furniture.txt b/equipment/furniture.txt[m
[32m+[m[32m                index c7b774b..f712368 100644[m
[32m+[m[32m                --- a/equipment/furniture.txt[m
[32m+[m[32m                +++ b/equipment/furniture.txt[m
[32m+[m[32m                @@ -1,3 +1,4 @@[m
[32m+[m[32m                 futon[m
[32m+[m[32m                 couch[m
[32m+[m[32m                -Herman Miller Aeron Chair[m
[32m+[m[32m                \ No newline at end of file[m
[32m+[m[32m                +Herman Miller Aeron Chair[m
[32m+[m[32m                +side table[m
[32m+[m[32m                \ No newline at end of file[m
[32m+[m
 [m
 9. Add the other changed file to the index[m
 [m
