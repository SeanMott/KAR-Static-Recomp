//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FABC.hpp"
#include "fn_801BE1DC.hpp"
#include "fn_80198B90.hpp"
#include "fn_801BEB3C.hpp"



void fn_801BE9B0(PPC::Runtime::GCContext* context)
{
/*801BE9B0 001BB7B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BE9B4 001BB7B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BE9B8 001BB7B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BE9BC 001BB7BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BE9C0 001BB7C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BE9C4 001BB7C4*/ PPC::Runtime::ASM::bl(fn_8019FABC);
/*801BE9C8 001BB7C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE9CC 001BB7CC*/ PPC::Runtime::ASM::bl(fn_801BE1DC);
/*801BE9D0 001BB7D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BE9D4 001BB7D4*/ PPC::Runtime::ASM::bl(fn_80198B90);
/*801BE9D8 001BB7D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BE9DC 001BB7DC*/ PPC::Runtime::ASM::beq(.L_801BEA10);
/*801BE9E0 001BB7E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801BE9E4 001BB7E4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801BE9E8 001BB7E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801BE9EC 001BB7EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801BE9F0 001BB7F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801BE9F4 001BB7F4*/ PPC::Runtime::ASM::bne(.L_801BEA10);
/*801BE9F8 001BB7F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801BE9FC 001BB7FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BEA00 001BB800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801BEA04 001BB804*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801BEA08 001BB808*/ PPC::Runtime::ASM::bl(fn_801BEB3C);
/*801BEA0C 001BB80C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BEA10, 0x801BEA10) //this is a jump label
/*801BEA10 001BB810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BEA14 001BB814*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BEA18 001BB818*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BEA1C 001BB81C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BEA20 001BB820*/ PPC::Runtime::ASM::blr();
}