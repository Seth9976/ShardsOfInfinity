// 函数名称: sub_420df0
// 虚拟地址: 0x420df0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_420df0()
{
    // 第一条实际指令: void* result = data_5bb714
    void* result = data_5bb714
    
    if (result != 0 && *result != 0)
        result = sub_44f000(&data_5bb714)
        
        if (*(result + 8) s> 0)
            int32_t eax = data_5bb718
            
            if (eax == 0)
                goto label_420e5a
            
            int32_t var_8
            
            if (eax != 1)
                result = eax - 2
                
                if (eax == 2)
                    goto label_420e5a
                
                char const* const var_4 = "NameAddOK"
                var_8 = 0xa6b
            label_420efd:
                sub_44e4d0(result, &data_5559b1, "Halt", 
                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", var_8, "NameAddOK")
                
                if (IsDebuggerPresent() != 1)
                    noreturn sub_44e680() __tailcall
                
                breakpoint
            
            sub_42b140()
        label_420e5a:
            sub_44f510(sub_42aaa0(*(data_65ac38 + 0xb24)), &data_5bb714)
            sub_42a740(data_65ac38)
            sub_45e9a0(&data_5bb270:4)
            int64_t xmm0_1 = data_5bb264.q
            data_5bb278 = data_5bb26c
            int32_t eax_5 = data_5bb27c
            data_5bb26c = eax_5
            data_5bb270 = xmm0_1
            data_5bb268 = 0
            data_5bb264 = 0
            data_5bb27c = eax_5 + 1
            data_5bb260 = 0
            sub_418140()
            result = data_5bb718
            
            if (result s< 0)
            label_420ee4:
                char const* const var_4_1 = "NameAddOK"
                var_8 = 0xa7e
                goto label_420efd
            
            if (result s> 1)
                if (result == 2)
                    return sub_422490() __tailcall
                
                goto label_420ee4
            
            data_5bb240 = 4
    
    return result
}
