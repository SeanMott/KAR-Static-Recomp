//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BE60(PPC::Runtime::GCContext* context)
{
/*8029BE60 00298C60*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE64 00298C64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BE68 00298C68*/ PPC::Runtime::ASM::beq(.L_8029BE80);
/*8029BE6C 00298C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BE70 00298C70*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE74 00298C74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029BE78 00298C78*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE7C 00298C7C*/ PPC::Runtime::ASM::b(.L_8029BE88);
RUNTIME_PPC_JUMP_LABEL(.L_8029BE80, 0x8029BE80) //this is a jump label
/*8029BE80 00298C80*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE84 00298C84*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029BE88, 0x8029BE88) //this is a jump label
/*8029BE88 00298C88*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE8C 00298C8C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029BE90 00298C90*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BE94 00298C94*/ PPC::Runtime::ASM::blr();
}