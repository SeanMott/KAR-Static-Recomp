//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025ABAC(PPC::Runtime::GCContext* context)
{
/*8025ABAC 002579AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025ABB0 002579B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025ABB4 002579B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025ABB8 002579B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025ABBC 002579BC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025ABC0 002579C0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025ABC4 002579C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025ABC8 002579C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ABCC 002579CC*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025ABD0 002579D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025ABD4 002579D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025ABD8 002579D8*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025ABDC 002579DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ABE0 002579E0*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025ABE4 002579E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025ABE8 002579E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025ABEC 002579EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025ABF0 002579F0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025ABF4 002579F4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025ABF8 002579F8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025ABFC 002579FC*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025AC00 00257A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025AC04 00257A04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025AC08 00257A08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025AC0C 00257A0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025AC10 00257A10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025AC14 00257A14*/ PPC::Runtime::ASM::blr();
}