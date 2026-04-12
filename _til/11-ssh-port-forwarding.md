---
cat: tool
title: "ssh local port forwarding with <code>-L</code>"
---
`ssh -L 5432:localhost:5432 user@server` => forwards the port from the remote machine to your local machine. you can then connect with any local client as if the service running at the port were running locally, provided that port is free. helped me in configuring port forwarding through my ISPs webiste when im offsite.
