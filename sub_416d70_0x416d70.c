// 函数名称: sub_416d70
// 虚拟地址: 0x416d70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_416d70(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_65aabc
    void* ecx = data_65aabc
    void* result
    
    if (ecx != 0)
        int32_t* eax = sub_41b1b0(ecx + 0x444, arg1)
        
        if (eax[0x44] != 0)
            return sub_416d10(arg1)
        
        data_5bb240 = 0x17
        int32_t var_8 = *eax
        result = data_65aabc
        
        if (result != 0)
            if (*(result + 0x18) == 3)
                int32_t ecx_3 = *(result + 0x14)
                void* edx_1 = data_65acf4
                
                if (ecx_3 != 0)
                    uint32_t esi_1 = zx.d(ecx_3.w)
                    
                    if (esi_1 u< *(edx_1 + 4))
                        void* esi_3 = esi_1 * 0x4c + *edx_1
                        
                        if (*(esi_3 + 0x48) == ecx_3)
                            int32_t var_18_2 = 0xf42b1
                            sub_450c90(result, 4, esi_3 + 0x3c)
                            sub_450a70(&var_8, 4, esi_3 + 0x3c, &var_8)
                            result = data_65aabc
            
            if (result != 0)
                *(result + 0x440) = arg1
                *(result + 0x43c) = 2
                return result
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
