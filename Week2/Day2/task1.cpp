/* Defanging an IP Address

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".*/

    string defangIPaddr(string address) {
        if(address.length()==0)return address;
        string s="";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.')
                s+=address[i];
            else{
                s+="[.]";
            }
        }
        return s;
    }
