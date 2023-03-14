-- example;
-- \sql
-- \connect root@localhost:3306
-- show databases
-- use dbname

-- for use in create table
create table student
(
    sid int(5),
    sname varchar(10),
    smob_no int(8)
);


-- for use describe table
desc student;


-- for use in data inserting
insert into student values (1,"jemin",95106);
insert into student values (2,"jay",1234);


-- for use in show table
select * from student;