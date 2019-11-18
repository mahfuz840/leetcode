/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        Employee *e;
        map<int, Employee *> mp;
        
        for(int i = 0; i < employees.size(); i++) {
            if(employees[i]->id == id)
                e = employees[i];
            
            mp[employees[i]->id] = employees[i];
        }
        
        int visited[2001] = {0};
        visited[e->id] = 1;
        queue<Employee *> q;
        q.push(e);
        
        int imp = e->importance;
        
        while(!q.empty()) {
            Employee *u = q.front();
            for(int i = 0; i < u->subordinates.size(); i++) {
                int tid = u->subordinates[i];
                if(visited[tid] == 0)
                {
                    visited[tid] = 1;
                    q.push(mp[tid]);
                    imp = imp + mp[tid]->importance;
                }
            }
            
            q.pop();
        }
        
        return imp;
    }
};
