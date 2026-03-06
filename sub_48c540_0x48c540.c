// 函数名称: sub_48c540
// 虚拟地址: 0x48c540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48c540(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t eax = *arg2
    int32_t* var_8_1 = arg1
    
    if (eax u> 3)
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\xplatformgeneric.cpp", 0x55, 
            "GenericHalGetFilePath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (eax)
        case 0
            char* eax_1 = arg2[1]
            char* const ecx = &data_5559b1
            
            if (eax_1 != 0)
                ecx = eax_1
            
            char* const var_10_1 = ecx
            int32_t var_14_1 = sub_44ebe0()
            sub_44f980(arg1, "%s%s")
            return arg1
        case 1
            char* eax_4 = arg2[1]
            char* const ecx_1 = &data_5559b1
            
            if (eax_4 != 0)
                ecx_1 = eax_4
            
            char* const var_10_2 = ecx_1
            char* var_14_2 = &data_ce18a0
            sub_44f980(arg1, "%s/%s")
            return arg1
        case 2, 3
            char* eax_6 = arg2[1]
            *arg1 = eax_6
            
            if (eax_6 == 0 || *eax_6 == 0)
                return arg1
            
            char* eax_7 = sub_44f000(arg1)
            *(eax_7 + 4) += 1
            return arg1
}
