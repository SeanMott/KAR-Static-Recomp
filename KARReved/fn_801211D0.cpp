//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_801211D0(PPC::Runtime::GCContext* context)
{
/*801211D0 0011DFD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801211D4 0011DFD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801211D8 0011DFD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801211DC 0011DFDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801211E0 0011DFE0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801211E4 0011DFE4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801211E8 0011DFE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801211EC 0011DFEC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801211F0 0011DFF0*/ PPC::Runtime::ASM::slwi(context->r4, context->r30, 7);
/*801211F4 0011DFF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801211F8 0011DFF8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*801211FC 0011DFFC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80121200 0011E000*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r3));
/*80121204 0011E004*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80121208 0011E008*/ PPC::Runtime::ASM::beq(.L_80121210);
/*8012120C 0011E00C*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80121210, 0x80121210) //this is a jump label
/*80121210 0011E010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121214 0011E014*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121218 0011E018*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012121C 0011E01C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80121220 0011E020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80121224 0011E024*/ PPC::Runtime::ASM::blr();
}