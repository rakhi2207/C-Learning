bool isSafe(int** arr,int x,int y,int n)
{
    if(x<n&&y<n&&arr[x][y]==0)
    {
        return false;
    }
    return true;
}

bool rateInMaze(int** arr,int x,int y,int n)
{
    if(x==n-1&&y==n-1)
    {
        arr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n))
    {
        arr[x][y]=1;
        if(rateInMaze(arr,x+1,y,n))
        {
            return true;
        }
        if(rateInMaze(arr,x,y+1,n))
        {
            return true;
        }
        arr[x][y]=0;
        return false;
    }
    return false;
    
}

int main()
{
    int*arr;
    
    return 0;
}