// 函数名称: ??$uninitialize_environment_internal@D@@YAXAAPAPAD@Z
// 虚拟地址: 0x52ebdb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*??$uninitialize_environment_internal@D@@YAXAAPAPAD@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = *arg1
    int32_t* result = *arg1
    
    if (result != data_65a648)
        result = free_environment<char>(result)
    
    return result
}
