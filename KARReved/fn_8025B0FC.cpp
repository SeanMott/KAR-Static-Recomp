//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025B0FC(PPC::Runtime::GCContext* context)
{
/*8025B0FC 00257EFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B100 00257F00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B104 00257F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B108 00257F08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B10C 00257F0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B110 00257F10*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025B114 00257F14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B118 00257F18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B11C 00257F1C*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025B120 00257F20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B124 00257F24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025B128 00257F28*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025B12C 00257F2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B130 00257F30*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025B134 00257F34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B138 00257F38*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025B13C 00257F3C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B140 00257F40*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025B144 00257F44*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025B148 00257F48*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025B14C 00257F4C*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025B150 00257F50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B154 00257F54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B158 00257F58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025B15C 00257F5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B160 00257F60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B164 00257F64*/ PPC::Runtime::ASM::blr();
}