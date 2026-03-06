// 函数名称: sub_4c4e30
// 虚拟地址: 0x4c4e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4c4e30(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg2 s> 0)
        char* eax_1 = *arg1
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax = 0
        else
            eax = *(sub_44f000(arg1) + 8)
        
        if (arg2 s<= eax)
            int32_t i = arg2 - 1
            
            if (i s> 0)
                char* esi_1 = *arg1
                
                do
                    char* eax_3 = &data_5559b1
                    
                    if (esi_1 != 0)
                        eax_3 = esi_1
                    
                    arg1.b = eax_3[i]
                    
                    if (arg1.b u< 0x80)
                        break
                    
                    eax_3.b = arg1.b
                    eax_3.b &= 0xe0
                    
                    if (eax_3.b == 0xc0)
                        break
                    
                    eax_3.b = arg1.b
                    eax_3.b &= 0xf0
                    
                    if (eax_3.b == 0xe0)
                        break
                    
                    arg1.b &= 0xf8
                    
                    if (arg1.b == 0xf0)
                        break
                    
                    i -= 1
                while (i s> 0)
            
            return i
    
    sub_44e4d0(eax, &data_5559b1, "index > 0 && index <= mText.Length()", 
        "c:\ax2017\engine\uitextbox.cpp", 0xa5, "UITextBox::Utf8StringLeftOneIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
