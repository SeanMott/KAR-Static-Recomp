//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"
#include "fn_8021229C.hpp"
#include "fn_8021229C.hpp"
#include "fn_801FECD4.hpp"
#include "fn_801FECF8.hpp"



void fn_80212CEC(PPC::Runtime::GCContext* context)
{
/*80212CEC 0020FAEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212CF0 0020FAF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80212CF4 0020FAF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212CF8 0020FAF8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212CFC 0020FAFC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80212D00 0020FB00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80212D04 0020FB04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80212D08 0020FB08*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*80212D0C 0020FB0C*/ PPC::Runtime::ASM::lis(context->r3, fn_8021229C @ Get_MemoryOffset_HighBit);
/*80212D10 0020FB10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8021229C @ Get_MemoryOffset_LowBit);
/*80212D14 0020FB14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad4, context->r31));
/*80212D18 0020FB18*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*80212D1C 0020FB1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80212D20 0020FB20*/ PPC::Runtime::ASM::bne(.L_80212D34);
/*80212D24 0020FB24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*80212D28 0020FB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212D2C 0020FB2C*/ PPC::Runtime::ASM::bl(fn_801FECD4);
/*80212D30 0020FB30*/ PPC::Runtime::ASM::b(.L_80212D40);
RUNTIME_PPC_JUMP_LABEL(.L_80212D34, 0x80212D34) //this is a jump label
/*80212D34 0020FB34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*80212D38 0020FB38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80212D3C 0020FB3C*/ PPC::Runtime::ASM::bl(fn_801FECF8);
RUNTIME_PPC_JUMP_LABEL(.L_80212D40, 0x80212D40) //this is a jump label
/*80212D40 0020FB40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212D44 0020FB44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212D48 0020FB48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212D4C 0020FB4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212D50 0020FB50*/ PPC::Runtime::ASM::blr();
}