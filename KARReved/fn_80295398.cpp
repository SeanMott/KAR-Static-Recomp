//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295398(PPC::Runtime::GCContext* context)
{
/*80295398 00292198*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029539C 0029219C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802953A0 002921A0*/ PPC::Runtime::ASM::beq(.L_802953B8);
/*802953A4 002921A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802953A8 002921A8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802953AC 002921AC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802953B0 002921B0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802953B4 002921B4*/ PPC::Runtime::ASM::b(.L_802953C0);
RUNTIME_PPC_JUMP_LABEL(.L_802953B8, 0x802953B8) //this is a jump label
/*802953B8 002921B8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDABC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802953BC 002921BC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802953C0, 0x802953C0) //this is a jump label
/*802953C0 002921C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802953C4 002921C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802953C8 002921C8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDAB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802953CC 002921CC*/ PPC::Runtime::ASM::blr();
}