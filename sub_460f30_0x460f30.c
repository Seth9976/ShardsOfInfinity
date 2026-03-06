// 函数名称: sub_460f30
// 虚拟地址: 0x460f30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_460f30(int32_t arg1 @ esi, int32_t* arg2, char* arg3, int32_t arg4, char arg5, float arg6)
{
    // 第一条实际指令: void* ecx
    void* ecx
    uint32_t* edx
    ecx, edx = __alloca_probe(0x1038)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    uint32_t result = *arg2
    int32_t var_1018 = 0
    int32_t var_18_1
    char const* const var_14_1
    char* ecx_1
    
    if (result s< 0x3e8)
        int32_t edx_1 = arg4
        int32_t i = 0
        int32_t var_1010[0x200]
        int32_t var_810[0x1f8]
        
        if (result s> 0)
            float xmm5_1 = arg6
            
            do
                int32_t ecx_2 = arg2[1]
                int32_t eax_3 = *(ecx_2 + (i << 3))
                
                if (eax_3 == 0x71)
                    result = *(ecx_2 + (i << 3) + 4)
                    float var_1038_1 = (*(result + 4) f- edx[2]) * xmm5_1 f+ edx[2]
                    float var_1034_1 = (*(result + 8) f- edx[3]) * xmm5_1 f+ edx[3]
                    float var_1030_1 = (*(result + 0xc) f- edx[4]) * xmm5_1 f+ edx[4]
                    *(edx + 4) = ((*result f- edx[1]) * xmm5_1 f+ edx[1]).o
                else if (eax_3 == 0x79)
                    result = *(ecx_2 + (i << 3) + 4)
                    float xmm0_4 = (*result f- edx[1]) * xmm5_1 f+ edx[1]
                    float var_1028_1 = (*(result + 4) f- edx[2]) * xmm5_1 f+ edx[2]
                    float var_1024_1 = (*(result + 8) f- edx[3]) * xmm5_1 f+ edx[3]
                    float xmm0_16 = (*(result + 0xc) f- edx[4]) * xmm5_1 f+ edx[4]
                    edx[0x2e] = 1
                    float var_1020_1 = xmm0_16
                    *(edx + 0xbc) = xmm0_4.o
                else
                    result = sub_45f550(&var_1018, i, arg2, edx_1, ecx, arg3, &var_1018, &var_1010, 
                        &var_810, edx, arg5)
                    xmm5_1 = arg6
                    edx_1 = arg4
                
                i += 1
            while (i s< *arg2)
        
        int32_t ebx_1 = var_1018
        int32_t esi = 0
        
        if (ebx_1 s<= 0)
        label_461156:
            @__security_check_cookie@4(arg1 ^ &__saved_ebp)
            return result
        
        while (true)
            float xmm0_35 = var_810[esi]
            xmm0_35 - 1f
            result:1.b = (xmm0_35 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_35, 1f) ? 1 : 0) << 2
                | (xmm0_35 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                var_14_1 = "UI2MergeAttribMapFractional"
                var_18_1 = 0xb96
                ecx_1 = "Halt"
                break
            
            int32_t var_14_3 = 0
            result = sub_4611a0(var_1010[esi], arg3, edx_1.b)
            edx_1 = arg4
            esi += 1
            
            if (esi s>= ebx_1)
                goto label_461156
    else
        var_14_1 = "UI2MergeAttribMapFractional"
        var_18_1 = 0xb75
        ecx_1 = "attribMap.attributeCount < 1000"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\ui2.cpp", var_18_1, var_14_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
