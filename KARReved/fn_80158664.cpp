//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80158664(PPC::Runtime::GCContext* context)
{
/*80158664 00155464*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80158668 00155468*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015866C 0015546C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158670 00155470*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158674 00155474*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80158678 00155478*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015867C 0015547C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158680 00155480*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80158684, 0x80158684) //this is a jump label
/*80158684 00155484*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158688 00155488*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015868C 0015548C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158690 00155490*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80158694 00155494*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r30));
/*80158698 00155498*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015869C 0015549C*/ PPC::Runtime::ASM::beq(.L_801586A8);
/*801586A0 001554A0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801586A4 001554A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801586A8, 0x801586A8) //this is a jump label
/*801586A8 001554A8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801586AC 001554AC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*801586B0 001554B0*/ PPC::Runtime::ASM::blt(.L_80158684);
/*801586B4 001554B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801586B8 001554B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801586BC 001554BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801586C0 001554C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801586C4 001554C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801586C8 001554C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801586CC 001554CC*/ PPC::Runtime::ASM::blr();
}