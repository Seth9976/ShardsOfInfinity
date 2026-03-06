// 函数名称: sub_41b780
// 虚拟地址: 0x41b780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_41b780(int32_t* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != 0xffffffff)
    label_41b7c7:
        result = sub_47a160(arg2, arg3)
        arg1[8] = result
        
        if (result == 0)
            return result
        
        arg1[1] = arg3
        *arg1 = arg2
        arg1[2] = 0xffffffff
    else
        result = arg1[8]
        
        if (result == 0)
            goto label_41b7c7
        
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u>= data_5c99a4 || *(ecx * 0x1008 + data_5c99a0 + 0x1004) != result)
            goto label_41b7c7
    
    return result
}
