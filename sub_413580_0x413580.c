// 函数名称: sub_413580
// 虚拟地址: 0x413580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_413580(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x618)
    int32_t result = *(arg1 + 0x618)
    
    if (arg2 != result)
        int32_t xmm1_1 = *(arg1 + 0x61c)
        int32_t xmm0_1
        
        if (arg2 != *(arg1 + 0x620))
            xmm0_1 = (zx.o(0)).d
        else
            xmm0_1 = *(arg1 + 0x624)
        
        *(arg1 + 0x620) = result
        *(arg1 + 0x624) = xmm1_1
        *(arg1 + 0x618) = arg2
        *(arg1 + 0x61c) = xmm0_1
        int32_t edx
        result, edx = sub_46e120(*(arg1 + 0x628))
        int32_t ecx_1 = *(arg1 + 0x618)
        *(arg1 + 0x62c) = 0
        
        if (ecx_1 != 0xffffffff && (ecx_1 s< result || ecx_1 s> edx))
            int32_t edx_1 = edx - result
            
            if (ecx_1 s>= result)
                int32_t var_c_1 = ecx_1
                int32_t var_10 = ecx_1 - edx_1
                result = &var_10
            else
                int32_t var_18 = ecx_1
                int32_t var_14_1 = ecx_1 + edx_1
                result = &var_18
            
            int32_t ecx_2 = *(arg1 + 0x628)
            int32_t edi_1 = *result
            char const* const var_34
            int32_t var_30
            char const* const var_2c
            char* ecx_3
            
            if (ecx_2 == 0)
                var_2c = "DataArray<struct UI2>::DataArrayGet"
                var_30 = 0x6c
                ecx_3 = "id != DATAID_NULL"
            label_413729:
                var_34 = "c:\ax2017\engine\dataarray.h"
            label_413733:
                sub_44e4d0(result, &data_5559b1, ecx_3, var_34, var_30, var_2c)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t edx_2 = zx.d(ecx_2.w)
            
            if (edx_2 u< data_5c99a4)
                result = edx_2 * 0x1008 + data_5c99a0
            
            if (edx_2 u>= data_5c99a4 || *(result + 0x1004) != ecx_2)
                var_2c = "DataArray<struct UI2>::DataArrayGet"
                var_30 = 0x6d
                ecx_3 = "DataArrayTryToGet(id) != NULL"
                goto label_413729
            
            void* ebx_2 = edx_2 * 0x1008 + data_5c99a0
            void* eax_4 = sub_4627e0(ebx_2, 0)
            int32_t eax_6 = *(*(ebx_2 + 0x63c) * 0x208 + ebx_2 + 0x1a0)
            result = eax_6 - 1
            float xmm0_4
            float xmm1_4
            
            if (eax_6 != 1)
                int32_t result_1 = result
                result -= 1
                
                if (result_1 == 1)
                    xmm0_4 =
                        _mm_cvtepi32_ps(zx.o(neg.d(edi_1))) * (*(eax_4 + 0x6d4) f- *(eax_4 + 0x6cc))
                    xmm1_4 = *(ebx_2 + 0x668)
                    goto label_4136ff
                
                var_2c = "UI2TableGetRangeTarget"
                var_30 = 0x20ee
                var_34 = "c:\ax2017\engine\ui2.cpp"
                ecx_3 = "Halt"
                goto label_413733
            
            xmm0_4 = *(ebx_2 + 0x664)
            xmm1_4 = _mm_cvtepi32_ps(zx.o(neg.d(edi_1))) * (*(eax_4 + 0x6d8) f- *(eax_4 + 0x6d0))
        label_4136ff:
            *(arg1 + 0x630) = xmm0_4
            *(arg1 + 0x634) = xmm1_4
            *(arg1 + 0x62c) = 1
    
    return result
}
