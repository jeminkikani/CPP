-- create table saleman_master
\sql
\connect root@localhost:3306

create database dbname
show databases;
use dbname

create table saleman_master
(
    SALESMAN_NO varchar(6),
    SALESMAN_NAME varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(20),
    PINCODE int(8),
    STATE varchar(20),
    SALMAT int(8),
    TGTTOGET int(6),
    YTDSALES int(6),
    REMARKS varchar(60)
);

desc saleman_master;

insert into saleman_master values("s00001","aman","a-14","worli","mumbai",400002,"maharastra",3000,100,50,"good"),
insert into saleman_master values("s00002","omkar","65","nariman","mumbai",400001,"maharastra",3000,200,100,"good"),
insert into saleman_master values("s00003","raj","p-7","bandra","mumbai",400032,"maharastra",3000,200,100,"good"),
insert into saleman_master values("s00004","ashish","A-5","juhu","mumbai",400044,"maharastra",3500,200,150,"good");


select * from saleman_master;