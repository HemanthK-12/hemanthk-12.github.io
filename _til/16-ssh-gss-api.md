---
cat: insight
title: ssh requests gss api
---
There is an attribute in `~/.ssh/sshd_config` called `GSSAPIAuthentication`, which sometimes defaults to yes. This means the `Generic Security Service(GSS)` API is tried for a handshake by ssh before trying the normal password authentication method. Most of the machines don't have this setup with this protocol(called `Kerberos`, mostly common in high performance computing clusters)and it can take a long time to fail, the client to time out and fallback to the password-based auth. So whenever you are facing a long delay in ssh connections, check if `GSSAPIAuthentication` is set to no or not. that'll fix it. i faced it while cloning a git repo from forgejo through ssh.