// 函数名称: sub_4b8f40
// 虚拟地址: 0x4b8f40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4b8f40(void* arg1, void** arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* edi = data_cdf428
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t* i_1
    char* ecx
    
    if (edi != 0)
        void** edi_1 = *(edi + 4)
        
        if (arg2[8] == 2)
            *(arg1 + arg2[0xa] * 0xc + 0x20) = 0
            i_1 = arg2[0xa]
            *(arg1 + (*(arg1 + 0x88) << 2) + 0x8c) = i_1
            *(arg1 + 0x88) += 1
        
        int32_t* i = edi_1[1]
        
        while (i != 0)
            void* edx_1 = &i[1]
            i_1 = i
            i = *i
            
            if (arg2 u>= edx_1)
                i_1 = &i_1[1 + edi_1[2] * 0x2d]
                
                if (arg2 u< i_1)
                    int32_t eax_5
                    int32_t edx_2
                    edx_2:eax_5 = sx.q(arg2 - edx_1)
                    i_1 = divs.dp.d(edx_2:eax_5, 0xb4)
                    
                    if (mods.dp.d(edx_2:eax_5, 0xb4) == 0)
                        void* result = *edi_1
                        edi_1[3] -= 1
                        *arg2 = result
                        *edi_1 = arg2
                        return result
        
        var_18 = "XTypedAllocator<struct AnimSet>::Free"
        var_1c = 0x10c
        var_20 = "c:\ax2017\engine\xalloc.h"
        ecx = "IsPointerFromAllocator(pItem)"
    else
        var_18 = "GetGameData"
        var_1c = 0x45
        var_20 = "c:\ax2017\engine\game.h"
        ecx = "gpGameData"
    
    sub_44e4d0(i_1, &data_5559b1, ecx, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
