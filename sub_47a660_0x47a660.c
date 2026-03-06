// 函数名称: sub_47a660
// 虚拟地址: 0x47a660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_47a660(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax
    char* edx
    int32_t eax_1 = sub_46e020(eax, edx, ecx, 0xffffffff)
    int32_t edx_1 = eax_1
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx_1
    
    if (edx_1 != 0)
        uint32_t ecx_2 = zx.d(edx_1.w)
        
        if (ecx_2 u>= data_5c99a4)
        label_47a76e:
            var_14 = "DataArray<struct UI2>::DataArrayGet"
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_18 = 0x6d
            var_1c = "c:\ax2017\engine\dataarray.h"
        else
            int32_t esi_1 = data_5c99a0
            eax_1 = ecx_2 * 0x1008
            
            if (*(eax_1 + esi_1 + 0x1004) != edx_1)
                goto label_47a76e
            
            void* edx_3 = ecx_2 * 0x1008 + esi_1
            int32_t ebx_1 = *(edx_3 + 0x7f4)
            
            if (ebx_1 != 0)
                int32_t ecx_3 = 0
                
                if (arg2 s>= 0)
                    ecx_3 = arg2
                
                eax_1 = ebx_1 - 1
                
                if (ecx_3 s< ebx_1)
                    eax_1 = ecx_3
                
                int32_t edx_4 = *(edx_3 + (eax_1 << 2) + 0x7f8)
                
                if (edx_4 != 0)
                    uint32_t ecx_4 = zx.d(edx_4.w)
                    
                    if (ecx_4 u< data_5c99a4)
                        eax_1 = ecx_4 * 0x1008
                        
                        if (*(eax_1 + esi_1 + 0x1004) == edx_4)
                            void* ecx_6 = ecx_4 * 0x1008 + esi_1
                            *arg1 = *(ecx_6 + 0x6dc)
                            arg1[1] = *(ecx_6 + 0x6ec)
                            arg1[2] = *(ecx_6 + 0x6fc)
                            arg1[3] = *(ecx_6 + 0x70c)
                            int32_t ecx_7 = *(ecx_6 + 0x72c)
                            arg1[4] = *(ecx_6 + 0x71c)
                            arg1[5].d = ecx_7
                            return arg1
                    
                    goto label_47a76e
                
                var_14 = "DataArray<struct UI2>::DataArrayGet"
                var_18 = 0x6c
                ecx_1 = "id != DATAID_NULL"
                var_1c = "c:\ax2017\engine\dataarray.h"
            else
                var_14 = "UI2GetTableTransform"
                var_18 = 0x36f2
                var_1c = "c:\ax2017\engine\ui2.cpp"
                ecx_1 = "table.numChildren != 0"
    else
        var_14 = "DataArray<struct UI2>::DataArrayGet"
        var_18 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_1c = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
