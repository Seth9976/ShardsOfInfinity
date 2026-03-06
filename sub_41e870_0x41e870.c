// 函数名称: sub_41e870
// 虚拟地址: 0x41e870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_41e870(void* arg1)
{
    // 第一条实际指令: if (data_5bb700 == 1)
    if (data_5bb700 == 1)
        sub_44f510(&data_5bb704, arg1 + 8)
        
        if (*(arg1 + 0x10) != 0)
            void* eax_2 = data_5bb704
            void* ecx_1 = &data_5559b1
            
            if (eax_2 != 0)
                ecx_1 = eax_2
            
            if (sub_41e610(ecx_1) != 0)
                return sub_41e6f0() __tailcall
    else if (data_5bb70c == 1)
        sub_44f510(&data_5bb708, arg1 + 8)
        
        if (*(arg1 + 0x10) != 0 && sub_41e660(&data_5bb708) != 0)
            return sub_41e6f0() __tailcall
}
