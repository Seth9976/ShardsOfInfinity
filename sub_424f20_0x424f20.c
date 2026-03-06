// 函数名称: sub_424f20
// 虚拟地址: 0x424f20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_424f20(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t esi = 0
    int32_t result_1 = 0
    
    if (arg2 s> 0)
        int32_t* edi_1 = arg1
        
        do
            int32_t eax = sub_47a240(result)
            
            if (eax == 0)
                result = result_1
            else
                int32_t var_2c_2 = 0xffffffff
                sub_469930(eax)
                int32_t var_1c = arg3
                int32_t var_18_1 = *edi_1
                int32_t eax_3 = sub_4249d0(&var_1c)
                
                if (eax_3 u> 5)
                    sub_44e4d0(eax_3, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x105e, 
                        "StoreDlgUpdateRow")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                switch (eax_3)
                    case 2, 5
                        int32_t var_2c_3 = 0xffffffff
                        sub_469930(eax)
                        result = result_1 + 1
                        result_1 = result
                    case 3
                        result = result_1
            
            esi += 1
            edi_1 = &edi_1[0x11]
        while (esi s< arg2)
    
    return result
}
