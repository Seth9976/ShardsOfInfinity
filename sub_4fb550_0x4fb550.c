// 函数名称: sub_4fb550
// 虚拟地址: 0x4fb550
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4fb550(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    sub_4fb6a0()
    DragAcceptFiles(data_ce1790, 1)
    data_d76c60 = arg1
    uint32_t eax = sub_4869c0(arg1)
    int32_t* ecx_1 = data_d76c60
    data_d76c64 = eax
    data_d77c6c = 0
    data_d77c70 = 0
    data_d77c72 = 0
    char const* const var_1c
    int32_t var_18_1
    char const* const var_14
    char* ecx_2
    
    if (ecx_1[1] == 0x1e)
        int32_t* eax_1 = sub_4459f0(ecx_1)
        int32_t ecx_3 = 0
        int32_t i_1 = eax_1[1]
        
        if (i_1 s> 0)
            int32_t* edx_1 = *eax_1
            int32_t i
            
            do
                int32_t eax_2 = *edx_1
                edx_1 = &edx_1[0x46]
                
                if (ecx_3 s> eax_2)
                    eax_2 = ecx_3
                
                ecx_3 = eax_2
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        eax = ecx_3 + 1
        data_df847c = 0x3f000000
        int32_t* ecx_4 = data_d76c60
        data_d76c68 = eax
        
        if (ecx_4[1] == 0x1e)
            char* ecx_5
            eax, ecx_5 = sub_4459f0(ecx_4)
            float xmm2_1 = *(eax + 8)
            
            if (not(*(eax + 0x10) f< xmm2_1))
                float xmm1_1 = *(eax + 0xc)
                
                if (not(*(eax + 0x14) f< xmm1_1))
                    ecx_5.b = 0
                    data_df8480 = xmm2_1 - 100f
                    data_df8484 = xmm1_1 - 100f
                    return sub_4fb880(ecx_5)
            
            var_14 = "RectTopLeft"
            var_18_1 = 0x127
            var_1c = "c:\ax2017\engine\rect.cpp"
            ecx_2 = "RectIsNormalized(r)"
        else
            var_14 = "UIDefGet"
            var_18_1 = 0x10d
            var_1c = "c:\ax2017\engine\uidef.cpp"
            ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_14 = "UIDefGet"
        var_18_1 = 0x10d
        var_1c = "c:\ax2017\engine\uidef.cpp"
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(eax, &data_5559b1, ecx_2, var_1c, var_18_1, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
