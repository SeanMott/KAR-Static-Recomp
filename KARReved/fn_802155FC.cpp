//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80207DEC.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FED40.hpp"
#include "fn_801FC398.hpp"



void fn_802155FC(PPC::Runtime::GCContext* context)
{
/*802155FC 002123FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215600 00212400*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215604 00212404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215608 00212408*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021560C 0021240C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215610 00212410*/ PPC::Runtime::ASM::bl(fn_80207DEC);
/*80215614 00212414*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80215618 00212418*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021561C 0021241C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80215620 00212420*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215624 00212424*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80215628 00212428*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*8021562C 0021242C*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*80215630 00212430*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80215634 00212434*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215638 00212438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8021563C 0021243C*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*80215640 00212440*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215644 00212444*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215648 00212448*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021564C 0021244C*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*80215650 00212450*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80215654 00212454*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80215658 00212458*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021565C 0021245C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215660 00212460*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215664 00212464*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215668 00212468*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021566C 0021246C*/ PPC::Runtime::ASM::blr();
}