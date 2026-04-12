---
cat: syntax
title: "<code>EXPLAIN ANALYZE</code> vs <code>EXPLAIN</code> SQL commands"
---
`EXPLAIN` shows the path the sql query will take and the estimated time and costs of this query in a production setup db. `EXPLAIN ANALYZE` actually runs the query and shows real timings, but still is not final; kind of a dry run. always using `ANALYZE` would be accurate when debugging slow queries, as `EXPLAIN` query estimates are often wrong on large databases.