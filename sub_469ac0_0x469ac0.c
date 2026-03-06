// 函数名称: sub_469ac0
// 虚拟地址: 0x469ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_469ac0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t xmm1 = *arg2
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t eax
    char* ecx
    
    if (not(xmm1 f>= -100000f))
        var_18 = "UI2SetTransform"
        var_1c = 0x19cc
        var_20 = "c:\ax2017\engine\ui2.cpp"
        ecx = "t.offset.x >= -100000.0f"
    else if (100000f f>= xmm1)
        if (arg1 != 0)
            uint32_t edx = zx.d(arg1.w)
            
            if (edx u< data_5c99a4)
                int32_t esi_1 = data_5c99a0
                eax = edx * 0x1008
                
                if (*(eax + esi_1 + 0x1004) == arg1)
                    int32_t* edx_1 = arg2
                    void* eax_2 = edx * 0x1008 + esi_1
                    int32_t i_1 = 0x50
                    int32_t* ecx_1 = eax_2 + 0x6dc
                    int32_t result
                    int32_t i
                    
                    do
                        result = *ecx_1
                        
                        if (result != *edx_1)
                            *(eax_2 + 0x6dc) = *arg2
                            *(eax_2 + 0x6ec) = *(arg2 + 0x10)
                            *(eax_2 + 0x6fc) = *(arg2 + 0x20)
                            *(eax_2 + 0x70c) = *(arg2 + 0x30)
                            *(eax_2 + 0x71c) = *(arg2 + 0x40)
                            *(eax_2 + 0x72c) = arg2[0x14]
                            return sub_4660e0(eax_2)
                        
                        ecx_1 = &ecx_1[1]
                        edx_1 = &edx_1[1]
                        i = i_1
                        i_1 -= 4
                    while (i u>= 4)
                    return result
            
            var_18 = "DataArray<struct UI2>::DataArrayGet"
            var_1c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
        else
            var_18 = "DataArray<struct UI2>::DataArrayGet"
            var_1c = 0x6c
            ecx = "id != DATAID_NULL"
        
        var_20 = "c:\ax2017\engine\dataarray.h"
    else
        var_18 = "UI2SetTransform"
        var_1c = 0x19cd
        var_20 = "c:\ax2017\engine\ui2.cpp"
        ecx = "t.offset.x <= 100000.0f"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
