// 函数名称: sub_49a150
// 虚拟地址: 0x49a150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_49a150(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t* eax = data_cdf428
    int32_t* eax = data_cdf428
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx
    
    if (eax == 0)
        var_20 = "GetGameData"
        var_24 = 0x45
        var_28 = "c:\ax2017\engine\game.h"
        ecx = "gpGameData"
    label_49a2b2:
        sub_44e4d0(eax, &data_5559b1, ecx, var_28, var_24, var_20)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    eax = eax[4]
    eax[7] += 1
    float xmm0_1 = *(arg1 + 0x5c)
    *(arg1 + 0x54) += 1
    *(arg1 + 0x58) = arg2
    *(arg1 + 0x5c) = xmm0_1 + arg2
    float xmm0_3 = *(arg1 + 0x50)
    
    if (not(xmm0_3 f<= 0))
        float xmm0_4 = xmm0_3 - arg2
        *(arg1 + 0x50) = xmm0_4
        
        if (not(0f < xmm0_4))
            *(arg1 + 0x76) = 1
    
    int32_t* i = *(arg1 + 8)
    
    while (i != 0)
        int32_t* i_1 = i
        
        if (i == 0)
            var_20 = "XList<struct ParticleEmitter>::GetNextIter"
            var_24 = 0x1a1
            var_28 = "c:\ax2017\engine\xlist.h"
            ecx = "iter != NULL"
            goto label_49a2b2
        
        int32_t* eax_1 = &i[0xbf]
        int32_t* i_2 = i
        i = *eax_1
        eax = sub_49a0a0(i_2)
        
        if (eax.b == 0)
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = *(esi_1 + 0x2fc)
                else
                    esi_1 = i_2[0xb4]
                
                if (esi_1 == 0)
                    break
                
                sub_495490(esi_1)
            
            sub_49fa50(&i_2[0xb4])
            void* eax_2 = i_2[0xb9]
            *(eax_2 + 0x14) -= 1
            void* ecx_4 = i_1[0xc0]
            int32_t eax_3 = *eax_1
            
            if (ecx_4 == 0)
                *(arg1 + 8) = eax_3
            else
                *(ecx_4 + 0x2fc) = eax_3
            
            void* ecx_5 = *eax_1
            int32_t eax_4 = i_1[0xc0]
            
            if (ecx_5 == 0)
                *(arg1 + 0xc) = eax_4
            else
                *(ecx_5 + 0x300) = eax_4
            
            *(arg1 + 0x10) -= 1
            sub_495690(i_1)
            eax = sub_45d050(i_1, 0x304)
    
    if (*(arg1 + 0x10) == 0)
        *(arg1 + 0x76) = 1
    
    int32_t result = *(arg1 + 0x48)
    *(arg1 + 0x68) = *(arg1 + 0x40)
    *(arg1 + 0x70) = result
    return result
}
