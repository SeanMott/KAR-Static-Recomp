//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hwOff.hpp"



void fn_8019B378(PPC::Runtime::GCContext* context)
{
/*8019B378 00198178*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019B37C 0019817C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B380 00198180*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B384 00198184*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B388 00198188*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019B38C 0019818C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B390 00198190*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*8019B394 00198194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8019B398 00198198*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 6);
/*8019B39C 0019819C*/ PPC::Runtime::ASM::bl(fn_hwOff);
/*8019B3A0 001981A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B3A4 001981A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B3A8 001981A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B3AC 001981AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B3B0 001981B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B3B4 001981B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B3B8 001981B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019B3BC 001981BC*/ PPC::Runtime::ASM::blr();
}