// 函数名称: sub_4d3d60
// 虚拟地址: 0x4d3d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4d3d60(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int64_t var_54
    BOOL eax_4
    int32_t edx
    eax_4, edx = sub_44edc0(&var_54)
    int32_t edi
    
    if (eax_4.b != 0)
        int64_t xmm0_1 = 0
        float ebx_1 = 0f
        var_54 = xmm0_1
        float var_c_1 = 1f
        float var_48_1 = 0f
        int32_t var_34_1 = 0
        int64_t var_14_1 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        void var_84
        int128_t var_20
        int64_t* eax_6 = sub_452d30(&var_84, edx, &var_20:0xc, &var_84)
        int32_t* i = 0x70
        edi = 0
        int64_t xmm0_3 = *eax_6
        int32_t eax_7 = eax_6[1].d
        var_20 = xmm0_1.o
        float var_4c_1 = 0f
        
        do
            int32_t ecx_2 = *(i + data_ce24d4)
            
            if (ecx_2 != 0)
                int32_t* eax_9 = sub_4b6ca0(ecx_2)
                float var_58
                char eax_11 = sub_4b69a0(&var_58, &var_20, eax_9, 1, &var_58)
                float xmm0_6
                
                if (eax_11 != 0)
                    xmm0_6 = var_58
                
                if (eax_11 != 0 && (edi == 0 || not(var_4c_1 <= xmm0_6)))
                    edi = eax_9[0x1a]
                    var_4c_1 = xmm0_6
                    ebx_1 = var_20:8.d + xmm0_6 * var_c_1
                    var_54 = _mm_unpacklo_ps(var_20.d + xmm0_6 f* xmm0_3.d, 
                        var_20:4.d + xmm0_6 f* xmm0_3:4.d)
                    var_48_1 = ebx_1
                else
                    ebx_1 = var_48_1
            
            i = &i[1]
        while (i s< 0x7c)
        
        if (edi != 0)
        label_4d3ef6:
            
            if (sub_4d3290(sub_4b6ca0(edi)).b == 0)
                edi = 0
            else if (arg1 != 0xfffffff8)
                *(arg1 + 8) = var_54
                arg1[4] = ebx_1
        else
            int128_t var_44 = zx.o(0)
            int64_t var_3c_1
            var_3c_1:4.b = 1
            var_34_1.o = zx.o(0)
            eax_4 = sub_4b6ae0(&var_20, &var_44)
            
            if (eax_4.b != 0)
                edi = eax_7
                ebx_1 = xmm0_3:4.d
                var_54 = var_34_1.q
            
            if (eax_4.b != 0 && edi != 0)
                goto label_4d3ef6
            
            edi = 0
    else
        edi = 0
    
    arg1[1] = edi
    
    if (edi != 0)
        *arg1 = 1
        eax_4.b = 1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    sub_44edc0(&var_54)
    BOOL eax_13
    eax_13.b = 0
    *arg1 = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_13
}
