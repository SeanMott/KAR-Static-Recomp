//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80192B60.hpp"



void fn_8022D88C(PPC::Runtime::GCContext* context)
{
/*8022D88C 0022A68C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022D890 0022A690*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022D894 0022A694*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0x90c);
/*8022D898 0022A698*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022D89C 0022A69C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D8A0 0022A6A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022D8A4 0022A6A4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8022D8A8 0022A6A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8022D8AC 0022A6AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022D8B0 0022A6B0*/ PPC::Runtime::ASM::beq(.L_8022D8B8);
/*8022D8B4 0022A6B4*/ PPC::Runtime::ASM::bl(fn_80192B60);
RUNTIME_PPC_JUMP_LABEL(.L_8022D8B8, 0x8022D8B8) //this is a jump label
/*8022D8B8 0022A6B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D8BC 0022A6BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022D8C0 0022A6C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022D8C4 0022A6C4*/ PPC::Runtime::ASM::blr();
}