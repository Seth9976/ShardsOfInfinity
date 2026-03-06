// 函数名称: sub_48b200
// 虚拟地址: 0x48b200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48b200(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result != 0)
        if (result != arg2)
            result = _aligned_free_base(result)
            *arg1 = 0
        
        return result
    
    sub_44e4d0(result, &data_5559b1, "*pString", "c:\ax2017\engine\definition.cpp", 0x17c, 
        "DefinitionDeleteString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
