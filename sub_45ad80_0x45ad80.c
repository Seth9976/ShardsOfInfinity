// 函数名称: sub_45ad80
// 虚拟地址: 0x45ad80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_45ad80()
{
    // 第一条实际指令: if (data_ce19b8 == 2)
    if (data_ce19b8 == 2)
        for (void* i = &data_cdb394; i s< &data_cdb3d4; i += 4)
            int32_t edx_1 = *i
            
            if (edx_1 != 0)
                (*(*data_ce19b4 + 0x60))(edx_1)
                (*(*data_ce19b4 + 0x68))(*i, 0)
    
    data_cdb38c = 0
    data_7db388 = 0
}
