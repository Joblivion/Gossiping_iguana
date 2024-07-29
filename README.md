# What is the Gossiping Iguana?

The Gossiping Iguana is a real-time chat app project written in C.

This a learning project. Thus, I may not use already existing solutions for the sake of learning. However, pieces of advice and hints are alway welcome.


# Levels

I set achievement levels for myself. The further I get, the more realistic the chat app will become. Each level is supposed to add functionality and evolve the app to a more usable level. You can read about the goals for each level, and check the current stage of the project below. 

This is an initial plan, and may change many times as I learn more on the subject.

## Level 1 - the basics

- [ ] achieve basic chatting on stdin/stdout
    - [x] understand the theory behind sockets
    - [ ] send msg once in both directions 
    - [ ] use a server as a mediator

## Level 2 - create a database

- [ ] basic account management
- [ ] consistent chat history
- [ ] messeges sent to an offline peer get stored in the history
- [ ] clients can start chatting based on peer's ID
- [ ] (extra) group-chat?

## Level 3 - optimization and security

- [ ] optimize performance
    - [ ] create a capacity test - how many users can the server handle while remaining "real-time"?
    - [ ] try to improve
- [ ] security
    - [ ] static code analysis
    - [ ] voulnerability analysis
    - to append

## Level 4 - front-end

- [ ] create a basic front-end
- [ ] (extra) make it look cool

# Branches

- **master** is the latest stable version
- **level-n** is always work-in-progress for a level before merging into master when finished
- **dev** is for playing around

# Learning sources

This is for myself to keep track.

- https://www.gnu.org/software/libc/manual/html_node/Sockets.html
- https://www.mirrorfly.com/blog/chat-app-system-design/#:~:text=Chat%20app%20architecture%20is%20the,communication%20class%2C%20and%20client%20application.
- https://gist.github.com/browny/5211329
