// 函数名称: sub_454570
// 虚拟地址: 0x454570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_454570(int32_t arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t result = 1
    int32_t result = 1
    int32_t var_8 = arg1
    int128_t* esi = arg2
    
    if (data_cdf3e4 s> 1)
        result = data_cdf3e4
    
    int32_t ebx = 0
    
    if (result s<= 0)
        return result
    
    void* edi = (data_cdf3e0 << 2) + &data_cdb3d8
    int32_t var_e4
    int32_t* eax_3
    char* ecx
    
    while (true)
        eax_3 = *edi
        
        if (eax_3 s< 0 || eax_3 s> data_7db388)
            char const* const var_e0_5 = "Draw3DGetInstanceMatrices"
            var_e4 = 0x133
            ecx = "itemIndex >= 0 && itemIndex <= gDraw3DData.renderItemCount"
            break
        
        eax_3 = eax_3 * 0x180 + 0x65b388
        
        if (*eax_3 != 0)
            char const* const var_e0_4 = "Draw3DGetInstanceMatrices"
            var_e4 = 0x136
            ecx = "renderItem.renderType == RENDER_ITEM_MESH"
            break
        
        int128_t xmm0_1 = *(eax_3 + 8)
        int128_t xmm1_1 = *(eax_3 + 0x18)
        int128_t xmm2_1 = *(eax_3 + 0x28)
        int128_t xmm3_1 = *(eax_3 + 0x38)
        int128_t var_4c = xmm0_1
        int128_t var_3c_1 = xmm1_1
        int128_t var_2c_1 = xmm2_1
        int128_t var_1c_1 = xmm3_1
        
        if (arg1 != 0x60)
            float var_cc[0x10]
            float* eax_5 = sub_45c930(&var_cc, &var_4c, &data_65af8c, &var_cc)
            arg1 = var_8
            xmm0_1 = *eax_5
            xmm1_1 = *(eax_5 + 0x10)
            xmm2_1 = *(eax_5 + 0x20)
            xmm3_1 = *(eax_5 + 0x30)
            int128_t var_8c = xmm0_1
            int128_t var_7c_1 = xmm1_1
            int128_t var_6c_1 = xmm2_1
            int128_t var_5c_1 = xmm3_1
            
            if (arg1 != 0x61)
                eax_3 = sub_45c930(&var_cc, &var_8c, &data_65b00c, &var_cc)
                arg1 = var_8
                xmm0_1 = *eax_3
                xmm1_1 = *(eax_3 + 0x10)
                xmm2_1 = *(eax_3 + 0x20)
                xmm3_1 = *(eax_3 + 0x30)
                
                if (arg1 != 0x62)
                    char const* const var_e0_3 = "Draw3DGetInstanceMatrices"
                    var_e4 = 0x14a
                    ecx = "materialParam == MATERIAL_MATRIX_WORLD_VIEW_PROJ_INSTANCE"
                    break
        
        *esi = xmm0_1
        ebx += 1
        edi += 4
        esi[1] = xmm1_1
        esi[2] = xmm2_1
        esi[3] = xmm3_1
        esi = &esi[4]
        
        if (ebx s>= result)
            return result
        
        continue
    
    sub_44e4d0(eax_3, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_e4, 
        "Draw3DGetInstanceMatrices")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
