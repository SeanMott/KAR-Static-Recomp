//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801728C8(PPC::Runtime::GCContext* context)
{
/*801728C8 0016F6C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801728CC 0016F6CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801728D0 0016F6D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801728D4 0016F6D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801728D8 0016F6D8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801728DC 0016F6DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801728E0 0016F6E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801728E4 0016F6E4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801728E8, 0x801728E8) //this is a jump label
/*801728E8 0016F6E8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801728EC 0016F6EC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*801728F0 0016F6F0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801728F4 0016F6F4*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*801728F8 0016F6F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc80, context->r30));
/*801728FC 0016F6FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80172900 0016F700*/ PPC::Runtime::ASM::beq(.L_8017290C);
/*80172904 0016F704*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80172908 0016F708*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc80, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8017290C, 0x8017290C) //this is a jump label
/*8017290C 0016F70C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80172910 0016F710*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x8);
/*80172914 0016F714*/ PPC::Runtime::ASM::blt(.L_801728E8);
/*80172918 0016F718*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017291C 0016F71C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80172920 0016F720*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172924 0016F724*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172928 0016F728*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017292C 0016F72C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80172930 0016F730*/ PPC::Runtime::ASM::blr();
}