#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define pb(a) push_back(a)
#define rep(i,j,k) for (int i = (int)j; i < (int)k; i++)
#define vi vector<int>
#define vf vector<float>
#define vp vector< pt >
#define ii(a) a.begin(), a.end()

typedef struct {
        int x;
        int y;
} pt;

float dist(pt p1, pt p2) {

      return sqrt((p2.y - p1.y) * (p2.y - p1.y) + (p2.x - p1.x) * (p2.x - p1.x));

}

int main ()
{
    int y = 0;
    pt p2 = {1012, 2012};
    vf dists;
    vp pts;
    bool solved = false;
    for (int x = 0; x*x*x + y*y*y <= 1000000; x++) {
        for (int y = 0; x*x*x + y*y*y <= 1000000; y++) {
            
            pt p1 = {x,y};
            
            pts.pb(p1);
            dists.pb(dist(p1,p2));
            
        }
    }
       
       float mindist = *min_element(ii(dists));
       
    cout << *min_element(ii(dists)) << endl;
    
    rep (i,0,dists.size()) {
        
        if (dists[i] == mindist) {
        
           cout << pts[i].x << " " << pts[i].y << endl;
        }
    }
    
    
    
    system("pause");
}
