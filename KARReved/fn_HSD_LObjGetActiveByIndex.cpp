//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_LObjGetActiveByIndex(PPC::Runtime::GCContext* context)
{
/*803FDB84 003FA984*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803FDB88 003FA988*/ PPC::Runtime::ASM::blt(.L_803FDBA8);
/*803FDB8C 003FA98C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x8);
/*803FDB90 003FA990*/ PPC::Runtime::ASM::bge(.L_803FDBA8);
/*803FDB94 003FA994*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805899B0 @ Get_MemoryOffset_HighBit);
/*803FDB98 003FA998*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*803FDB9C 003FA99C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, STRUCT_BYTE4_COUNT_1805899B0 @ Get_MemoryOffset_LowBit);
/*803FDBA0 003FA9A0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*803FDBA4 003FA9A4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803FDBA8, 0x803FDBA8) //this is a jump label
/*803FDBA8 003FA9A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803FDBAC 003FA9AC*/ PPC::Runtime::ASM::blr();
}