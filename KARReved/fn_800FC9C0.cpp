//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7AD0.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_800E2BD0.hpp"
#include "fn_killWhispy.hpp"



void fn_800FC9C0(PPC::Runtime::GCContext* context)
{
/*800FC9C0 000F97C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800FC9C4 000F97C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FC9C8 000F97C8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*800FC9CC 000F97CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FC9D0 000F97D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FC9D4 000F97D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FC9D8 000F97D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FC9DC 000F97DC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FC9E0 000F97E0*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FC9E4 000F97E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FC9E8 000F97E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*800FC9EC 000F97EC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800FC9F0 000F97F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800FC9F4 000F97F4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FC9F8 000F97F8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FC9FC 000F97FC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*800FCA00 000F9800*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*800FCA04 000F9804*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FCA08 000F9808*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*800FCA0C 000F980C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r30));
/*800FCA10 000F9810*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FCA14 000F9814*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*800FCA18 000F9818*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*800FCA1C 000F981C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FCA20 000F9820*/ PPC::Runtime::ASM::beq(.L_800FCA30);
/*800FCA24 000F9824*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FCA28 000F9828*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FCA2C 000F982C*/ PPC::Runtime::ASM::bl(fn_800E2BD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FCA30, 0x800FCA30) //this is a jump label
/*800FCA30 000F9830*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF910 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FCA34 000F9834*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FCA38 000F9838*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800FCA3C 000F983C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FCA40 000F9840*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800FCA44 000F9844*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*800FCA48 000F9848*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FCA4C 000F984C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FCA50 000F9850*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FCA54 000F9854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FCA58 000F9858*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FCA5C 000F985C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FCA60 000F9860*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FCA64 000F9864*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FCA68 000F9868*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800FCA6C 000F986C*/ PPC::Runtime::ASM::blr();
}