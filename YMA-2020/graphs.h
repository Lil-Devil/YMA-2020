#pragma once

#define FST_FUNCTION(string) FST::FST(string, LEX_FUNCTION, 9, \
FST::NODE(1, FST::RELATION('f', 1)), \
FST::NODE(1, FST::RELATION('u', 2)), \
FST::NODE(1, FST::RELATION('n', 3)), \
FST::NODE(1, FST::RELATION('c', 4)), \
FST::NODE(1, FST::RELATION('t', 5)), \
FST::NODE(1, FST::RELATION('i', 6)), \
FST::NODE(1, FST::RELATION('o', 7)), \
FST::NODE(1, FST::RELATION('n', 8)), \
FST::NODE())

#define FST_INT(string) FST::FST(string, LEX_INT, 4, \
FST::NODE(1, FST::RELATION('i', 1)), \
FST::NODE(1, FST::RELATION('n', 2)), \
FST::NODE(1, FST::RELATION('t', 3)), \
FST::NODE())

#define FST_IF(string) FST::FST(string, LEX_IF, 3, \
FST::NODE(1, FST::RELATION('i', 1)), \
FST::NODE(1, FST::RELATION('f', 2)), \
FST::NODE())

#define FST_MAIN(string) FST::FST(string, LEX_MAIN, 5, \
FST::NODE(1, FST::RELATION('m', 1)), \
FST::NODE(1, FST::RELATION('a', 2)), \
FST::NODE(1, FST::RELATION('i', 3)), \
FST::NODE(1, FST::RELATION('n', 4)), \
FST::NODE())

#define FST_WRITE(string) FST::FST(string, LEX_WRITE, 6, \
FST::NODE(1, FST::RELATION('w', 1)), \
FST::NODE(1, FST::RELATION('r', 2)), \
FST::NODE(1, FST::RELATION('i', 3)), \
FST::NODE(1, FST::RELATION('t', 4)), \
FST::NODE(1, FST::RELATION('e', 5)), \
FST::NODE())

#define FST_RETURN(string) FST::FST(string, LEX_RETURN, 7, \
FST::NODE(1, FST::RELATION('r', 1)), \
FST::NODE(1, FST::RELATION('e', 2)), \
FST::NODE(1, FST::RELATION('t', 3)), \
FST::NODE(1, FST::RELATION('u', 4)), \
FST::NODE(1, FST::RELATION('r', 5)), \
FST::NODE(1, FST::RELATION('n', 6)), \
FST::NODE())

#define FST_STR(string) FST::FST(string, LEX_STR, 4, \
FST::NODE(1, FST::RELATION('s', 1)), \
FST::NODE(1, FST::RELATION('t', 2)), \
FST::NODE(1, FST::RELATION('r', 3)), \
FST::NODE())

#define FST_OPERATOR(string) FST::FST(string, LEX_OPERATOR, 1, \
FST::NODE(5, \
FST::RELATION('+', 0), \
FST::RELATION('-', 0), \
FST::RELATION('*', 0), \
FST::RELATION('/', 0), \
FST::RELATION('%', 0)), \
FST::NODE())

#define FST_LITERAL_S(string) FST::FST(string, LEX_LITERAL, 3, \
FST::NODE(1, FST::RELATION('\"', 1)), \
FST::NODE(85, \
FST::RELATION(' ', 1), \
FST::RELATION('a', 1), \
FST::RELATION('b', 1), \
FST::RELATION('c', 1), \
FST::RELATION('d', 1), \
FST::RELATION('e', 1), \
FST::RELATION('f', 1), \
FST::RELATION('g', 1), \
FST::RELATION('h', 1), \
FST::RELATION('i', 1), \
FST::RELATION('j', 1), \
FST::RELATION('k', 1), \
FST::RELATION('l', 1), \
FST::RELATION('m', 1), \
FST::RELATION('n', 1), \
FST::RELATION('o', 1), \
FST::RELATION('p', 1), \
FST::RELATION('q', 1), \
FST::RELATION('r', 1), \
FST::RELATION('s', 1), \
FST::RELATION('t', 1), \
FST::RELATION('u', 1), \
FST::RELATION('v', 1), \
FST::RELATION('w', 1), \
FST::RELATION('x', 1), \
FST::RELATION('y', 1), \
FST::RELATION('z', 1), \
FST::RELATION('0', 1), \
FST::RELATION('1', 1), \
FST::RELATION('2', 1), \
FST::RELATION('3', 1), \
FST::RELATION('4', 1), \
FST::RELATION('5', 1), \
FST::RELATION('6', 1), \
FST::RELATION('7', 1), \
FST::RELATION('8', 1), \
FST::RELATION('9', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('�', 1), \
FST::RELATION('=', 1), \
FST::RELATION('+', 1), \
FST::RELATION('-', 1), \
FST::RELATION('*', 1), \
FST::RELATION('/', 1), \
FST::RELATION('(', 1), \
FST::RELATION(')', 1), \
FST::RELATION('{', 1), \
FST::RELATION('}', 1), \
FST::RELATION(';', 1), \
FST::RELATION(':', 1), \
FST::RELATION(',', 1), \
FST::RELATION('?', 1), \
FST::RELATION('!', 1), \
FST::RELATION('\"', 2)), \
FST::NODE())

#define FST_LITERAL_I(string) FST::FST(string, LEX_LITERAL, 1, \
FST::NODE(10, \
FST::RELATION('0', 0), \
FST::RELATION('1', 0), \
FST::RELATION('2', 0), \
FST::RELATION('3', 0), \
FST::RELATION('4', 0), \
FST::RELATION('5', 0), \
FST::RELATION('6', 0), \
FST::RELATION('7', 0), \
FST::RELATION('8', 0), \
FST::RELATION('9', 0)), \
FST::NODE())

#define FST_LITERAL_MINUS_I(string) FST::FST(string, LEX_LITERAL, 3, \
FST::NODE(1, FST::RELATION('-', 1)), \
FST::NODE(10, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2), \
FST::RELATION('8', 2), \
FST::RELATION('9', 2)), \
FST::NODE(10, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2), \
FST::RELATION('8', 2), \
FST::RELATION('9', 2)), \
FST::NODE())

#define FST_ID(string) FST::FST(string, LEX_ID, 1, \
FST::NODE(53, \
FST::RELATION('A', 0), \
FST::RELATION('B', 0), \
FST::RELATION('C', 0), \
FST::RELATION('D', 0), \
FST::RELATION('E', 0), \
FST::RELATION('F', 0), \
FST::RELATION('G', 0), \
FST::RELATION('H', 0), \
FST::RELATION('I', 0), \
FST::RELATION('J', 0), \
FST::RELATION('K', 0), \
FST::RELATION('L', 0), \
FST::RELATION('M', 0), \
FST::RELATION('N', 0), \
FST::RELATION('O', 0), \
FST::RELATION('P', 0), \
FST::RELATION('Q', 0), \
FST::RELATION('R', 0), \
FST::RELATION('S', 0), \
FST::RELATION('T', 0), \
FST::RELATION('U', 0), \
FST::RELATION('V', 0), \
FST::RELATION('W', 0), \
FST::RELATION('X', 0), \
FST::RELATION('Y', 0), \
FST::RELATION('Z', 0), \
FST::RELATION('a', 0), \
FST::RELATION('b', 0), \
FST::RELATION('c', 0), \
FST::RELATION('d', 0), \
FST::RELATION('e', 0), \
FST::RELATION('f', 0), \
FST::RELATION('g', 0), \
FST::RELATION('h', 0), \
FST::RELATION('i', 0), \
FST::RELATION('j', 0), \
FST::RELATION('k', 0), \
FST::RELATION('l', 0), \
FST::RELATION('m', 0), \
FST::RELATION('n', 0), \
FST::RELATION('o', 0), \
FST::RELATION('p', 0), \
FST::RELATION('q', 0), \
FST::RELATION('r', 0), \
FST::RELATION('s', 0), \
FST::RELATION('t', 0), \
FST::RELATION('u', 0), \
FST::RELATION('v', 0), \
FST::RELATION('w', 0), \
FST::RELATION('x', 0), \
FST::RELATION('y', 0), \
FST::RELATION('z', 0), \
FST::RELATION('_', 0)), \
FST::NODE())

#define FST_PARAM(string) FST::FST(string, LEX_PARAM, 6, \
FST::NODE(1, FST::RELATION('p', 1)), \
FST::NODE(1, FST::RELATION('a', 2)), \
FST::NODE(1, FST::RELATION('r', 3)), \
FST::NODE(1, FST::RELATION('a', 4)), \
FST::NODE(1, FST::RELATION('m', 5)), \
FST::NODE())

#define FST_VAR(string) FST::FST(string, LEX_VAR, 4, \
FST::NODE(1, FST::RELATION('v', 1)), \
FST::NODE(1, FST::RELATION('a', 2)), \
FST::NODE(1, FST::RELATION('r', 3)), \
FST::NODE())

#define FST_REPEAT(string) FST::FST(string, LEX_REPEAT, 7, \
FST::NODE(1, FST::RELATION('r', 1)), \
FST::NODE(1, FST::RELATION('e', 2)), \
FST::NODE(1, FST::RELATION('p', 3)), \
FST::NODE(1, FST::RELATION('e', 4)), \
FST::NODE(1, FST::RELATION('a', 5)), \
FST::NODE(1, FST::RELATION('t', 6)), \
FST::NODE())

#define FST_LITERAL_I16(string) FST::FST(string, LEX_LITERAL, 3, \
FST::NODE(1, FST::RELATION('h', 1)), \
FST::NODE(22, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2), \
FST::RELATION('8', 2), \
FST::RELATION('9', 2), \
FST::RELATION('A', 2), \
FST::RELATION('B', 2), \
FST::RELATION('C', 2), \
FST::RELATION('D', 2), \
FST::RELATION('E', 2), \
FST::RELATION('F', 2), \
FST::RELATION('a', 2), \
FST::RELATION('b', 2), \
FST::RELATION('c', 2), \
FST::RELATION('d', 2), \
FST::RELATION('e', 2), \
FST::RELATION('f', 2)), \
FST::NODE(22, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2), \
FST::RELATION('8', 2), \
FST::RELATION('9', 2), \
FST::RELATION('A', 2), \
FST::RELATION('B', 2), \
FST::RELATION('C', 2), \
FST::RELATION('D', 2), \
FST::RELATION('E', 2), \
FST::RELATION('F', 2), \
FST::RELATION('a', 2), \
FST::RELATION('b', 2), \
FST::RELATION('c', 2), \
FST::RELATION('d', 2), \
FST::RELATION('e', 2), \
FST::RELATION('f', 2)), \
FST::NODE())

#define FST_LITERAL_I8(string) FST::FST(string, LEX_LITERAL, 3, \
FST::NODE(1, FST::RELATION('o', 1)), \
FST::NODE(8, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2)), \
FST::NODE(8, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2), \
FST::RELATION('2', 2), \
FST::RELATION('3', 2), \
FST::RELATION('4', 2), \
FST::RELATION('5', 2), \
FST::RELATION('6', 2), \
FST::RELATION('7', 2)), \
FST::NODE())

#define FST_LITERAL_I2(string) FST::FST(string, LEX_LITERAL, 3, \
FST::NODE(1, FST::RELATION('b', 1)), \
FST::NODE(2, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2)), \
FST::NODE(2, \
FST::RELATION('0', 2), \
FST::RELATION('1', 2)), \
FST::NODE())

#define FST_THEN(string) FST::FST(string, LEX_THEN, 5, \
FST::NODE(1, FST::RELATION('t', 1)), \
FST::NODE(1, FST::RELATION('h', 2)), \
FST::NODE(1, FST::RELATION('e', 3)), \
FST::NODE(1, FST::RELATION('n', 4)), \
FST::NODE())

#define FST_ELSE(string) FST::FST(string, LEX_ELSE, 5, \
FST::NODE(1, FST::RELATION('e', 1)), \
FST::NODE(1, FST::RELATION('l', 2)), \
FST::NODE(1, FST::RELATION('s', 3)), \
FST::NODE(1, FST::RELATION('e', 4)), \
FST::NODE())
