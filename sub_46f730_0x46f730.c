// 函数名称: sub_46f730
// 虚拟地址: 0x46f730
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_46f730(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t ecx = data_5c99d8
    struct _EXCEPTION_REGISTRATION_RECORD** result
    
    if (ecx != 0 && ecx != arg1)
        arg2.b = 0
        result = sub_46f4b0(ecx, arg2.b)
    
    data_5c99d8 = arg1
    char const* const var_2c
    int32_t var_28
    char const* const var_24_1
    char* ecx_1
    
    if (arg1 != 0)
        uint32_t ecx_2 = zx.d(arg1.w)
        int32_t edx
        
        if (ecx_2 u< data_5c99a4)
            edx = data_5c99a0
            result = ecx_2 * 0x1008
        
        if (ecx_2 u>= data_5c99a4 || *(result + edx + 0x1004) != arg1)
            var_24_1 = "DataArray<struct UI2>::DataArrayGet"
            var_28 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_2c = "c:\ax2017\engine\dataarray.h"
        else
            void* edi_2 = ecx_2 * 0x1008 + edx
            
            if (*(edi_2 + 0x69c) != 3)
                return result
            
            result = *(edi_2 + 0x63c) * 0x208
            
            if (*(result + edi_2 + 0x1d8) == 0)
                return result
            
            if (*(edi_2 + 0x7e9) == 0)
                int32_t eax
                int32_t edx_1
                eax, edx_1 = sub_41b6f0(edi_2 + 0x6cc)
                int32_t ecx_4 = *(edi_2 + 0x63c) * 0x208
                *(edi_2 + 0x7a8) = eax
                *(edi_2 + 0x7ac) = edx_1
                float xmm1_2 = *(edi_2 + 0x6d4) f- *(edi_2 + 0x6cc)
                *(edi_2 + 0x7b4) = *(edi_2 + 0x6d8) f- *(edi_2 + 0x6d0)
                float xmm0_5 = *(edi_2 + 0x6e8)
                *(edi_2 + 0x7b0) = xmm1_2
                float xmm0_6 = *(ecx_4 + edi_2 + 0x1c8)
                float xmm1_5 = *(ecx_4 + edi_2 + 0x1b4) * xmm0_5 * xmm0_6
                *(edi_2 + 0x7b8) = xmm0_5 f* *(ecx_4 + edi_2 + 0x1b0) * xmm0_6
                *(edi_2 + 0x7bc) = xmm1_5
                *(edi_2 + 0x7c8) = *(ecx_4 + edi_2 + 0x1ac)
                sub_44f510(edi_2 + 0x798, edi_2 + 0x214 + ecx_4)
                *(edi_2 + 0x7a4) = 0
                char* eax_4 = *(edi_2 + 0x798)
                int32_t eax_6
                
                if (eax_4 == 0 || *eax_4 == 0)
                    eax_6 = 0
                else
                    eax_6 = *(sub_44f000(edi_2 + 0x798) + 8)
                
                *(edi_2 + 0x79c) = eax_6
                *(edi_2 + 0x7e9) = 1
                result = sub_469800(eax_6, &data_5c7b18, edi_2, 0x3f800000, 0xfffffc18)
                
                if (ebx != 0)
                    return sub_4c50b0(edi_2 + 0x798, 1, ebx)
                
                return result
            
            var_24_1 = "UI2SetFocus"
            var_28 = 0x23c0
            var_2c = "c:\ax2017\engine\ui2.cpp"
            ecx_1 = "el.textBox.mHasFocus == false"
    else
        var_24_1 = "DataArray<struct UI2>::DataArrayGet"
        var_28 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_2c = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_2c, var_28, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
