// 函数名称: sub_476520
// 虚拟地址: 0x476520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_476520(void* arg1)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x784)
    void* edi = *(arg1 + 0x784)
    
    if (edi != 0)
        char const* const var_18
        int32_t var_14
        char const* const var_10
        int32_t eax
        char* ecx
        
        if (*(arg1 + 0x788) != 0)
            var_10 = "UI2GetNext"
            var_14 = 0x2e98
            var_18 = "c:\ax2017\engine\ui2.cpp"
            ecx = "target.clone == false"
        label_476629:
            sub_44e4d0(eax, &data_5559b1, ecx, var_18, var_14, var_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t edx_1 = *(edi + 0x7f4)
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            void* eax_1 = edi + 0x7f8
            
            while (*eax_1 != *(arg1 + 0x1004))
                ecx_1 += 1
                eax_1 += 4
                
                if (ecx_1 s>= edx_1)
                    return 0
            
            eax = edx_1 - 1
            
            if (ecx_1 s< eax)
                int32_t ecx_2 = *(edi + (ecx_1 << 2) + 0x7fc)
                
                if (ecx_2 != 0)
                    uint32_t edx_2 = zx.d(ecx_2.w)
                    int32_t edi_1
                    
                    if (edx_2 u< data_5c99a4)
                        edi_1 = data_5c99a0
                        eax = edx_2 * 0x1008
                    
                    if (edx_2 u>= data_5c99a4 || *(eax + edi_1 + 0x1004) != ecx_2)
                        var_10 = "DataArray<struct UI2>::DataArrayGet"
                        var_14 = 0x6d
                        ecx = "DataArrayTryToGet(id) != NULL"
                        var_18 = "c:\ax2017\engine\dataarray.h"
                    else
                        void* result = edx_2 * 0x1008 + edi_1
                        
                        if (*(result + 0x788) == 0)
                            eax = *(result + 0x6a4)
                            
                            if (eax == *(arg1 + 0x6a4))
                                return result
                            
                            var_10 = "UI2GetNext"
                            var_14 = 0x2ea2
                            var_18 = "c:\ax2017\engine\ui2.cpp"
                            ecx = "next.sourceAsset == target.sourceAsset"
                        else
                            var_10 = "UI2GetNext"
                            var_14 = 0x2ea1
                            var_18 = "c:\ax2017\engine\ui2.cpp"
                            ecx = "next.clone == false"
                else
                    var_10 = "DataArray<struct UI2>::DataArrayGet"
                    var_14 = 0x6c
                    ecx = "id != DATAID_NULL"
                    var_18 = "c:\ax2017\engine\dataarray.h"
                
                goto label_476629
    
    return 0
}
