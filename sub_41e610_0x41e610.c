// 函数名称: sub_41e610
// 虚拟地址: 0x41e610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_41e610(char* arg1)
{
    // 第一条实际指令: char* result = sub_48c4a0(arg1, U"@.")
    char* result = sub_48c4a0(arg1, U"@.")
    
    if (result != 0 && result != arg1)
        char* ecx_1 = sub_48c4a0(result, &data_556c38)
        
        if (ecx_1 != 0)
            do
                result.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (result.b != 0)
            
            if (ecx_1 - &ecx_1[1] u>= 3)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
