//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BA2C(PPC::Runtime::GCContext* context)
{
/*8029BA2C 0029882C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA30 00298830*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BA34 00298834*/ PPC::Runtime::ASM::beq(.L_8029BA4C);
/*8029BA38 00298838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BA3C 0029883C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA40 00298840*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029BA44 00298844*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA48 00298848*/ PPC::Runtime::ASM::b(.L_8029BA54);
RUNTIME_PPC_JUMP_LABEL(.L_8029BA4C, 0x8029BA4C) //this is a jump label
/*8029BA4C 0029884C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA50 00298850*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029BA54, 0x8029BA54) //this is a jump label
/*8029BA54 00298854*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA58 00298858*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029BA5C 0029885C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BA60 00298860*/ PPC::Runtime::ASM::blr();
}