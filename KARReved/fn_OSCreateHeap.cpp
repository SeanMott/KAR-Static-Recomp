//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_OSCreateHeap(PPC::Runtime::GCContext* context)
{
/*803D3804 003D0604*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDEB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D3808 003D0608*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*803D380C 003D060C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDEB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D3810 003D0610*/ PPC::Runtime::ASM::clrrwi(context->r7, context->r0, 5);
/*803D3814 003D0614*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*803D3818 003D0618*/ PPC::Runtime::ASM::mtctr(context->r6);
/*803D381C 003D061C*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r4, 5);
/*803D3820 003D0620*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803D3824 003D0624*/ PPC::Runtime::ASM::ble(.L_803D3868);
RUNTIME_PPC_JUMP_LABEL(.L_803D3828, 0x803D3828) //this is a jump label
/*803D3828 003D0628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D382C 003D062C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803D3830 003D0630*/ PPC::Runtime::ASM::bge(.L_803D385C);
/*803D3834 003D0634*/ PPC::Runtime::ASM::subf(context->r0, context->r7, context->r4);
/*803D3838 003D0638*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D383C 003D063C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803D3840 003D0640*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803D3844 003D0644*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803D3848 003D0648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D384C 003D064C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803D3850 003D0650*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803D3854 003D0654*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803D3858 003D0658*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803D385C, 0x803D385C) //this is a jump label
/*803D385C 003D065C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*803D3860 003D0660*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*803D3864 003D0664*/ PPC::Runtime::ASM::bdnz(.L_803D3828);
RUNTIME_PPC_JUMP_LABEL(.L_803D3868, 0x803D3868) //this is a jump label
/*803D3868 003D0668*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803D386C 003D066C*/ PPC::Runtime::ASM::blr();
}