// 函数名称: sub_4c97d0
// 虚拟地址: 0x4c97d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c97d0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint128_t var_58
    uint128_t xmm0 = *sub_4c7040(&var_58)
    var_58 = xmm0
    int32_t xmm0_1 = _mm_bsrli_si128(xmm0, 4)
    int128_t var_44
    
    if (arg2 s< xmm0_1 - 0x14)
        var_58:8.d = arg1
        var_58:0xc.d = xmm0_1
        ClientToScreen(data_ce1c90, &var_58:8)
        SetCursorPos(var_58:8.d, var_58:0xc.d)
        int32_t eax_4 = 0
        float xmm1_2 = data_ce1ca0 + 0.5f
        __builtin_memcpy(&var_44, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\xc8\x"
        "42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00\x50\xc3"
        "47", 
            0x30)
        float xmm0_2
        
        while (true)
            xmm0_2 = *(&var_44 + (eax_4 << 2))
            
            if (xmm0_2 >= xmm1_2)
                break
            
            eax_4 += 1
            
            if (eax_4 u>= 0xc)
                data_ce1ca0 = 0x47c35000
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_4
        
        float xmm2_1 = xmm0_2
        xmm2_1 - 0f
        eax_4:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
            | (xmm2_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            xmm2_1 = 1f
        
        data_ce1ca0 = xmm2_1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    int32_t ecx_5 = var_58:0xc.d
    int32_t eax_5 = ecx_5 + 0x14
    
    if (arg2 s> eax_5)
        var_58:8.d = arg1
        var_58:0xc.d = ecx_5
        ClientToScreen(data_ce1c90, &var_58:8)
        SetCursorPos(var_58:8.d, var_58:0xc.d)
        eax_5 = 0
        float xmm1_4 = data_ce1ca4 - 0.5f
        float xmm2_2 = 100000f
        __builtin_memcpy(&var_44, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\xc8\x"
        "42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00\x50\xc3"
        "47", 
            0x30)
        int32_t xmm0_4
        
        while (true)
            float xmm0_3 = *(&var_44 + (eax_5 << 2))
            
            if (xmm0_3 f>= (xmm1_4 ^ 0x80000000))
                xmm2_2 = xmm0_3
                xmm0_4 = (zx.o(0)).d
                xmm2_2 f- 0
                eax_5:1.b = (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
                    | (xmm2_2 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    break
            else
                eax_5 += 1
                
                if (eax_5 u< 0xc)
                    continue
            
            xmm0_4 = xmm2_2 ^ 0x80000000
            break
        
        data_ce1ca4 = xmm0_4
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_5
}
