//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801655E0(PPC::Runtime::GCContext* context)
{
/*801655E0 001623E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801655E4 001623E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801655E8 001623E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801655EC 001623EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801655F0 001623F0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801655F4 001623F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801655F8 001623F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d4, context->r3));
/*801655FC 001623FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80165600 00162400*/ PPC::Runtime::ASM::beq(.L_80165610);
/*80165604 00162404*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80165608 00162408*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016560C 0016240C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80165610, 0x80165610) //this is a jump label
/*80165610 00162410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165614 00162414*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165618 00162418*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016561C 0016241C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80165620 00162420*/ PPC::Runtime::ASM::blr();
}