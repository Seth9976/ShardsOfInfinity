// 函数名称: sub_4f9fa0
// 虚拟地址: 0x4f9fa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4f9fa0()
{
    // 第一条实际指令: HMENU hMenu = CreatePopupMenu()
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    HMENU eax = CreatePopupMenu()
    InsertMenuA(eax, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    int32_t ebx
    ebx.b = sub_4f9f20()
    HMENU eax_2 = CreatePopupMenu()
    int32_t ecx
    ecx.b = ebx.b != 0
    InsertMenuA(eax_2, 0xffffffff, (ecx << 3) + 0x400, 0x16, "Lock")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax, "Transform")
    BOOL result
    char* ecx_2
    result, ecx_2 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_ce1790, nullptr)
    
    if (result != 0)
        char const* const var_30_1
        int32_t var_2c_3
        char const* const var_28_1
        char* ecx_3
        
        if (result != 0x11)
            if (result != 0x16)
                var_28_1 = "FabDoRClickMenu"
                var_2c_3 = 0x79c
                var_30_1 = "c:\ax2017\engine\editor\fabeditor.cpp"
                ecx_3 = "Halt"
            label_4fa14e:
                sub_44e4d0(result, &data_5559b1, ecx_3, var_30_1, var_2c_3, var_28_1)
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            result = sub_4f9f20()
            int32_t esi_1 = 0
            HMENU ebx_1
            ebx_1.b = result.b
            
            if (data_ce37a4 s<= 0)
            label_4fa0b6:
                ecx_2.b = 1
                return sub_4fb1e0(ecx_2)
            
            while (true)
                int32_t* ecx_4 = data_ce27a0
                int32_t edi_1 = (&data_ce27a4)[esi_1]
                
                if (ecx_4[1] != 0x20)
                    break
                
                result = *sub_4459f0(ecx_4)
                esi_1 += 1
                (edi_1 * 0xb8)[result + 0x31] = ebx_1.b == 0
                
                if (esi_1 s>= data_ce37a4)
                    goto label_4fa0b6
            
            goto label_4fa135
        
        int32_t* ecx_5 = data_ce27a0
        
        if (ecx_5[1] != 0x20)
        label_4fa135:
            var_28_1 = "FabDefGet"
            var_2c_3 = 0xe7
            ecx_3 = "ptr->assetType == ASSET_TYPE_FAB"
            var_30_1 = "c:\ax2017\engine\fabdef.cpp"
            goto label_4fa14e
        
        result = sub_4459f0(ecx_5)
        int32_t esi_2 = data_ce37a4
        int32_t edx_2 = 0
        BOOL result_1 = result
        
        if (esi_2 s> 0)
            do
                BOOL* ecx_7 = (&data_ce27a4)[edx_2] * 0xb8 + *result_1
                result = *ecx_7
                
                if (result == 3 || result == 2 || result == 1)
                    *(ecx_7 + 0x20) = 0x3f8000003f800000
                    result = 0x3f800000
                    ecx_7[0xa] = 0x3f800000
                    esi_2 = data_ce37a4
                
                edx_2 += 1
            while (edx_2 s< esi_2)
    
    return result
}
