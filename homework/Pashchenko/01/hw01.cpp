#include <chrono>
#include <iostream>
using namespace std;

class Timer
{
public:
    Timer()
        : start_(std::chrono::high_resolution_clock::now())
    {
    }

    ~Timer()
    {
        const auto finish = std::chrono::high_resolution_clock::now();
        std::cout << std::chrono::duration_cast<std::chrono::microseconds>(finish - start_).count() << " us" << std::endl;
    }

private:
    const std::chrono::high_resolution_clock::time_point start_;
};

void rows(int **ptrarray)
{
    /*float **ptrarray = new float* [10000]; //строки
    for (int count = 0; count < 10000; count++)
        ptrarray[count] = new float [10000]; //столбцы

    for(int row = 0; row < 10000; row++)
    {
        for(int col = 0; col < 10000; col++)
            ptrarray[row][col] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }*/

    int sum1 = 0;
    Timer obj1;

    for(int i = 0; i < 10000; i++)
    {
        for(int j = 0; j < 10000; j++)
            sum1 += ptrarray[i][j];
    }
    cout << "rows method: " << sum1 << "\ntime: " << endl;
}

void cols(int **ptrarray)
{
    /*float **ptrarray = new float* [10000]; //строки
    for (int count = 0; count < 10000; count++)
        ptrarray[count] = new float [10000]; //столбцы

    for(int row = 0; row < 10000; row++)
    {
        for(int col = 0; col < 10000; col++)
            ptrarray[row][col] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }*/

    int sum2 = 0;
    Timer obj2;

    for(int i = 0; i < 10000; i++)
    {
        for(int j = 0; j < 10000; j++)
            sum2 += ptrarray[j][i];
    }
    cout << "columns method: " << sum2 << "\ntime: "<< endl;

}

int main(void)
{
    int **ptrarray = new int* [10000]; //строки
    for (int count = 0; count < 10000; count++)
        ptrarray[count] = new int [10000]; //столбцы

    for(int row = 0; row < 10000; row++)
    {
        for(int col = 0; col < 10000; col++)
            ptrarray[row][col] = (rand() % 10 + 1) / int((rand() % 10 + 1));
    }

    rows(ptrarray);
    cols(ptrarray);
    return 0;
}
