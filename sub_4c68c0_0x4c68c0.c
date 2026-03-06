// 函数名称: sub_4c68c0
// 虚拟地址: 0x4c68c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4c68c0(char* arg1)
{
    // 第一条实际指令: char* var_1c
    char* var_1c
    
    if (data_ce1cbc == 0)
        var_1c = 0x8e
        HWND hDlg = data_ce1c90
        data_ce1cbc = 1
        HWND hWnd = GetDlgItem(hDlg, var_1c)
        var_1c = zx.d(data_ce1cbc)
        BOOL eax
        eax, arg1 = EnableWindow(hWnd, var_1c)
    
    int32_t* edi = data_ce26e4
    
    if (edi == 0 || edi[1] != 0x19)
        return 
    
    var_1c = arg1
    int32_t* esi_1 = &data_5559b1
    sub_44f240(&var_1c, &data_5559b1)
    char* eax_1 = edi[8]
    char* const ecx_2 = &data_5559b1
    int32_t var_20_2 = *edi
    
    if (eax_1 != 0)
        ecx_2 = eax_1
    
    sub_49ef60(ecx_2)
    int32_t* eax_2 = edi[8]
    
    if (eax_2 != 0)
        esi_1 = eax_2
    
    var_1c = **edi
    sub_49f8b0(esi_1)
}
