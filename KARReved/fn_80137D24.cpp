//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80174638.hpp"
#include "fn_80177688.hpp"



void fn_80137D24(PPC::Runtime::GCContext* context)
{
/*80137D24 00134B24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137D28 00134B28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137D2C 00134B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137D30 00134B30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80137D34 00134B34*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80137D38 00134B38*/ PPC::Runtime::ASM::bl(fn_80174638);
/*80137D3C 00134B3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80137D40 00134B40*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80137D44 00134B44*/ PPC::Runtime::ASM::bl(fn_80177688);
/*80137D48 00134B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137D4C 00134B4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80137D50 00134B50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137D54 00134B54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137D58 00134B58*/ PPC::Runtime::ASM::blr();
}