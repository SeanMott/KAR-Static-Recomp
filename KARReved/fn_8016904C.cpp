//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131264.hpp"
#include "fn_80059520.hpp"



void fn_8016904C(PPC::Runtime::GCContext* context)
{
/*8016904C 00165E4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80169050 00165E50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80169054 00165E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169058 00165E58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016905C 00165E5C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80169060 00165E60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80169064 00165E64*/ PPC::Runtime::ASM::bl(fn_80131264);
/*80169068 00165E68*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AC938 @ Get_MemoryOffset_HighBit);
/*8016906C 00165E6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80169070 00165E70*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AC938 @ Get_MemoryOffset_LowBit);
/*80169074 00165E74*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80169078 00165E78*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa74);
/*8016907C 00165E7C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80169080 00165E80*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80169084 00165E84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169088 00165E88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016908C 00165E8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169090 00165E90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80169094 00165E94*/ PPC::Runtime::ASM::blr();
}