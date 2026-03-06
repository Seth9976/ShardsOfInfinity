// 函数名称: sub_51adf0
// 虚拟地址: 0x51adf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_51adf0(int32_t* arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t* var_8 = arg1
    int32_t var_34
    char* result
    char* ecx
    
    if (eax == 1)
        uint128_t xmm0_1 = *arg1
        int32_t var_10_1 = 2
        uint128_t var_20 = xmm0_1
        void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
        int32_t eax_6 = sub_4dd730(xmm0_2, 2)
        int32_t edi_2 = var_20:8.d
        var_20:0xc.d = eax_6
        var_20.d = sub_45cd70(sub_4dd7f0(eax_6, edi_2, xmm0_2, 2))
        char* eax_9
        void* ecx_7
        eax_9, ecx_7 = sub_4ddd60(var_8, &var_20)
        int32_t esi_3 = var_20.d
        result = sub_50db00(eax_9, arg2, ecx_7, xmm0_2, edi_2, 4, esi_3, eax_6)
        
        if (result != 0)
            if (esi_3 == 0)
                return result
            
            return _aligned_free_base(esi_3)
        
        char const* const var_30_7 = "PngWriteImageSpecToBits"
        var_34 = 0x34
        ecx = "result"
    else
        char* eax_3
        
        if (eax == 2)
            eax_3 = 4
        label_51ae40:
            result = sub_50d6d0(eax_3, arg1[3], *arg1, arg1[1], arg1[2], eax_3, &var_8)
            
            if (result != 0)
                int32_t* esi_1 = var_8
                char* eax_4 = sub_45cd70(esi_1)
                arg2[1] = eax_4
                *arg2 = esi_1
                sub_51d5b0(eax_4, result, esi_1)
                return _free(result)
            
            char const* const var_30_4 = "PngWriteImageSpecToBits"
            var_34 = 0x42
            ecx = "result"
        else
            result = eax - 5
            
            if (eax == 5)
                eax_3 = 3
                goto label_51ae40
            
            char const* const var_30 = "PngWriteImageSpecToBits"
            var_34 = 0x3e
            ecx = "Halt"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\stb_image_resize.cpp", var_34, 
        "PngWriteImageSpecToBits")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
