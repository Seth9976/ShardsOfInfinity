// 函数名称: sub_45d570
// 虚拟地址: 0x45d570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_45d570(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    
    if (arg2 s> 0)
        int32_t* result = arg1
        
        do
            int32_t* ecx_1 = *result
            int32_t eax_2 = **ecx_1
            int32_t var_18_3
            uint32_t eax_6
            char* ecx_4
            
            if (ecx_1 != &data_5c796c)
                eax_6 = __stricmp((*data_5c796c)(eax_2()))
                
                if (eax_6 == 0)
                    char const* const var_14_4 = "UI2VarBindingLookup"
                    var_18_3 = 0x73c
                    ecx_4 = "_stricmp(tag.GetStateName(), bindings[i].tag->GetStateName()) != 0"
                label_45d614:
                    sub_44e4d0(eax_6, &data_5559b1, ecx_4, "c:\ax2017\engine\ui2.cpp", var_18_3, 
                        "UI2VarBindingLookup")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            else
                eax_6 = __stricmp((*data_5c796c)(eax_2()))
                
                if (eax_6 != 0)
                    char const* const var_14_3 = "UI2VarBindingLookup"
                    var_18_3 = 0x738
                    ecx_4 = "_stricmp(tag.GetStateName(), bindings[i].tag->GetStateName()) == 0"
                    goto label_45d614
                
                int32_t eax_7 = result[1]
                
                if (eax_7 == 0 || eax_7 == 0xffffffff)
                    return result
            edi += 1
            result = &result[6]
        while (edi s< arg2)
    
    return 0
}
