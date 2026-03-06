// 函数名称: sub_4ed3c0
// 虚拟地址: 0x4ed3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ed3c0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg3[1] == 3)
    if (arg3[1] == 3)
        int32_t* edi_1 = *sub_4459f0(arg3)
        arg2[1] = *edi_1
        arg2[2] = edi_1[1]
        arg2[4] = arg4
        int32_t eax_4 = sub_4dd620(arg4) * *edi_1
        int32_t var_2c_1 = arg2[4]
        int32_t edx = arg2[2]
        int32_t ecx_1 = arg2[1]
        arg2[3] = eax_4
        *arg2 = sub_45cd70(sub_4dd7f0(eax_4, edx, ecx_1, var_2c_1))
        int32_t* ecx_3 = edi_1[0xf]
        int128_t var_18
        
        if (edi_1[4] == 8)
            int32_t ecx_4 = *edi_1
            var_18.d = ecx_3[1]
            var_18:4.d = ecx_4
            var_18:8.d = edi_1[1]
            var_18:0xc.d = sub_4dd730(ecx_4, edi_1[5])
            int32_t var_8_1 = edi_1[5]
            return sub_4ddd60(&var_18, arg2)
        
        int32_t var_2c_2 = *ecx_3
        int32_t eax_11 = arg2[4]
        int32_t var_30_1 = ecx_3[1]
        var_18 = *arg2
        int32_t var_8_2 = eax_11
        char result = sub_4ded00(eax_11, &var_18, ecx_3, var_30_1)
        
        if (result != 0)
            return result
        
        char* eax_12 = arg3[8]
        char* const ecx_6 = &data_5559b1
        
        if (eax_12 != 0)
            ecx_6 = eax_12
        
        char* const var_2c_3 = ecx_6
        sub_44e4d0(sub_44e260("Failed to read texture %s"), &data_5559b1, "Halt", 
            "c:\ax2017\engine\editor\atlasmaker.cpp", 0x2a2, "AtlasLoadFontTexture")
    else
        sub_44e4d0(arg1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
