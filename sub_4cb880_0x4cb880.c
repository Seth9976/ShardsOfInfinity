// 函数名称: sub_4cb880
// 虚拟地址: 0x4cb880
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4cb880(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t ebx
    ebx.b = arg1.b
    int32_t* ecx = data_ce26e4
    
    if (ecx == 0 || ecx[1] != 0x19 || sub_4459f0(ecx) == 0)
        return 
    
    LRESULT esi_1 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
    
    if (esi_1 == 0xffffffff)
        return 
    
    int32_t i_1 = sub_4c7540(esi_1) + 1
    
    if (i_1 s> 0)
        void* ecx_2 = (esi_1 << 3) + &data_ce1cd8
        int32_t i
        
        do
            *ecx_2 = ebx.b
            ecx_2 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    LRESULT eax = data_ce26e4
    
    if (eax == 0)
        return 
    
    eax = *(eax + 4)
    
    if (eax == 0x19)
        sub_4c8660(esi_1, 0xffffffff)
        return 
    
    if (eax == 0x1b)
        sub_4c8c00(esi_1)
}
