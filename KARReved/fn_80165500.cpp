//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013125C.hpp"
#include "fn_80059520.hpp"



void fn_80165500(PPC::Runtime::GCContext* context)
{
/*80165500 00162300*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80165504 00162304*/ PPC::Runtime::ASM::mflr(context->r0);
/*80165508 00162308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016550C 0016230C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165510 00162310*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80165514 00162314*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80165518 00162318*/ PPC::Runtime::ASM::bl(fn_8013125C);
/*8016551C 0016231C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AC770 @ Get_MemoryOffset_HighBit);
/*80165520 00162320*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80165524 00162324*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AC770 @ Get_MemoryOffset_LowBit);
/*80165528 00162328*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8016552C 0016232C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x9d0);
/*80165530 00162330*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80165534 00162334*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80165538 00162338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016553C 0016233C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165540 00162340*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80165544 00162344*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80165548 00162348*/ PPC::Runtime::ASM::blr();
}