---
cat: concept
title: "ETL vs ELT"
# wide: true
---
in ETL (extract -> transform -> load), you transform and do changes to the data before it lands in the warehouse. in ELT (extract -> load -> transform), raw data lands first in the warehouse, then you transform it inside the warehouse using SQL. ELT is dominant now because modern warehouses like BigQuery, Snowflake and Databricks are cheap at compute. it also means you keep the raw data and can transform differently later without re-ingesting.