// 函数名称: sub_481fd0
// 虚拟地址: 0x481fd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_481fd0(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_cdf448
    void* eax = data_cdf448
    float var_8 = *(eax + 0x1c)
    
    if (*(arg1 + 0x5b) != 0)
        var_8 = *(eax + 0x20)
    
    int32_t* ecx = *arg1
    
    if (ecx[1] == 0x15)
        eax = sub_4459f0(ecx)
        int32_t* ecx_1 = arg1[1]
        
        if (ecx_1[1] == 0x15)
            void* eax_1 = sub_4459f0(ecx_1)
            float xmm1 = *(eax + 4)
            
            if (eax_1 != eax)
                xmm1 = xmm1 f* *(eax_1 + 4)
            
            void* result = data_cdf448
            float xmm2 = *(result + 0x24)
            
            if (*(arg1 + 0x5d) != 0)
                xmm2 = 1f
            
            float xmm0_6 = arg1[0x11] f* var_8 * xmm1 * xmm2 f* arg1[0xf]
            
            if (not(0 f> xmm0_6))
                _mm_min_ss(0x40800000, xmm0_6)
            
            return result
    
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "c:\ax2017\engine\sound.cpp", 0x330, "SoundGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
