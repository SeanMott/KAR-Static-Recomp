//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_801583E0(PPC::Runtime::GCContext* context)
{
/*801583E0 001551E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801583E4 001551E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801583E8 001551E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801583EC 001551EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801583F0 001551F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801583F4 001551F4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801583F8 001551F8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801583FC 001551FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158400 00155200*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80158404 00155204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x738, context->r3));
/*80158408 00155208*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015840C 0015520C*/ PPC::Runtime::ASM::beq(.L_80158414);
/*80158410 00155210*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80158414, 0x80158414) //this is a jump label
/*80158414 00155214*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158418 00155218*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015841C 0015521C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80158420 00155220*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80158424 00155224*/ PPC::Runtime::ASM::blr();
}