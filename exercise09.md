# Exercise 9 - Viewing history

1. Make a commit with a multi line commit message
   (leaving an empty line after the first line)

2. View that commit in the log

        git log -1

        Output:

        Author: Brandon Iledan <iledanb@gmail.com>
        Date:   Wed Oct 5 17:57:19 2022 -0700

        This is a multi-line commit message

        Wow so cool

3. View the full commit log

        git log

        Output too long to enter, includes all commits to the first one.

*If the log fills your whole terminal, press `q` to exit*

4. View a shortened version of the commit log

        git log --oneline

        Output:

        0a370f8 (HEAD -> main) This is a multi-line commit message
        5df0e35 Adding clothing.txt
        d580c89 Committing all up to Exercise 12-12
        543a084 Changes to /equipment files
        1cac293 Exercise 8-1
        551adeb commit furniture.txt only
        6671c8d more appliances and fruits added, updated exercise 7
        36a548b vegetable and equipment changes, exercise file changes
        ad5709d Added vegetables file and equipment folder
        e78fdc6 Added more fruit to the list
        e77507a First commit
        5f4920c (origin/main, origin/HEAD) 10/4/22
        87a8477 updating for fall 2022
        88cf350 renamed for style
        0b46806 exercises through 10
        07af1e7 adding README
        f51751e adding #5
        837a23a initial commit

5. Pick a commit hash from the log

6. View the commit log from the chosen commit backward

        git log 6671c8d

7. How much of the commit hash do you need to specify? Hint, run `git help log`

        I only needed to specify the abbreviated version with 7 characters.

8. How can you show just the last three commit messages?

        git log -1 -n 3