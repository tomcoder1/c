	map<int,bool> d;
	FOR(i,1,n)
	{
		cin>>b[i];
		d[b[i]]=true;
	}
	if (d[x])
		cout<<1;
	else 
		cout<<0;
