create database school_db
use school_db
create table teacher(t_id int primary key , t_name varchar(20) NOT NULL , sub varchar(20) not null , email varchar(20) unique)

insert into teacher values (1 , 'Dhruv' , 'C++' , 'abc@gmail.com'),
(2 , 'Dharmistha' , 'Python' , 'xyz@gmail.com'),
(3 , 'Muskan' , 'C' , 'axc@gmail.com'),
(4 , 'Divya' , 'C++' , 'xbz@gmail.com'),
(5 , 'Anjali' , 'Python' , 'aab@gmail.com');

create table student( s_id int , s_name varchar(20) , age int , class int , address varchar(20) , t_id int ,
foreign key (t_id) references teacher(t_id));

insert into student values(101, 'Shivam', 18  , 12, 'Surendranagar' , 2),
(102, 'Manhar', 5 , 2 , 'Surat', 1),
(103, 'Ramesh', 16 , 10 , 'Ahmedabad' , 2),
(104, 'Rakesh', 14 , 8 , 'Surat', 5),
(105, 'Suresh', 15 , 6 , 'Surendranagar' , 5);

select * from student

select s_name , age from student 

select * from student where age > 10

create table courses(c_id int primary key , c_name varchar(20) , course_credits varchar(20))

create database university_db

alter table courses add course_duration varchar(20)

alter table courses drop column course_duration

drop table student

drop table teacher

select * from courses

insert into courses values (11 , 'Frontend Development' , '6 months' ),
(12 , 'Data Analysis' , '1 yr '),
(13 , 'Backend Development' , '6 months' );

update courses set course_duration = '6 yr' where c_id = '11'

select * from courses

select * from courses limit 2

select * from courses order by course_duration desc

create user user1@localhost identified by 'Shivam@0910'

create user user2 identified by 'Shivam@0910'

grant select on school_db.courses to user1@localhost;

grant insert on school_db.courses to user1@localhost;

revoke insert on school_db.courses from user1@localhost;

grant insert on school_db.courses to user2;

insert into courses values (14 , 'A.I' , '1 yr'),
(15 , 'Machine Learning' , '1.5 yr');
commit;

insert into courses values (16 , 'Web Development' , '1 yr'),
(17 , 'FullStack' , '1.5 yr');
rollback;

start transaction;
savepoint s1;
insert into courses values(18 , 'Graphics Design' , '1 yr')
rollback to savepoint s1;
select * from courses