//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802418D0.hpp"
#include "fn_80242B10.hpp"
#include "fn_8024B49C.hpp"
#include "fn_8024DA44.hpp"
#include "fn_8024ADB8.hpp"
#include "fn_8024C4F0.hpp"



void fn_802412D8(PPC::Runtime::GCContext* context)
{
/*802412D8 0023E0D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802412DC 0023E0DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802412E0 0023E0E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802412E4 0023E0E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802412E8 0023E0E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802412EC 0023E0EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*802412F0 0023E0F0*/ PPC::Runtime::ASM::bl(fn_802418D0);
/*802412F4 0023E0F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802412F8 0023E0F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1c0);
/*802412FC 0023E0FC*/ PPC::Runtime::ASM::bl(fn_80242B10);
/*80241300 0023E100*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*80241304 0023E104*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80241308 0023E108*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8024130C 0023E10C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80241310 0023E110*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r31));
/*80241314 0023E114*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80241318 0023E118*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*8024131C 0023E11C*/ PPC::Runtime::ASM::bl(fn_8024B49C);
/*80241320 0023E120*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80241324 0023E124*/ PPC::Runtime::ASM::bl(fn_8024DA44);
/*80241328 0023E128*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024132C 0023E12C*/ PPC::Runtime::ASM::bl(fn_8024ADB8);
/*80241330 0023E130*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80241334 0023E134*/ PPC::Runtime::ASM::bl(fn_8024C4F0);
/*80241338 0023E138*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024133C 0023E13C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80241340 0023E140*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80241344 0023E144*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80241348 0023E148*/ PPC::Runtime::ASM::blr();
}