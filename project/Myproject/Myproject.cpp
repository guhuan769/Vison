// Myproject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

#include "TemplateUse.h"
#include "TemplateMatching.h"

#include "FunctionTemplateMultiTypeDefinition.h"
#include "FunctionTemplateMultiTypeDefinitionCase2.h"
#include "FunctionTemplateMultiTypeDefinitionComprehensiveCase.h"


int main()
{
#pragma region 040Opencv之C++进阶内容(2)_3 C++的函数模板详解-2

    //040Opencv之C++进阶内容(2)_3、C++的函数模板详解-2
    {
        /*  TemplateUse tu;
          tu.Show();*/
    }


    {
        /*TemplateMatching tm;
        tm.Show();*/
    }

    /* 
    * 注意
    * 在我们殡仪的时候，编译器内部会自动生成这些模板函数，
    * 然后再进行调用，当然，这些都是编译器内部生成的，我们
    * 可以不用去了解太深，我们指定这个概念就好了。
    */

    // 函数模板多类型定义

    // 案例1
    {
        /*FunctionTemplateMultiTypeDefinition ftmtd;
        ftmtd.Show();*/

        /*
        * 案例1编译肯定报错的，因为定义了T2 没有使用导致T2没有办法推断
        */
    }

    //案例2
    {
       /* FunctionTemplateMultiTypeDefinitionCase2  ftmtdc2;
        ftmtdc2.Show();*/
        /*
       * Max<int,int>(a,b); // 显式类型调用
       * Max(a,b); // 自动数据类型推导
       */
    }

    //综合案例  FunctionTemplateMultiTypeDefinitionComprehensiveCase
    // son
    {
        FunctionTemplateMultiTypeDefinitionComprehensiveCase ftmtdcc;
        ftmtdcc.Show();
    }

#pragma endregion




    return 0;
}

