// 函数名称: sub_416160
// 虚拟地址: 0x416160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_416160(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: void* var_10
    void* var_10
    int32_t* ecx
    int32_t eax = sub_481020(ecx, &var_10)
    int32_t* ecx_1 = data_65aabc
    
    if (ecx_1 == 0)
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    arg2[0x18] = *ecx_1
    void* ecx_2 = var_10
    arg2[0x19] = ecx_1[1]
    arg2[0x1a] = ecx_2
    arg2[0x1c] = ecx_2
    int32_t var_c
    arg2[0x1b] = var_c
    arg2[0x1d] = var_c
    arg2[3] = *(arg3 + 4)
    arg2[4] = *(arg3 + 8)
    arg2[6] = *(arg3 + 0x10)
    arg2[7] = *(arg3 + 0x14)
    arg2[8] = *(arg3 + 0x18)
    arg2[9] = *(arg3 + 0x1c)
    *(arg2 + 0x28) = *(arg3 + 0x20)
    arg2[0xc] = *(arg3 + 0x28)
    arg2[0xe] = *(arg3 + 4)
    arg2[0xf] = *(arg3 + 8)
    arg2[0x11] = *(arg3 + 0x10)
    arg2[0x12] = *(arg3 + 0x14)
    arg2[0x13] = *(arg3 + 0x18)
    arg2[0x14] = *(arg3 + 0x1c)
    *(arg2 + 0x54) = *(arg3 + 0x20)
    arg2[0x17] = *(arg3 + 0x28)
    void var_14
    
    if (sub_414300(&var_10, &var_14) != 0)
        *arg2 = 1
        arg2[1] = 0x40
        return 0x40
    
    if (*(arg3 + 4) == 3)
        *arg2 = 1
        arg2[1] = 0x14
        return 0x14
    
    int32_t result = sub_4418e0(arg3)
    arg2[1] = result
    *arg2 = 1
    return result
}
