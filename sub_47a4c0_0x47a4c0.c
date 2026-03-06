// 函数名称: sub_47a4c0
// 虚拟地址: 0x47a4c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float*sub_47a4c0(float* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char const* const var_84
    char const* const var_84
    int32_t var_80
    char const* const var_7c
    void* eax
    char* ecx_1
    
    if (arg2 s< 0)
        var_7c = "UI2GetTransformSized"
        var_80 = 0x36c3
        var_84 = "c:\ax2017\engine\ui2.cpp"
        ecx_1 = "idx >= 0"
    else if (arg2 s< arg3)
        int32_t ecx
        char* edx
        eax = sub_46e020(eax, edx, ecx, 0xffffffff)
        void* ecx_2 = eax
        
        if (ecx_2 != 0)
            uint32_t edx_1 = zx.d(ecx_2.w)
            
            if (edx_1 u< data_5c99a4)
                eax = edx_1 * 0x1008 + data_5c99a0
                
                if (*(eax + 0x1004) == ecx_2)
                    int32_t var_68 = arg3
                    int32_t var_64 = 1
                    void* esi_1 = edx_1 * 0x1008 + data_5c99a0
                    int32_t ecx_3 = *(esi_1 + 0x63c) * 0x208
                    
                    if (*(ecx_3 + esi_1 + 0x180) s> *(ecx_3 + esi_1 + 0x17c))
                        var_68 = 1
                        int32_t var_64_1 = arg3
                    
                    int32_t var_7c_1 = 0
                    void var_60
                    int128_t* eax_4 = sub_463950(&var_60, *(esi_1 + 0x784) + 0x6dc, esi_1, &var_60, 
                        *(ecx_3 + esi_1 + 0x198), arg2, &var_68, nullptr, *(esi_1 + 0x77c), 
                        *(esi_1 + 0x780), ecx_3.b)
                    *arg1 = *eax_4
                    *(arg1 + 0x10) = eax_4[1]
                    *(arg1 + 0x20) = eax_4[2]
                    *(arg1 + 0x30) = eax_4[3]
                    int32_t eax_5 = eax_4[5].d
                    *(arg1 + 0x40) = eax_4[4]
                    arg1[0x14] = eax_5
                    *arg1 = *arg1 f+ *(esi_1 + 0x664)
                    arg1[1] = *(esi_1 + 0x668) + arg1[1]
                    return arg1
            
            var_7c = "DataArray<struct UI2>::DataArrayGet"
            var_80 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            var_7c = "DataArray<struct UI2>::DataArrayGet"
            var_80 = 0x6c
            ecx_1 = "id != DATAID_NULL"
        
        var_84 = "c:\ax2017\engine\dataarray.h"
    else
        var_7c = "UI2GetTransformSized"
        var_80 = 0x36c4
        var_84 = "c:\ax2017\engine\ui2.cpp"
        ecx_1 = "idx < count"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_84, var_80, var_7c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
