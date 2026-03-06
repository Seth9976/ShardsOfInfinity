// 函数名称: sub_4b4e30
// 虚拟地址: 0x4b4e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b4e30(int32_t* arg1)
{
    // 第一条实际指令: char** ecx = arg1[1]
    char** ecx = arg1[1]
    
    if (ecx != 0)
        sub_491590(ecx)
    
    arg1[3]
    sub_48b5b0(*arg1)
    int32_t* eax = sub_494930(arg1[3])
    
    if (eax != 0)
        void* edx_2 = arg1[3]
        arg1[1] = eax
        int32_t* result = sub_492a80(eax, edx_2)
        *arg1 = result
        return result
    
    sub_44e4d0(eax, &data_5559b1, "pParseTree", "c:\ax2017\engine\material.cpp", 0x38d, 
        "MaterialMakeDatalessFailureAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
