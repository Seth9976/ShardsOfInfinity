// 函数名称: sub_47c290
// 虚拟地址: 0x47c290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_47c290())[0x4]
{
    // 第一条实际指令: void var_36c
    void var_36c
    uint32_t (* result)[0x4] = __security_cookie ^ &var_36c
    uint32_t (* result_1)[0x4] = result
    void* ecx = data_cdf424
    int32_t esi = *(ecx + 0x18)
    
    if (esi != 0)
        char const* const var_384_1
        int32_t var_380_1
        char const* const var_37c_1
        char* ecx_1
        
        if (*(ecx + 0x3c) == 0)
            var_37c_1 = "SpriteDrawBuffers"
            var_380_1 = 0xd9
            var_384_1 = "c:\ax2017\engine\sprite.cpp"
            ecx_1 = "gpSpriteAppData->pLockedVerts"
        label_47c470:
            sub_44e4d0(result, &data_5559b1, ecx_1, var_384_1, var_380_1, var_37c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ebx_1 = *(ecx + (*(ecx + 0x10) << 2))
        result = (*(*data_ce19b4 + 0x68))(ebx_1, esi * 0x60)
        void* esi_1 = data_cdf424
        bool cond:0_1 = *(esi_1 + 0x18) s<= 0x400
        *(esi_1 + 0x3c) = 0
        
        if (not(cond:0_1))
            var_37c_1 = "SpriteDrawBuffers"
            var_380_1 = 0xe2
            var_384_1 = "c:\ax2017\engine\sprite.cpp"
            ecx_1 = "gpSpriteAppData->numBufferSprites <= MAX_SPRITE_PER_DRAW"
            goto label_47c470
        
        uint32_t var_368[0x8][0x4]
        result = _memset(&var_368, 0, 0x358)
        int32_t* edx_2 = *(esi_1 + 0x50)
        void* eax_5
        
        if (edx_2 != 0)
            int32_t* eax_4 = *(esi_1 + 0x40)
            
            if (eax_4 == 0)
            label_47c356:
                eax_5 = sub_47c180(edx_2)
                esi_1 = data_cdf424
            else
                while (true)
                    int32_t* ecx_3 = *eax_4
                    eax_4 = eax_4[1]
                    
                    if (*ecx_3 == edx_2)
                        eax_5 = &ecx_3[1]
                        break
                    
                    if (eax_4 == 0)
                        goto label_47c356
            
            goto label_47c3b0
        
        if (*(esi_1 + 0x1c) == 0)
            var_37c_1 = "SpriteGetDefaultMaterialInCache"
            var_380_1 = 0x6b
            var_384_1 = "c:\ax2017\engine\sprite.cpp"
            ecx_1 = "gpSpriteAppData->materialBound"
            goto label_47c470
        
        if (*(esi_1 + 0x48) s<= 0)
            var_37c_1 = "SpriteGetDefaultMaterialInCache"
            var_380_1 = 0x6c
            var_384_1 = "c:\ax2017\engine\sprite.cpp"
            ecx_1 = "gpSpriteAppData->materialStateCache.GetSize() > 0"
            goto label_47c470
        
        result = *(esi_1 + 0x40)
        
        if (result == 0)
            var_37c_1 = "XList<struct MaterialStateCacheItem *>::GetHead"
            var_380_1 = 0x53
            ecx_1 = "mpHead != NULL"
            var_384_1 = "c:\ax2017\engine\xlist.h"
            goto label_47c470
        
        eax_5 = *result + 4
    label_47c3b0:
        void* var_18_1 = eax_5
        int32_t ecx_5 = *(esi_1 + 0x4c)
        
        if (ecx_5 != 0)
            sub_4b4dc0(eax_5, 0x53, eax_5, ecx_5)
        
        void var_2e8
        (*(*data_ce19b4 + 0x7c))(&var_2e8)
        (*(*data_ce19b4 + 0x40))(&var_368)
        void* esi_2 = data_cdf424
        int32_t edx_3 = *(esi_2 + 0x18)
        (*(*data_ce19b4 + 0x3c))(4, ebx_1, *(esi_2 + 0x14), 1, edx_3 * 2, edx_3 << 2, 0, 0)
        void* ecx_10 = data_cdf424
        int32_t eax_12 = *(ecx_10 + 0x10) + 1
        *(ecx_10 + 0x18) = 0
        int32_t eax_13 = eax_12 & 0x80000003
        
        if (eax_13 s< 0)
            eax_13 = ((eax_13 - 1) | 0xfffffffc) + 1
        
        *(ecx_10 + 0x10) = eax_13
        result = data_ce19c4
        (*result)[0xb] += 1
    
    @__security_check_cookie@4(result_1 ^ &var_36c)
    return result
}
