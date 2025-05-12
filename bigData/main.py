from pyspark.sql import SparkSession
from pyspark.sql.types import StructType, StructField, IntegerType, StringType, FloatType

# Create Spark session (Databricks already has one as 'spark', so no need to explicitly create it)
# spark = SparkSession.builder.appName("EmployeeExample").getOrCreate()

# 1️⃣ Employee Data
employee_data = [
    (1, "John", "Doe", "HR", 50000.0),
    (2, "Jane", "Smith", "Finance", 60000.0),
    (3, "Sam", "Brown", "IT", 75000.0),
    (4, "Lucy", "Green", "HR", 52000.0),
    (5, "Mike", "Johnson", "Marketing", 58000.0),
    (6, "Emma", "Wilson", "Finance", 62000.0),
    (7, "Chris", "Lee", "IT", 70000.0),
    (8, "Olivia", "Taylor", "Marketing", 61000.0),
    (9, "Liam", "Martin", "Sales", 55000.0),
    (10, "Sophia", "Anderson", "Sales", 54000.0)
]

employee_schema = StructType([
    StructField("id", IntegerType(), False),
    StructField("first_name", StringType(), True),
    StructField("last_name", StringType(), True),
    StructField("department", StringType(), True),
    StructField("salary", FloatType(), True)
])

employee_df = spark.createDataFrame(data=employee_data, schema=employee_schema)

# Show employee table
employee_df.show()
