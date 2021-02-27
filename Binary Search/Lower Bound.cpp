
ll Lower_Bound(ll l, ll r, ll x)
{
    while(l < r)
	{
        ll mid = (l + r)/2;
        if(ar[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l;
}