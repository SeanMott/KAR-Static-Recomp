//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EF894.hpp"
#include "fn_killWhispy.hpp"



void fn_801002DC(PPC::Runtime::GCContext* context)
{
/*801002DC 000FD0DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801002E0 000FD0E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801002E4 000FD0E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801002E8 000FD0E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801002EC 000FD0EC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801002F0 000FD0F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801002F4 000FD0F4*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*801002F8 000FD0F8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801002FC 000FD0FC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80100300 000FD100*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80100304 000FD104*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80100308 000FD108*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010030C 000FD10C*/ PPC::Runtime::ASM::b(.L_8010033C);
RUNTIME_PPC_JUMP_LABEL(.L_80100310, 0x80100310) //this is a jump label
/*80100310 000FD110*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*80100314 000FD114*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80100318 000FD118*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010031C 000FD11C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r30);
/*80100320 000FD120*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80100324 000FD124*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x54);
/*80100328 000FD128*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8010032C 000FD12C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80100330 000FD130*/ PPC::Runtime::ASM::bl(fn_800EF894);
/*80100334 000FD134*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80100338 000FD138*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010033C, 0x8010033C) //this is a jump label
/*8010033C 000FD13C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*80100340 000FD140*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*80100344 000FD144*/ PPC::Runtime::ASM::blt(.L_80100310);
/*80100348 000FD148*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010034C 000FD14C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80100350 000FD150*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80100354 000FD154*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80100358 000FD158*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8010035C 000FD15C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80100360 000FD160*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80100364 000FD164*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80100368 000FD168*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010036C 000FD16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80100370 000FD170*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80100374 000FD174*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80100378 000FD178*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010037C 000FD17C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80100380 000FD180*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80100384 000FD184*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80100388 000FD188*/ PPC::Runtime::ASM::blr();
}