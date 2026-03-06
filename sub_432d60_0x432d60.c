// 函数名称: sub_432d60
// 虚拟地址: 0x432d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_432d60(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result
    
    if (data_5bcaf4 == arg1)
        if (data_5bcaf0 == 1)
            result.b = 1
            return result
        
        int32_t ecx
        
        if (data_5bb1e4.d != 0x1e)
            ecx = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx = data_5bb1f0:4
        else
            ecx = data_5bb1e4:4
        
        result = sub_47a160(ecx, "grpDiscard")
        
        if (result != 0 && sub_47b570(result).b != 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
