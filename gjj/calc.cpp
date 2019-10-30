#include<iostream>
#include<string>
using namespace std;
int expr();
string str;
int i = 0;
int is_num;
int cur_token;
int get_current_token()
{
	return cur_token;
}
void next_token()
{
	int num = 0;
	is_num = 0;
	while (str[i]>='0' && str[i]<='9') {
		num = num*10 + (str[i] - '0');
		is_num = 1;
		++i;
	}
	if (is_num == 1) {
		cur_token = num;
		return ;
	}
	if (str[i] == '\0') {
		return ;
	} else {
		cur_token = (int)str[i];
		++i;
		return ;
	}
}

void token_init()
{
	i = 0;
	next_token();
}

int factor()
{
	int current_token = get_current_token();
	if (is_num == 1) {
		next_token();
		return current_token;
	}
	if (current_token == (int)'(') {
		next_token();
		int r = expr();
		next_token();
		return r;
	}
}

int term()
{
	int f1 = factor();
	int op =  get_current_token();
	while (op == (int)'*' || op == (int)'/') {
		next_token();
		int f2 = factor();
		if(op == (int)'*')
		{
			f1 = f1 * f2;
		}
		else
		{
			f1 = f1 / f2;
		}
		op = get_current_token();
	}
	return f1;
}

int expr()
{
	int t1 = term();
	int op =  get_current_token();
	while (op == (int)'+' || op == (int)'-') {
		next_token();
		int t2 = term();
		if (op == (int)'+') {
			t1 = t1 + t2;
		} else {
			t1 = t1 - t2;
		}
		op = get_current_token();
	}
	return t1;
}

int main()
{
	while (cin>>str) {
		token_init();
		int r = expr();
		cout<<r<<endl;
	}
}

