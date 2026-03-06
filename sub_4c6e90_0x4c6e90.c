// 函数名称: sub_4c6e90
// 虚拟地址: 0x4c6e90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c6e90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_4c6d50()
    int32_t* edi = eax_2
    int32_t* var_50 = edi
    int32_t var_60
    char const* const ecx
    
    if (edi != 0)
        if (edi[1] s> 0)
            int32_t i = 0
            int32_t esi = 0
            
            do
                int32_t* ecx_2 = *edi + esi
                
                if (i == 0 || not(*arg1 f<= *ecx_2))
                    *arg1 = *ecx_2
                    edi = var_50
                
                if (i == 0 || not(ecx_2[1] f<= *arg2))
                    *arg2 = ecx_2[1]
                
                i += 1
                esi += 0x10
            while (i s< edi[1])
            
            int32_t eax_7 = 0
            int128_t var_44
            __builtin_memcpy(&var_44, 
                "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\x"
            "c8\x42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00"
            "50\xc3\x47", 
                0x30)
            int32_t xmm0_4
            float xmm1_1
            
            while (true)
                float xmm0_3 = *(&var_44 + (eax_7 << 2))
                xmm1_1 = 100000f
                
                if (xmm0_3 >= (*arg1 ^ 0x80000000))
                    xmm0_3 f- 0
                    eax_7:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                        | (xmm0_3 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2))
                        xmm0_4 = (zx.o(0)).d
                        break
                else
                    eax_7 += 1
                    
                    if (eax_7 u< 0xc)
                        continue
                    else
                        xmm0_3 = 100000f
                
                xmm0_4 = xmm0_3 ^ 0x80000000
                break
            
            *arg1 = xmm0_4
            int32_t i_1 = 0
            __builtin_memcpy(&var_44, 
                "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xa0\x40\x00\x00\x20\x41\x00\x00\x48\x42\x00\x00\x"
            "c8\x42\x00\x00\xfa\x43\x00\x00\x7a\x44\x00\x40\x9c\x45\x00\x40\x1c\x46\x00\x50\x43\x47\x00"
            "50\xc3\x47", 
                0x30)
            
            do
                float xmm0_5 = *(&var_44 + (i_1 << 2))
                
                if (xmm0_5 f>= *arg2)
                    xmm1_1 = xmm0_5
                    xmm1_1 f- 0
                    i_1:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
                        | (xmm1_1 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        xmm1_1 = 1f
                    
                    break
                
                i_1 += 1
            while (i_1 u< 0xc)
            
            *arg2 = xmm1_1
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return i_1
        
        char const* const var_5c_1 = "NodeGraphGetMinMax"
        var_60 = 0x2a4
        ecx = "pTrack->paramCount > 0"
    else
        char const* const var_5c = "NodeGraphGetMinMax"
        var_60 = 0x2a2
        ecx = "pTrack"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", var_60, 
        "NodeGraphGetMinMax")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
