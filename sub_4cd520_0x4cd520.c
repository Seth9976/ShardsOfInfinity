// 函数名称: sub_4cd520
// 虚拟地址: 0x4cd520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4cd520(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u<= 8)
    if (arg1 - 1 u<= 8)
        switch (arg1)
            case 1
                return "Image"
            case 2
                return "Table"
            case 3
                return "Text"
            case 4
                return "Region"
            case 5
                return "Button"
            case 6
                return "Group"
            case 9
                return "Particle"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\windows\editorwindow.cpp", 0xe7d, 
        "ToUITypeStr")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
