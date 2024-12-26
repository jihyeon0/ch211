#include <iostream>
using namespace std;

int sum(int arr[]);
double Avr(int isum);

void Asc(int arr[], int iCount);
void Desc(int arr[], int iCount);

int main()
{
    int Arr[5] = { 0 };
    int iSum = 0;
    double dAvr = 0.0;

    for (int i = 0; i < 5; i++)
    {
        cin >> Arr[i];
    }
    iSum = sum(Arr);
    dAvr = Avr(iSum);
    cout << "합계 : " << iSum << " 평균 : " << dAvr << endl;


    int iCount = 5;
    int iCase = 0;
    cout << "1. 오름차순, 2.내림차순 중에 선택하세요" << endl;
    cin >> iCase;

    int iArr[5] = { 0 };
    cout << "정렬할 숫자 5개를 입력하세요" << endl;
    for (int i = 0; i < iCount; i++)
    {
        cin >> iArr[i];
    }

    switch (iCase)
    {
    case 1: //오름 123
    {
        Asc(iArr, iCount);
    }
    break;
    case 2: //내림 321
    {
        Desc(iArr, iCount);
    }
    break;
    default:
    {
        cout << "1. 오름차순, 2.내림차순 중에 선택하세요" << endl;
    }
    break;
    }
    return 0;
}

int sum(int arr[])
{
    int isum = 0;
    for (int i = 0; i < 5; i++)
    {
        isum += arr[i];
    }
    return isum;
}

double Avr(int isum)
{
    double davr = 0.0;
    davr = (double)isum / 5;
    return davr;
}



void Asc(int arr[], int iCount)
{
    for (int i = 0; i < iCount - 1; ++i)
    {
        for (int j = 0; j < iCount - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < iCount; ++i)
    {
        cout << arr[i] << " ";
    }
}

void Desc(int arr[], int iCount)
{
    for (int i = 0; i < iCount - 1; ++i)
    {
        for (int j = 0; j < iCount - 1 - i; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < iCount; ++i)
    {
        cout << arr[i] << " ";
    }
}