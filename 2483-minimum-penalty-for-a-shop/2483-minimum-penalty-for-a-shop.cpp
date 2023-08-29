class Solution {
	public:
		int bestClosingTime(string a) {
			int s=a.size();
			vector<int> y,n;
			y.push_back(0);
			n.push_back(0);
			int cnt=0;
			for(int i=0;i<s;i++){
				if(a[i]=='N')cnt++;
				n.push_back(cnt);
			}
			cnt=0;
			for(int i=s-1;i>=0;i--){
				if(a[i]=='Y')cnt++;
				y.push_back(cnt);
			}
			reverse(y.begin(),y.end());
			int ans=INT_MAX,ind=0;
			for(int i=0;i<s+1;i++){
				int h=y[i]+n[i];
				if(h<ans){
					ans=h;
					ind=i;
				}
			}
			return ind;

		}
	};