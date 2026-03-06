// 函数名称: sub_464220
// 虚拟地址: 0x464220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_464220(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* ebx = arg3
    void* ebx = arg3
    arg2[0x1a9] = *(ebx + 0x6a4)
    arg2[0x1aa] = *(ebx + 0x6a8)
    arg2[0x193] = 0
    arg2[0x194] = 0
    int32_t result = *(ebx + 0x7f4)
    
    if (arg2[0x1fd] s> result)
        arg2[0x1fd] = result
        sub_462780(arg2)
        result = *(ebx + 0x7f4)
    
    void* ecx_2 = nullptr
    arg3 = nullptr
    
    if (result s> 0)
        do
            void* eax_2 = sub_45ed30(arg2, ecx_2)
            void* eax_3 = sub_4627e0(ebx, arg3)
            *(eax_2 + 0x754) = arg2[0x1d5]
            *(eax_2 + 0x788) = 1
            sub_464220(eax_3, arg4, arg5, 1)
            result = *(ebx + 0x7f4)
            ecx_2 = arg3 + 1
            arg3 = ecx_2
        while (ecx_2 s< result)
    
    arg2[0x1fd] = result
    
    if (arg2[0x3fe] s>= result)
        return result
    
    sub_44e4d0(result, &data_5559b1, "item.numTotalChildren >= item.numChildren", 
        "c:\ax2017\engine\ui2.cpp", 0x1112, "UI2MergeRec")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
