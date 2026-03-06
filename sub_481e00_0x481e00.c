// 函数名称: sub_481e00
// 虚拟地址: 0x481e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_481e00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg1
    arg2[4] = ebx
    *(arg2 + 0x15) = 0
    arg2[5].b = 0
    arg2[3] = 0
    arg2[2] = 0x3f800000
    *(arg2 + 0x18) = 0
    arg2[8] = 0
    arg2[9] = 0x40a00000
    arg2[0xa] = 0x42480000
    *(arg2 + 0x17) = 0
    arg2[0xb] = 0
    
    if (ebx[1] != 0x15)
        sub_44e4d0(0, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SOUND", 
            "c:\ax2017\engine\sound.cpp", 0x330, "SoundGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* esi = sub_4459f0(arg1)
    int32_t* eax_2
    
    if (esi[9] != 0)
        eax_2 = esi[6]
        
        if (eax_2 == 0)
            int32_t eax_3 = esi[0xa]
            int32_t var_10c[0x41]
            
            if (eax_3 != 0)
                var_10c[1] = 1
                var_10c[0] = ebx
            
            int32_t ebx_1 = esi[9]
            int32_t edx
            edx.b = eax_3 != 0
            int32_t ecx = 0
            
            if (ebx_1 s> 0)
                do
                    if (edx s>= 0x20)
                        sub_44e4d0(eax_3, &data_5559b1, "pickCount < MAX_PERMUTATIONS", 
                            "c:\ax2017\engine\sound.cpp", 0xb5, "SoundInitParams")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t eax_4 = esi[7]
                    var_108
                    *(&var_108 + (edx << 3)) = 1
                    eax_3 = *(eax_4 + (ecx << 2))
                    ecx += 1
                    var_10c[edx * 2] = eax_3
                    edx += 1
                while (ecx s< ebx_1)
            
            ebx = *sub_4d66e0(&var_10c, edx)
        else if (eax_2 == 1)
            ebx = *esi[7]
    
    *arg2 = ebx
    float xmm1 = *esi
    xmm1 f- 0
    eax_2:1.b =
        (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        arg2[1] = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    float eax_7 = (sub_452ac0() & 0x7fffff) | 0x3f800000
    arg2[1] = (xmm1 - 0f) * (eax_7 - 1f) + 0f
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_7
}
