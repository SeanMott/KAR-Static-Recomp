//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80290CE8(PPC::Runtime::GCContext* context)
{
/*80290CE8 0028DAE8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC32C @ Get_MemoryOffset_HighBit);
/*80290CEC 0028DAEC*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*80290CF0 0028DAF0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC32C @ Get_MemoryOffset_LowBit);
/*80290CF4 0028DAF4*/ PPC::Runtime::ASM::li(context->r5, 0x28);
/*80290CF8 0028DAF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80290CFC 0028DAFC*/ PPC::Runtime::ASM::li(context->r4, 0x50);
/*80290D00 0028DB00*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80290D04 0028DB04*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80290D08 0028DB08*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*80290D0C 0028DB0C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80290D10 0028DB10*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80290D14 0028DB14*/ PPC::Runtime::ASM::blr();
}