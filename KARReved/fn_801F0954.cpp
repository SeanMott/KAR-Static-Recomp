//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E6FB8.hpp"
#include "fn_801F09A0.hpp"



void fn_801F0954(PPC::Runtime::GCContext* context)
{
/*801F0954 001ED754*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0958 001ED758*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F095C 001ED75C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0960 001ED760*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F0964 001ED764*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F0968 001ED768*/ PPC::Runtime::ASM::bl(fn_801E6FB8);
/*801F096C 001ED76C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801F0970 001ED770*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*801F0974 001ED774*/ PPC::Runtime::ASM::beq(.L_801F0988);
/*801F0978 001ED778*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F097C 001ED77C*/ PPC::Runtime::ASM::bl(fn_801F09A0);
/*801F0980 001ED780*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F0984 001ED784*/ PPC::Runtime::ASM::b(.L_801F098C);
RUNTIME_PPC_JUMP_LABEL(.L_801F0988, 0x801F0988) //this is a jump label
/*801F0988 001ED788*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801F098C, 0x801F098C) //this is a jump label
/*801F098C 001ED78C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0990 001ED790*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F0994 001ED794*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F0998 001ED798*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F099C 001ED79C*/ PPC::Runtime::ASM::blr();
}