//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AF548.hpp"



void fn_802AF87C(PPC::Runtime::GCContext* context)
{
/*802AF87C 002AC67C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AF880 002AC680*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AF884 002AC684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF888 002AC688*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF88C 002AC68C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802AF890 002AC690*/ PPC::Runtime::ASM::bl(fn_802AF548);
/*802AF894 002AC694*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C1150 @ Get_MemoryOffset_HighBit);
/*802AF898 002AC698*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802AF89C 002AC69C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804C1150 @ Get_MemoryOffset_LowBit);
/*802AF8A0 002AC6A0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802AF8A4 002AC6A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*802AF8A8 002AC6A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802AF8AC 002AC6AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AF8B0 002AC6B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AF8B4 002AC6B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AF8B8 002AC6B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AF8BC 002AC6BC*/ PPC::Runtime::ASM::blr();
}