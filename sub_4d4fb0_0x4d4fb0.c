// 函数名称: sub_4d4fb0
// 虚拟地址: 0x4d4fb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d4fb0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = data_65ae00
    
    if (ecx == 0)
        goto label_4d4fdc
    
    int32_t bottom = (*(*ecx + 0x34))()
    
    if (bottom.b == 0)
        ecx = data_65ae00
    label_4d4fdc:
        int32_t esi_1 = 0
        
        if (ecx != 0)
            esi_1 = ecx[7]
        
        bottom = data_ce1790
        void** ecx_1 = &data_6553ec
        data_655425 = 1
        data_65ae00 = &data_6553ec
        
        if (bottom == 0)
            data_655400 = 0x400
            data_655404 = 0x300
        else
            RECT rect
            GetClientRect(bottom, &rect)
            ecx_1 = data_65ae00
            ecx_1[5] = rect.right
            bottom = rect.bottom
            ecx_1[6] = bottom
        
        ecx_1[7] = esi_1
        ecx_1[8].b = 1
        ecx_1[1] = "Game.xpack"
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return bottom
}
