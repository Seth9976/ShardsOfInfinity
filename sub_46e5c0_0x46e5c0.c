// 函数名称: sub_46e5c0
// 虚拟地址: 0x46e5c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46e5c0(int32_t arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_46e120(sub_46e020(eax, "layersTable", data_5cda18, 0xffffffff))
    int32_t var_10 = eax_2
    char const* const var_2c
    int32_t var_28
    char const* const var_24
    char* ecx_2
    
    if (arg1 == 0)
        var_24 = "DataArray<struct UI2>::DataArrayGet"
        var_28 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    label_46e7e9:
        var_2c = "c:\ax2017\engine\dataarray.h"
    label_46e7f3:
        sub_44e4d0(eax_2, &data_5559b1, ecx_2, var_2c, var_28, var_24)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    uint32_t ecx_3 = zx.d(arg1.w)
    
    if (ecx_3 u< data_5c99a4)
        int32_t edx_1 = data_5c99a0
        eax_2 = ecx_3 * 0x1008
        
        if (*(eax_2 + edx_1 + 0x1004) == arg1)
            char* i_1 = ecx_3 * 0x1008 + edx_1
            
            if (*(sub_46e480(i_1) + 0xc) == 2)
                char* i = i_1
                
                if (i_1 != 0)
                    do
                        if (i[0xc] != 0)
                            i[0xc] = 0
                            void* eax_4 = sub_46b120(i, 0x7f)
                            sub_4b8610(eax_4, eax_4, &data_5b1d6c, 0x7f, nullptr)
                            sub_46e560(i)
                        
                        i = *(i + 0x784)
                    while (i != 0)
                
                sub_46a100()
            
            eax_2 = sub_46e480(i_1)
            int32_t edi_2 = *(eax_2 + 8)
            
            if (edi_2 == 0xffffffff)
                var_24 = "UI2EditorSyncSelection"
                var_28 = 0x21a6
                var_2c = "c:\ax2017\engine\ui2.cpp"
                ecx_2 = "display.displayIndex != -1"
                goto label_46e7f3
            
            if (edi_2 s>= var_10 && edi_2 s<= edx)
                return var_10
            
            int32_t ecx_8 = data_5cd9f4
            int32_t ebx_1 = edx - var_10
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = sx.q(ebx_1)
            int32_t eax_8 = (eax_6 - edx_3) s>> 1
            int32_t esi_2 = edi_2 - eax_8
            int32_t edx_4 = ebx_1 - eax_8 + edi_2
            
            if (edi_2 - eax_8 s< 0)
                eax_8 -= edi_2
                esi_2 += eax_8
            else if (edx_4 s> ecx_8)
                int32_t ecx_9 = ecx_8 - edx_4
                eax_8 = 0
                int32_t temp1_1 = esi_2
                esi_2 += ecx_9
                
                if (temp1_1 + ecx_9 s< 0)
                    esi_2 = 0
            
            eax_2 = sub_46e020(eax_8, "layersTable", data_5cda18, 0xffffffff)
            int32_t ecx_11 = eax_2
            
            if (ecx_11 == 0)
                var_24 = "DataArray<struct UI2>::DataArrayGet"
                var_28 = 0x6c
                ecx_2 = "id != DATAID_NULL"
                goto label_46e7e9
            
            uint32_t edx_5 = zx.d(ecx_11.w)
            
            if (edx_5 u< data_5c99a4)
                int32_t ebx_3 = data_5c99a0
                eax_2 = edx_5 * 0x1008
                
                if (*(eax_2 + ebx_3 + 0x1004) == ecx_11)
                    void* edi_4 = edx_5 * 0x1008 + ebx_3
                    void* eax_9 = sub_4627e0(edi_4, 0)
                    int32_t eax_11 = *(*(edi_4 + 0x63c) * 0x208 + edi_4 + 0x1a0)
                    
                    if (eax_11 == 1)
                        *(edi_4 + 0x668) =
                            _mm_cvtepi32_ps(zx.o(neg.d(esi_2))) * (*(eax_9 + 0x6d8) f- *(eax_9 + 0x6d0))
                        return eax_11 - 1
                    
                    eax_2 = eax_11 - 2
                    
                    if (eax_11 == 2)
                        *(edi_4 + 0x664) =
                            _mm_cvtepi32_ps(zx.o(neg.d(esi_2))) * (*(eax_9 + 0x6d4) f- *(eax_9 + 0x6cc))
                        return eax_2
                    
                    var_24 = "UI2TableSetRange"
                    var_28 = 0x20dc
                    var_2c = "c:\ax2017\engine\ui2.cpp"
                    ecx_2 = "Halt"
                    goto label_46e7f3
    
    var_24 = "DataArray<struct UI2>::DataArrayGet"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
    var_28 = 0x6d
    goto label_46e7e9
}
