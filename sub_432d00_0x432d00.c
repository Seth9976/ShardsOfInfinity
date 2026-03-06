// 函数名称: sub_432d00
// 虚拟地址: 0x432d00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_432d00(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result
    
    if (data_5bcb00 != arg1)
        if (arg1 != data_659a6c)
            result.b = 0
            return result
        
        int32_t ecx_1
        
        if (data_5bb1e4.d != 0x1e)
            ecx_1 = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx_1 = data_5bb1f0:4
        else
            ecx_1 = data_5bb1e4:4
        
        result = sub_47a160(ecx_1, "img_opp_construct_zoom_bg")
        
        if (result == 0)
            result.b = 0
            return result
        
        if (sub_47b570(result).b == 0)
            result.b = 0
            return result
    else
        data_659a6c = arg1
    
    result.b = 1
    return result
}
