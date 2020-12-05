# Proxy Design Pattern

Pattern Type - Structural

A proxy is a wrapper that controls access to the wrappee.
A good example is a database proxy. Database queries are slow, therefore clients
should not query for data frequently. Furthermore, not all clients will have authorization
to access the data.

To provide caching and authorization, we use a proxy (intermediary). The client is unaware of
the existence of proxy.

## When to use
1. If you want to execute operations before and after the primary service logic
2. To control access to expensive subjects

## Advantages
1. Since proxies usually perform caching, they will run even if the primary service is down
2. Can create as many proxies that provide specialized service

## Disadvantages
1. Can complicate the codebase if multiple proxies exist
2. Can slowdown process in case the pre and post service logic is slow

