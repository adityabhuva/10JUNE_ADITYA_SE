-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 20, 2022 at 01:44 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `employee and incentive`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_id` int(30) DEFAULT NULL,
  `First_name` tinytext DEFAULT NULL,
  `Last_name` tinytext DEFAULT NULL,
  `Salary` int(30) DEFAULT NULL,
  `Joining_date` varchar(40) DEFAULT NULL,
  `Department` tinytext DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_id`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Adraham', 1000000, '01-jan-13 12.00.00 AM', 'Banking'),
(2, 'michael', 'Clarke', 800000, '01-jan-13 12.00.00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-Feb-13 12.00.00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-Feb-13 12.00.00 AM', 'Insurance'),
(5, 'Jerry', 'pinto', 750000, '01-Feb-13 12.00.00 AM', 'Insurance'),
(6, 'Philip', 'Jose', 600000, '01-Feb-13 12.00.00 AM', 'Services'),
(7, 'TestName1', '123', 650000, '01-Jan-13 12.00.00 AM', 'Services'),
(8, 'Testname2', 'Lname%', 600000, '01-Feb-13 12.00.00 AM', 'Insurance');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Employee_ref_id` int(10) DEFAULT NULL,
  `Incentive_data` varchar(30) DEFAULT NULL,
  `Incentive_amount` int(40) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `Incentive_data`, `Incentive_amount`) VALUES
(1, '01-FEB-13', 5000),
(2, '01-FEB-13', 3000),
(3, '01-FEB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
