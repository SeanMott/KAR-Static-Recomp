//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294F00(PPC::Runtime::GCContext* context)
{
/*80294F00 00291D00*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F04 00291D04*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294F08 00291D08*/ PPC::Runtime::ASM::beq(.L_80294F24);
/*80294F0C 00291D0C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F10 00291D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80294F14 00291D14*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F18 00291D18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80294F1C 00291D1C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F20 00291D20*/ PPC::Runtime::ASM::b(.L_80294F2C);
RUNTIME_PPC_JUMP_LABEL(.L_80294F24, 0x80294F24) //this is a jump label
/*80294F24 00291D24*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F28 00291D28*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294F2C, 0x80294F2C) //this is a jump label
/*80294F2C 00291D2C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F30 00291D30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80294F34 00291D34*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294F38 00291D38*/ PPC::Runtime::ASM::blr();
}