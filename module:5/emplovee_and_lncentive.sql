-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 13, 2022 at 02:44 PM
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
-- Database: `emplovee and lncentive`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_ID` int(25) DEFAULT NULL,
  `First_name` varchar(25) DEFAULT NULL,
  `last_name` varchar(25) DEFAULT NULL,
  `salary` int(30) DEFAULT NULL,
  `joining_date` tinytext DEFAULT NULL,
  `department` tinytext DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_ID`, `First_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'john', 'adraham', 1000000, '01-jan-13 12.00.00 AM', 'Banking'),
(1, 'michael', 'clarke', 800000, '01-jan-13 12.00.00 AM', 'Insurance'),
(3, 'roy', 'Thomas', 700000, '01-feb-13 12.00.00 AM', 'Banking'),
(4, 'tom', 'jose', 600000, '01-feb-13 12.00.00 AM', 'Insurance'),
(5, 'jerry', 'pinto', 650000, '01-feb-13 12.00.00 AM', 'Insurance'),
(6, 'philip', 'mathew', 750000, '01-jan-13 12.00.00 AM', 'services'),
(7, 'testname1', '123', 650000, '01-jan-13 12.00.00 AM', 'services'),
(8, 'testname2', 'lname%', 600000, '01-feb-13 12.00.00 AM', 'Insurance');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Employee_ref_id` int(10) DEFAULT NULL,
  `incentive` varchar(20) DEFAULT NULL,
  `incentive_amount` int(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `incentive`, `incentive_amount`) VALUES
(1, '01-FAB-13', 5000),
(2, '01-FAB-13', 3000),
(3, '01-FAB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
