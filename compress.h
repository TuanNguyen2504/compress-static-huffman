#pragma once
#ifndef _COMPRESS_
#define _COMPRESS_

#include "display.h"
const string FILE_NAME_EXTENSION_ENCODE = ".winzip";
const string FILE_NAME_EXTENSION_DECODE = "_decode";

//==================== CAC HAM HO TRO NEN-GIAI NEN FILE ====================//
float getSize(const string&);

//ham chuyen chuoi string sang char*
char* stringToCharArray(const string&);

//ham thay doi phan mo rong cua file
string changeFileExtension(const string&, const string&);

//tim duong dan cu the [path(file out) + namefile(file in)]
void setOutputPath(const string&, string&, const string&);

//ham char* sang string
string charArrayToString(char*);

//Ham kiem tra duong path phai file nen khong
bool isCompressionFile(const string&);

//Bo di dau " " neu co
void formatPath(string&);

//lay duong dan chinh den folder nen. vd C:/a/folder -> C:/a/
string getPathToFolder(const string&);
// ======================= CAC HAM HO TRO NEN-GIAI NEN FOLDER ====================== //

//ham kiem tra 1 duong path co dan den 1 folder
bool isFolder(const string&);

//ham kiem tra 1 path la file hay folder
bool isFile(const string&);

//ham tao 1 folder moi
int newFolder(const string&);

// chay qua tung folder luu lai path (folder chua no)
vector<string> saveDirectoryStructure(const string&);

// ================================== NEN FILE =================================== //
void compressFile();

// =========================== NEN 1 FOLDER CHUA FILE =========================== //
void compressFolder();

#endif