// 函数名称: sub_47ce10
// 虚拟地址: 0x47ce10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_47ce10()
{
    // 第一条实际指令: void* edx = data_cdf424
    void* edx = data_cdf424
    int32_t var_14
    void* result
    char const* const ecx_1
    
    if (*(edx + 0x1d) == 0)
        *(edx + 0x1d) = 1
        
        for (int32_t* i = nullptr; i s< 0x10; i = &i[1])
            if ((*(*data_ce19b4 + 0x28))(*(i + edx)) != 0)
                edx = data_cdf424
            else
                int32_t eax_4 = (*(*data_ce19b4 + 0x24))(0, 0x18000, 1, 1)
                edx = data_cdf424
                *(i + edx) = eax_4
        
        result = (*(*data_ce19b4 + 0x34))(*(edx + 0x14))
        void* ecx_7
        
        if (result.b != 0)
            ecx_7 = data_cdf424
        else
            void* eax_7 = sub_45cd70(0x3000)
            int32_t i_1 = 0
            void* esi_1 = eax_7 + 4
            
            do
                int16_t edx_1 = (i_1 << 2).w
                i_1 += 1
                *(esi_1 - 4) = edx_1
                *esi_1 = edx_1 + 2
                *(esi_1 + 2) = edx_1 + 2
                *(esi_1 - 2) = edx_1 + 1
                esi_1 += 0xc
                *(esi_1 - 8) = edx_1 + 1
                *(esi_1 - 6) = edx_1 + 3
            while (i_1 s< 0x400)
            
            result = (*(*data_ce19b4 + 0x30))(eax_7, 0x3000, 0, 0, 0)
            ecx_7 = data_cdf424
            *(ecx_7 + 0x14) = result
            
            if (eax_7 != 0)
                result = _aligned_free_base(eax_7)
                ecx_7 = data_cdf424
        
        if (*(ecx_7 + 0x1c) == 0)
            *(ecx_7 + 0x1c) = 1
            result = sub_47c180(sub_48d5b0("sys\Sprite.material", 5))
            ecx_7 = data_cdf424
        
        if (*(ecx_7 + 0x18) == 0)
            if (*(ecx_7 + 0x3c) == 0)
                return result
            
            char const* const var_10_6 = "SpriteDrawBegin"
            var_14 = 0x258
            ecx_1 = "gpSpriteAppData->pLockedVerts == 0"
        else
            char const* const var_10_5 = "SpriteDrawBegin"
            var_14 = 0x257
            ecx_1 = "gpSpriteAppData->numBufferSprites == 0"
    else
        char const* const var_10_1 = "SpriteDrawBegin"
        var_14 = 0x251
        ecx_1 = "!gpSpriteAppData->spritesDrawing"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\sprite.cpp", var_14, "SpriteDrawBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
