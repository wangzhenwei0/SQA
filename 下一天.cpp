#include<iostream>
 
using namespace std;
 
bool fun(int year) {
	if (((year % 4 == 0) && (year % 100)) || (year % 400 == 0))
		return true;
    return false;
}
 
int main() {
	int year, month, day;
	while(cin >> year >> month >> day)
	{
		switch (month) {
	case 1: {
		if (day==31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 2: {
		if (fun(year)) {
			if (day==29) {
				month++;
				day = 1;
			}
			else if (day>29) 
		{
			cout<<"不可能！！！"<<endl; 
		}
			else {
				day++;
			}
		}
		else {
			if (day==28) {
				month++;
				day = 1;
			}
			else if (day>28) 
		{
			cout<<"不可能！！！"<<endl; 
		}
			else {
				day++;
			}
		}
		break;
	}
	case 3: {
		if (day == 31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 4: {
		if (day == 30) {
			day = 1;
			month++;
		}
		else if (day>=31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 5: {
		if (day == 31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 6: {
		if (day == 30) {
			day = 1;
			month++;
		}
		else if (day>=31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 7:{
		if (day == 31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 8: {
		if (day == 31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 9: {
		if (day == 30) {
			day = 1;
			month++;
		}
		else if (day>=31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 10: {
		if (day == 31) {
			day = 1;
			month++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 11: {
		if (day == 30) {
			day = 1;
			month++;
		}
		else if (day>=31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	case 12: {
		if (day == 31) {
			day = 1;
			month=1;
			year++;
		}
		else if (day>31) 
		{
			cout<<"不可能！！！"<<endl; 
		}
		else {
			day++;
		}
		break;
	}
	}	
	cout << "下一天是： " << year << " " << month << " " << day;
 }
	return 0;
}
