//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131274.hpp"
#include "fn_80059520.hpp"



void fn_8016F784(PPC::Runtime::GCContext* context)
{
/*8016F784 0016C584*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016F788 0016C588*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016F78C 0016C58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016F790 0016C590*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016F794 0016C594*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016F798 0016C598*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016F79C 0016C59C*/ PPC::Runtime::ASM::bl(fn_80131274);
/*8016F7A0 0016C5A0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804ACC10 @ Get_MemoryOffset_HighBit);
/*8016F7A4 0016C5A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016F7A8 0016C5A8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804ACC10 @ Get_MemoryOffset_LowBit);
/*8016F7AC 0016C5AC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8016F7B0 0016C5B0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xbdc);
/*8016F7B4 0016C5B4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8016F7B8 0016C5B8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8016F7BC 0016C5BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016F7C0 0016C5C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016F7C4 0016C5C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016F7C8 0016C5C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016F7CC 0016C5CC*/ PPC::Runtime::ASM::blr();
}