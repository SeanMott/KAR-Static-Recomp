//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80296104(PPC::Runtime::GCContext* context)
{
/*80296104 00292F04*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296108 00292F08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029610C 00292F0C*/ PPC::Runtime::ASM::beq(.L_80296124);
/*80296110 00292F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80296114 00292F14*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296118 00292F18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029611C 00292F1C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296120 00292F20*/ PPC::Runtime::ASM::b(.L_8029612C);
RUNTIME_PPC_JUMP_LABEL(.L_80296124, 0x80296124) //this is a jump label
/*80296124 00292F24*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296128 00292F28*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029612C, 0x8029612C) //this is a jump label
/*8029612C 00292F2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296130 00292F30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80296134 00292F34*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80296138 00292F38*/ PPC::Runtime::ASM::blr();
}