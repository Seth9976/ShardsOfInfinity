// 函数名称: sub_462b10
// 虚拟地址: 0x462b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_462b10(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int128_t* arg5, int32_t* arg6, int32_t arg7, uint32_t (* arg8)[0x4], char arg9))[0x4]
{
    // 第一条实际指令: void var_d8
    void var_d8
    int32_t eax_1 = __security_cookie ^ &var_d8
    int32_t* edx = arg4
    int32_t* var_cc = edx
    uint32_t edi = *arg2
    char var_cd = 0
    char const* const var_ec_1
    int32_t var_e8
    char const* const var_e4
    uint32_t (* result)[0x4]
    char* ecx_1
    
    if (edi != 0)
    label_462b7e:
        result = zx.d(edi.w)
        void* esi_2
        
        if (result u< data_5c99a4)
            esi_2 = result * 0x1008 + data_5c99a0
        
        if (result u>= data_5c99a4 || *(esi_2 + 0x1004) != edi)
            var_e4 = "DataArray<struct UI2>::DataArrayGet"
            var_e8 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
            var_ec_1 = "c:\ax2017\engine\dataarray.h"
        else
            *(esi_2 + 0x6a4) = edx
            *(esi_2 + 0x6a8) = 0xffffffff
            *(esi_2 + 0x6cc) = *arg5
            int128_t var_c0
            int128_t* eax_5
            int32_t edx_1
            eax_5, edx_1 = sub_45f080(&var_c0, edx, edx, &var_c0)
            *(*(esi_2 + 0x63c) * 0x208 + esi_2 + 0x14) = *eax_5
            void var_98
            int128_t* eax_8
            int32_t edx_2
            eax_8, edx_2 = sub_45f100(&var_98, edx_1, var_cc, &var_98)
            int128_t var_30 = *eax_8
            void var_a8
            var_c0 = *sub_45f080(&var_a8, edx_2, var_cc, &var_a8)
            float var_88[0x16]
            float* eax_12
            int32_t edx_4
            eax_12, edx_4 = sub_48a200(&var_88, arg6, arg5, &var_88, &var_c0, &var_30)
            int128_t xmm1_1 = *(eax_12 + 0x10)
            int128_t xmm2_1 = *(eax_12 + 0x20)
            int128_t xmm3_1 = *(eax_12 + 0x30)
            int128_t xmm4_1 = *(eax_12 + 0x40)
            *(esi_2 + 0x6dc) = *eax_12
            *(esi_2 + 0x6ec) = xmm1_1
            *(esi_2 + 0x6fc) = xmm2_1
            *(esi_2 + 0x70c) = xmm3_1
            *(esi_2 + 0x71c) = xmm4_1
            *(esi_2 + 0x72c) = arg7
            char* const ecx_7 = &data_5559b1
            int128_t xmm0_6 = *sub_45f080(&var_a8, edx_4, var_cc, &var_a8)
            int128_t xmm1_2 = *arg5
            *(esi_2 + 0x730) = xmm0_6
            *(esi_2 + 0x740) = xmm1_2
            char* eax_16 = *(esi_2 + 0x698)
            
            if (eax_16 != 0)
                ecx_7 = eax_16
            
            if (ecx_7 != "<root>")
                sub_44f100(eax_16, 6, esi_2 + 0x698, 0)
                __builtin_strncpy(*(esi_2 + 0x698), "<root>", 7)
            
            result = arg8
            *(esi_2 + 0x750) = 0x3f800000
            
            if (arg7 != *(esi_2 + 0x78c) || result != *(esi_2 + 0x790))
                *(esi_2 + 0x64c) = 0
                *(esi_2 + 0x650) = 0
            
            *(esi_2 + 0x78c) = arg7
            *(esi_2 + 0x790) = result
            
            if (result != 0xffffffff)
                result.b = var_cd
                *(*(esi_2 + 0x63c) * 0x208 + esi_2 + 0xc8) = zx.d(arg9)
                *(esi_2 + 8) = 0
                @__security_check_cookie@4(eax_1 ^ &var_d8)
                return result
            
            var_e4 = "UI2Begin"
            var_e8 = 0xe08
            var_ec_1 = "c:\ax2017\engine\ui2.cpp"
            ecx_1 = "root.worldUISublayer != -1"
    else
        result = sub_45e790(0)
        edx = var_cc
        var_cd = 1
        edi = (*result)[0x401]
        *result = arg3
        *arg2 = edi
        
        if (edi != 0)
            goto label_462b7e
        
        var_e4 = "DataArray<struct UI2>::DataArrayGet"
        var_e8 = 0x6c
        ecx_1 = "id != DATAID_NULL"
        var_ec_1 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_ec_1, var_e8, var_e4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
