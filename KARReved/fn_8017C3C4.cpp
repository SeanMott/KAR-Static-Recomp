//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017C3C4(PPC::Runtime::GCContext* context)
{
/*8017C3C4 001791C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017C3C8 001791C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017C3CC 001791CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017C3D0 001791D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017C3D4 001791D4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017C3D8 001791D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017C3DC 001791DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017C3E0 001791E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8017C3E4 001791E4*/ PPC::Runtime::ASM::li(context->r5, 0x29);
/*8017C3E8 001791E8*/ PPC::Runtime::ASM::li(context->r6, 0x11);
/*8017C3EC 001791EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8017C3F0 001791F0*/ PPC::Runtime::ASM::li(context->r8, 0x3);
/*8017C3F4 001791F4*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8017C3F8 001791F8*/ PPC::Runtime::ASM::li(context->r10, 0x5);
/*8017C3FC 001791FC*/ PPC::Runtime::ASM::bl(fn_8044F674);
/*8017C400 00179200*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8017C404 00179204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017C408 00179208*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017C40C 0017920C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017C410 00179210*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017C414 00179214*/ PPC::Runtime::ASM::blr();
}