//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204FAC.hpp"
#include "fn_801FC398.hpp"
#include "fn_80206E1C.hpp"



void fn_802151F4(PPC::Runtime::GCContext* context)
{
/*802151F4 00211FF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802151F8 00211FF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802151FC 00211FFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215200 00212000*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215204 00212004*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215208 00212008*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r3));
/*8021520C 0021200C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r3));
/*80215210 00212010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*80215214 00212014*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80215218 00212018*/ PPC::Runtime::ASM::bne(.L_8021522C);
/*8021521C 0021201C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80215220 00212020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*80215224 00212024*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*80215228 00212028*/ PPC::Runtime::ASM::bl(fn_80204FAC);
RUNTIME_PPC_JUMP_LABEL(.L_8021522C, 0x8021522C) //this is a jump label
/*8021522C 0021202C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80215230 00212030*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80215234 00212034*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80215238 00212038*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021523C 0021203C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80215240 00212040*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215244 00212044*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80215248 00212048*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021524C 0021204C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*80215250 00212050*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80215254 00212054*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*80215258 00212058*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8021525C 0021205C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215260 00212060*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80215264 00212064*/ PPC::Runtime::ASM::bl(fn_80206E1C);
/*80215268 00212068*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021526C 0021206C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215270 00212070*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215274 00212074*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215278 00212078*/ PPC::Runtime::ASM::blr();
}