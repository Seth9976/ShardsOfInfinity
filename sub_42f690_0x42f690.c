// 函数名称: sub_42f690
// 虚拟地址: 0x42f690
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_42f690(int128_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    void* edx
    ecx, edx = __alloca_probe(0x12494)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ecx_1 = *ecx
    char var_14 = 0
    void* var_e1a0 = edx
    int128_t var_c01c[0xc00]
    int128_t (* var_18)[0xc00] = &var_c01c
    int32_t* var_1c = arg2
    int32_t eax_3 = sub_42dff0(arg2, edx, ecx_1, var_1c, var_18, var_14)
    float xmm1 = -10000f
    float var_e19c = -10000f
    int32_t edi = 0
    int32_t esi = 0
    
    if (eax_3 s> 0)
        do
            void* var_14_1 = 0x2178
            float var_e1a4_1 = xmm1
            char var_12494[0x2178]
            char* eax_4 = sub_42dc00(&var_12494)
            char var_1031c[0x2178]
            var_1c = &var_1031c
            sub_51d5b0(var_1c, eax_4, var_14_1)
            void* var_14_2 = 0x2178
            char* var_18_3 = &var_1031c
            void var_e194
            var_1c = &var_e194
            sub_51d5b0(var_1c, var_18_3, var_14_2)
            int32_t* eax_7 = &var_c01c[esi * 3]
            sub_44c7d0(eax_7, arg2, &var_e194, eax_7, 2)
            xmm1 = var_e19c
            float xmm0_1 = (&var_1c)[arg2[1]]
            
            if (not(xmm0_1 <= xmm1))
                xmm1 = xmm0_1
                var_e19c = xmm1
            
            int32_t eax_10 = esi
            
            if (xmm0_1 <= var_e1a4_1)
                eax_10 = edi
            
            esi += 1
            edi = eax_10
        while (esi s< eax_3)
    
    int32_t ecx_5 = edi * 6
    *arg1 = *(&var_c01c + (ecx_5 << 3))
    var_c00c
    arg1[1] = *(&var_c00c + (ecx_5 << 3))
    var_bffc
    arg1[2] = *(&var_bffc + (ecx_5 << 3))
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return arg1
}
