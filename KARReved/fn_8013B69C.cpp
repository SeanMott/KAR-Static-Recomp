//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013B69C(PPC::Runtime::GCContext* context)
{
/*8013B69C 0013849C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013B6A0 001384A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013B6A4 001384A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B6A8 001384A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013B6AC 001384AC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013B6B0 001384B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013B6B4 001384B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013B6B8 001384B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013B6BC 001384BC*/ PPC::Runtime::ASM::li(context->r5, 0x29);
/*8013B6C0 001384C0*/ PPC::Runtime::ASM::li(context->r6, 0x11);
/*8013B6C4 001384C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8013B6C8 001384C8*/ PPC::Runtime::ASM::li(context->r8, 0x3);
/*8013B6CC 001384CC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8013B6D0 001384D0*/ PPC::Runtime::ASM::li(context->r10, 0x15);
/*8013B6D4 001384D4*/ PPC::Runtime::ASM::bl(fn_8044F674);
/*8013B6D8 001384D8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8013B6DC 001384DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013B6E0 001384E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013B6E4 001384E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013B6E8 001384E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013B6EC 001384EC*/ PPC::Runtime::ASM::blr();
}