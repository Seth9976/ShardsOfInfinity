// 函数名称: sub_4222f0
// 虚拟地址: 0x4222f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4222f0(int32_t* arg1)
{
    // 第一条实际指令: void* edi = data_65aabc
    void* edi = data_65aabc
    void* i
    
    if (edi != 0)
        char var_21_1 = 0
        void* var_14_1 = edi
        int32_t var_20_1 = 0
        
        if (edi != 0)
            void* i_1 = nullptr
            int32_t* ecx_1 = edi + 0x444
            sub_412b20(ecx_1, &i_1)
            i = i_1
            int32_t ecx_2 = 0
            int32_t ebx_1 = 0
            
            if (i != 0xffffffff)
                int32_t var_18_1 = 0
                var_20_1 = 0
                
                do
                    if (*(i + 0x1b8) == 0)
                        if (edi == 0)
                            goto label_42246a
                        
                        int32_t ebx_2 = *(i + 0x1c8)
                        
                        if (*(var_14_1 + 0x434) != 2 || *(var_14_1 + 0x438) != ebx_2)
                            i = sub_4220d0(i + 8)
                            
                            if (i == 0xf || i == 0x11)
                                *arg1 = 2
                                arg1[1] = ebx_2
                                
                                if (var_21_1 != 0)
                                    goto label_422403
                                
                                ebx_1 = var_20_1
                                
                                if (ebx_1 == 0)
                                    ebx_1 = *arg1
                                    var_20_1 = ebx_1
                                    var_18_1 = arg1[1]
                            else
                                ebx_1 = var_20_1
                            
                            edi = data_65aabc
                        else
                            ebx_1 = var_20_1
                            var_21_1 = 1
                    
                    sub_412b20(ecx_1, &i_1)
                    i = i_1
                while (i != 0xffffffff)
                
                ecx_2 = var_18_1
            
            if (ebx_1 != 0)
                *arg1 = ebx_1
                arg1[1] = ecx_2
            label_422403:
                i.b = 1
                return i
            
            if (edi != 0)
                if (*(edi + 0x434) != 1)
                    i = sub_42aaa0(*(data_65ac38 + 0xb24))
                    
                    if (*(i + 0x240) != 0)
                        *arg1 = 1
                        arg1[1] = *(i + 0x240)
                        int32_t eax_1
                        eax_1.b = 1
                        return eax_1
                
                i.b = 0
                return i
    
    label_42246a:
    sub_44e4d0(i, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
