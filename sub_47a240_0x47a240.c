// 函数名称: sub_47a240
// 虚拟地址: 0x47a240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_47a240(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* edx
    int32_t eax = sub_47a160(ecx, edx)
    int32_t edx_1 = eax
    
    if (edx_1 == 0)
        return eax
    
    uint32_t ecx_2 = zx.d(edx_1.w)
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx_5
    
    if (ecx_2 u>= data_5c99a4)
    label_47a2f7:
        var_14 = "DataArray<struct UI2>::DataArrayGet"
        var_18 = 0x6d
        ecx_5 = "DataArrayTryToGet(id) != NULL"
        var_1c = "c:\ax2017\engine\dataarray.h"
    else
        int32_t esi_1 = data_5c99a0
        eax = ecx_2 * 0x1008
        
        if (*(eax + esi_1 + 0x1004) != edx_1)
            goto label_47a2f7
        
        void* ecx_4 = ecx_2 * 0x1008 + esi_1
        
        if (arg1 s>= 0)
            if (arg1 s>= *(ecx_4 + 0x7f4))
                return 0
            
            int32_t ecx_6 = *(ecx_4 + (arg1 << 2) + 0x7f8)
            
            if (ecx_6 == 0)
                return ecx_6
            
            uint32_t edi_1 = zx.d(ecx_6.w)
            
            if (edi_1 u>= data_5c99a4)
                goto label_47a2f7
            
            eax = edi_1 * 0x1008
            
            if (*(eax + esi_1 + 0x1004) != ecx_6)
                goto label_47a2f7
            
            eax = edi_1 * 0x1008
            
            if (*(eax + esi_1 + 4) == arg1)
                return ecx_6
            
            var_14 = "UI2GetHandle"
            var_18 = 0x360b
            var_1c = "c:\ax2017\engine\ui2.cpp"
            ecx_5 = "child.idx == idx"
        else
            var_14 = "UI2GetHandle"
            var_18 = 0x3601
            var_1c = "c:\ax2017\engine\ui2.cpp"
            ecx_5 = "idx >= 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx_5, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
