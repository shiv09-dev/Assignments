create table Department( d_id int primary key auto_increment , dept_name varchar(20))

create table Employee( e_id int primary key , emp_name varchar(20) , salary int , d_id int ,
foreign key (d_id) references Department(d_id));

insert into Department values(101,'Backend'),(102,'Frontend'),(103,'Database'),(104,'Graphics'),(105,'Machine Learning')

insert into Department values(107,'A.I')


insert into Employee values(001,'Ronit',20000,102),
(002,'Ramesh',30000,101),
(003,'Rina',40000,104),
(004,'Reena',10000,105),
(005,'Ram',25000,103),
(006,'Rekha',12000,103),
(007,'Ashok',15000,101), 
(008,'Dia',50000,104), 
(009,'Ronak',75000,102),
(010,'Shivam',36000,103),
(011,'Reenav',100000,105),
(012,'Rakesh',30000,102),
(013,'Shyam',40000,101),
(014,'Manhar',50000,104),
(015,'Raj',250000,103);

select e_id , emp_name , dept_name from employee , department where employee.d_id = department.d_id order by e_id

select * from employee left join department on employee.d_id = department.d_id

select dept_name , count(e_id)  from employee , department where employee.d_id = department.d_id group by dept_name

select dept_name , avg(salary) from employee , department where employee.d_id = department.d_id group by dept_name



DELIMITER //

CREATE PROCEDURE get_employees_by_department(IN p_dept_name VARCHAR(50))
BEGIN
    SELECT e.e_id, e.emp_name, e.salary, d.dept_name
    FROM employee e
    JOIN department d ON e.d_id = d.d_id
    WHERE d.dept_name = p_dept_name;
END //

call get_employees_by_department('Backend');

Delimiter //
create procedure course_info(in courseid int)
begin
	select * from courses where c_id = course;
end //

call get_course_info(12);



create view emp_view
as
select e_id , emp_name , salary , dept_name
from employee , department
where employee.d_id = department.d_id;

select * from emp_view;

create view e_view
as
select e_id , emp_name , salary , dept_name
from employee , department
where employee.d_id = department.d_id and salary > 50000;

select * from e_view;




delimiter //
create trigger log after insert on employee
for each row
begin
insert into employee(emp_name , salary , d_id)
values(new.emp_name , new.salary , new.d_id);
end //

insert into Employee values(016,'Sonit',60000,102);


alter table employee add column last_modified timestamp
default current_timestamp ;

delimiter //
create trigger last_edited before update on employee
for each row
begin
set new.last_modified = current_timestamp;
end //

update employee set emp_name='Rahul' where emp_id=1004;


delimiter //
create procedure total_employee()
begin
declare total int;
select count(e_id) into total from employee;
select concat('total employee: ',total) as Result;
end //

call total_employee();


delimiter //
create procedure cal_total_sale()
begin
declare total int;
select sum(sales) into total from orders;
select concat('total sales:- ',total) as result;
end //

call cal_total_sale();


delimiter //
create procedure dept_check( employee_id int)
begin 
declare emp_dept int;
select dept_id into emp_dept from employee where e_id = employee_id;
if emp_dept = 1 then
select concat('Employee',employee_id,'works in Backend department') as message;
end //

call dept_check(1001);



delimiter //
create procedure loop_ex()
begin
declare done int default false;
declare empname varchar(20);
declare emp_cur cursor for
select emp_name from employee;
declare continue handler for not found set done = true;
open emp_cur;
emp_loop:loop
fetch emp_cur into empname;
if done then
leave emp_loop;
end if;
select empname as 'employee name ';
end loop;
close emp_cur;
end //
delimiter ;

call loop_ex();




delimiter //
create procedure cur2()
begin
declare c_emp_id int;
declare c_emp_name varchar(20);
declare c_emp_sal int;
declare done int default false;
declare emp_cur cursor for
select e_id , emp_name , salary from employee;
declare continue handler for not found set done=true;
open emp_cur;
read_loop:loop
fetch emp_cur into c_emp_id,c_emp_name,c_emp_sal;
if done then
leave read_loop;
end if;
select concat('ID= ',c_emp_id,' Name= ',c_emp_name,' Salary=',c_emp_sal) as emp_details;
end loop;
end //
delimiter ;

call cur2();





delimiter //
create procedure cur_3()
begin
declare done int default false;
declare c_course_id int;
declare c_course_name varchar(30);
declare c_course_duration varchar(20);
declare course_cur cursor for
select c_id , c_name , course_duration from courses;
declare continue handler for not found set done=true;
create temporary table if not exists tmp_course(cid int , c_name1 varchar(20) , c_dura varchar(20));
truncate table tmp_course;
open course_cur;
read_loop:loop
fetch course_cur into
c_course_id , c_course_name , c_course_duration;
if done then
leave read_loop;
end if;
insert into tmp_course
values(c_course_id , c_course_name , c_course_duration);
end loop;
close course_cur;
select * from tmp_course;
end //
delimiter ;

call cur_3();



start transaction;

select * from employee; 
-- check already exists data
insert into employee(emp_name , d_id , salary) values ('om',4,150000);
insert into employee(emp_name , d_id , salary) values ('Anuj',2,50000);
savepoint sp1;

insert into employee(emp_name , d_id , salary) values ('rudra',1,20000);
insert into employee(emp_name , d_id , salary) values ('prince',3,10000);

rollback to sp1;
commit;


start transaction;

insert into employee(emp_name , d_id , salary) values ('rudra',1,20000);
insert into employee(emp_name , d_id , salary) values ('prince',3,10000);
savepoint sp2;
commit;

insert into employee(emp_name , d_id , salary) values ('rahul',2,20000);
insert into employee(emp_name , d_id , salary) values ('pandya',4,10000);
rollback

select * from employee;


